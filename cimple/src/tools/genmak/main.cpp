/*
**==============================================================================
**
** Copyright (c) 2003 - 2008, Michael Brasher, Karl Schopmeyer
** Copyright (c) 2007 - 2012 Inova Development Inc.
** Copyright (c) 2009 - 2012 Karl Schopmeyer
** 
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
** 
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE.
**
**==============================================================================
*/

/**************************************************************************** 
** 
**   Create a Makefile for a single provider 
** 
****************************************************************************/
/*
    TODO list:
        1. Extend the namespace option to allow multiple namespaces
        2. Create specific test to test this utility.
        3. Extend for wmi type providers
*/

#include <cimple/config.h>
#include <cassert>
#include <getopt.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <string>
#include <unistd.h>
#include <util/util.h>
#include <vector>
#include <string>
#include "usage.h"

using namespace std;

// Developer compile level diagnostic.  Normally off
//#define TRACELINE printf ("LINE %u\n", __LINE__);
#define TRACELINE

static bool force_opt = false;
static bool cmpi_opt = false;
static bool regmod_opt = false;
static bool gen_operations_opt = false;
static bool gen_livetest_opt = false;
static bool verbose_opt = false;
static string namespace_opt = "root/cimv2";
static string cimple_bin_dir_opt = "";
static string cmd_line;

static bool valid_library_name(const char* path)
{
    const char* p = path;

    for (; *p; p++)
    {
        if (!isalnum(*p) && *p != '_')
            return false;
    }

    return p != path;
}

// create a string to represent indented size
string indent_line(int indent_size)
{
    string x = "";
    for (int i = 0; i < indent_size; i++)
    {
        x.append(" ");
    }
    return x;
}

// generate a Makefile list from the list_name and list of strings in
// the list parameter
void gen_make_list(FILE* out, const char * list_name, vector<string>& list)
{
    int indent_size = fprintf(out, "%s = ", list_name);

    for (size_t i = 0; i < list.size(); i++)
    {
        string indent_str = "";
        if (i != 0)
        {
            indent_str = indent_line(indent_size);
        }
        
        // output single line with possible list name, single entry and
        // possible continuation marker.
        fprintf(out, "%s%s %s", indent_str.c_str(),
                list[i].c_str(),
                ((list.size() != i+1)? "\\\n" : "\n"));
    }
}

static void genmak(const char* pname, const char* library_name,
                   int argc, char** argv)
{
    TRACELINE;
    // Check library name:

    if (!valid_library_name(library_name))
    {
        err("Invalid library name: %s", library_name);
    }

    // Refuse to overwrite Makefile unless -f given:
    TRACELINE;
    if (exists("Makefile"))
    {
        if (!force_opt)
        {
            err("\"Makefile\" already exists. Use -f to force overwrite");
        }
        else
        {
            TRACELINE;
            // delete any existing old Makefile
            if (exists("Makefile.bak"))
            {
                TRACELINE;
                if (remove("Makefile.bak") != 0)
                {
                    err("could not remove previous Makefile.bak");
                }
            }
            TRACELINE;
            if (rename("Makefile", "Makefile.bak") == 0)
            {
                TRACELINE;
                if (verbose_opt)
                {
                    printf("\"Makefile\" renamed to \"Makefile.bak\"\n");
                }
            }
            else
            {
                err("rename of \"Makefile\" to \"Makefile.bak\" failed.");
            }
            TRACELINE;
        }
    }

    // Locate the TOP directory that has the "mak" directory.
    TRACELINE;
    char top[1024];
    sprintf(top, "%s/cimple", CIMPLE_DATADIR);

    if (!exists(top))
    {
        err("missing required directory: \"%s\"", top);
    }

    // Check for config.options file:

    char options[1024];
    sprintf(options, "%s/config.options", top);

    if (!exists(options))
    {
        err("missing required file: \"%s\"", options);
    }

    // Check for mak directory:

    char makdir[1024];
    sprintf(makdir, "%s/mak", top);

    if (!exists(makdir))
    {
        err("missing required directory: \"%s\"", makdir);
    }

    // Open Makefile:

    FILE* out = fopen("Makefile", "wb");

    if (!out)
    {
        err("failed to open \"Makefile\"");
    }

    // Write Makefile header and general contents:

    fprintf(out, "##\n## Makefile generated by genmak version %s\n##\n\n",
                 CIMPLE_VERSION_STRING);
    fprintf(out, "##This makefile created with:\n");
    fprintf(out, "##CMD LINE: %s\n\n", cmd_line.c_str());

    fprintf(out, "TOP=%s\n", top);
    fprintf(out, "##ROOT=.\n");
    fprintf(out, "##BINDIR=.\n");
    fprintf(out, "##LIBDIR=.\n");
    fprintf(out, "include $(TOP)/mak/config.mak\n");
    fprintf(out, "\n");
    fprintf(out, "MODULE=1\n");
    fprintf(out, "SHARED_LIBRARY = cimple%s\n", library_name);

    // Create lists of classes or source files from input

    vector<string> class_list;
    vector<string> source_file_list;
    string class_list_output_string;
    bool classes = false;

    // based on first name determine if this is class list or file list
    if (strstr(argv[0],".") == NULL)
    {
        classes = true;
    }

    // generate list of source files
    for (int i = 0; i < argc; i++)
    {
        // create the .cpp file list from the class list
        if (strstr(argv[i], ".") == NULL )
        {
            if (!classes)
            {
                err("cannot mix class list and file list on input. "
                    " %s generated error", argv[i]);
            }
            class_list.push_back(argv[i]);

            string filename = argv[i];
            filename.append(".cpp");
            source_file_list.push_back(filename);

            classes = true;
            filename = argv[i];
            filename.append("_Provider.cpp");
            source_file_list.push_back(filename);
        }
        // output the name of the file directly
        else
        {
            if (classes)
            {
                err("cannot mix a class list and file list on input. "
                    "parameter %s generated err", argv[i]);
            }
            if (!exists(argv[i]))
            {
                err("source file does not exist: %s\n", argv[i]);
            }
            source_file_list.push_back(argv[i]);
        }
    }

    // if list of classes append the std file names
    // Generate list of classes for the Makefile, one per line if the input
    // was a set of classes.
    if (classes)
    {
        source_file_list.push_back("module.cpp");
        source_file_list.push_back("repository.cpp");
        fprintf(out, "\n##\n## Define list of provider classes for compile and"
                 " link\n##\n\n");
        gen_make_list(out,"PROVIDER_CLASS_LIST", class_list);
    }

    // Generate the list of source files to Makefile
    fprintf(out, "\n##\n## Define source files for compile and link\n##\n\n");

    gen_make_list(out,"SOURCES", source_file_list);

    fprintf(out, "\n");

    // Generate Provider type info to Makefile
    fprintf(out, "##\n## Module defined as %s interface\n##\n", 
            ( cmpi_opt? "cmpi" : "Pegasus C++") );
 
    // output the statements to define the provider type.   
    if (cmpi_opt)
    {
        fprintf(out, "CIMPLE_CMPI_MODULE=1\n");
        fprintf(out, "DEFINES += -DCIMPLE_CMPI_MODULE\n");
        fprintf(out, "LIBRARIES += cimplecmpiadap\n");

        fprintf(out, "## Comment the above and uncomment below to rebuild as"
                     " PEGASUS Provider\n");
        fprintf(out, "## CIMPLE_PEGASUS_MODULE=1\n");
        fprintf(out, "## DEFINES += -DCIMPLE_PEGASUS_MODULE\n");
        fprintf(out, "## LIBRARIES += cimplepegadap\n");
        if (verbose_opt)
        {
            printf("generate CMPI module\n");
        }
    }
    else
    {
        fprintf(out, "CIMPLE_PEGASUS_MODULE=1\n");
        fprintf(out, "DEFINES += -DCIMPLE_PEGASUS_MODULE\n");
        fprintf(out, "LIBRARIES += cimplepegadap\n");

        fprintf(out, "## Comment the above and uncomment below to rebuild as"
                     " CMPI Provider\n");
        fprintf(out, "## CIMPLE_CMPI_MODULE=1\n");
        fprintf(out, "## DEFINES += -DCIMPLE_CMPI_MODULE\n");
        fprintf(out, "## LIBRARIES += cimplecmpiadap\n");
        if (verbose_opt)
        {
            printf("generate Pegasus C++ module\n");
        }
    }

    fprintf(out, "\n");

    fprintf(out, "LIBRARIES += cimple\n");

    fprintf(out, "\n");

    fprintf(out, "include $(TOP)/mak/rules.mak\n");

    if (gen_operations_opt)
    {
        if (classes == false )
        {
            err(" Option to generate Operations (-g) Can only be used if"
                "class list provided\n");
        }
        else
        {
            fprintf(out,
            "##############################################################\n"
            "##\n"
            "##     Makefile Targets for generating class and provider files\n"
            "##\n"
            "#############################################################\n"
            "\n");
            
            fprintf(out, "genclass:\n");
            fprintf(out, "\tgenclass -r $(PROVIDER_CLASS_LIST)\n");

            fprintf(out, "genprov:\n");
            fprintf(out, "\tgenprov $(PROVIDER_CLASS_LIST)\n");

            fprintf(out, "genmod:\n");
            fprintf(out, "\tgenmod %s $(PROVIDER_CLASS_LIST)\n",
                    library_name);

            fprintf(out, "genproj:\n");
            fprintf(out, "\tgenproj -r %s $(PROVIDER_CLASS_LIST)\n",
                    library_name);
        }
    }

    if (regmod_opt)
    {
        fprintf(out, "\n");
        fprintf(out, "#####################################################\n");

        fprintf(out, "##\n## Cimple module registration for Open Pegasus\n");
        fprintf(out, "## registers for namespace %s\n##\n",
                     namespace_opt.c_str());
        fprintf(out, "#####################################################\n");
        fprintf(out, "\nregmod:\n");
        fprintf(out, "\tregmod -c $(TARGET)\n\n");
        fprintf(out, "unregister:\n");
        fprintf(out, "\tregmod -uc $(TARGET)\n");
        fprintf(out, "\n");
    }

    // if livetest option and generated from class list, generate some
    // test cases.
    if (gen_livetest_opt)
    {
        if (classes == false )
        {
            err("Option -l can only be used if class list provided\n");
        }
        else
        {
            fprintf(out,
"###########################################################################\n"
"##\n"
"## Manual demonstration tests using OpenPegasus cimcli. NOTE: Requires\n"
"## OpenPegasus version 2.10 cimcli for some of tests (ex. ci)\n"
"##\n"
"###########################################################################\n"
"\n");
        }
  
        fprintf(out, "ei:\n");
        for (size_t i = 0 ; i < class_list.size(); i++)
        {
            fprintf(out, "\tcimcli ei %s -n %s\n", class_list[i].c_str(),
                    namespace_opt.c_str());
        }

        fprintf(out, "\nni:\n");
        for (size_t i = 0 ; i < class_list.size(); i++)
        {
            fprintf(out, "\tcimcli ni %s -n %s\n", class_list[i].c_str(),
                    namespace_opt.c_str());
        }
    }

    // Close Makefile:

    fclose(out);

    printf("Created Makefile\n");
}

int main(int argc, char** argv)
{
    const char* arg0 = argv[0];

    // save cmd line params for insert into makefile
    for (size_t i = 0; i < argc ; i++)
    {
        cmd_line.append(argv[i]);
        cmd_line.append(" ");
    }

    // Check options:

    int opt;

    while ((opt = getopt(argc, argv, "fhVCrglvn:")) != -1)
    {
        switch (opt)
        {
            case 'h':
            {
                fprintf(stderr, (char*)USAGE, arg0);
                exit(0);
            }

            case 'V':
            {
                printf("%s\n", CIMPLE_VERSION_STRING);
                exit(0);
            }

            case 'f':
            {
                force_opt = true;
                break;
            }
            case 'g':
            {
                gen_operations_opt = true;
                break;
            }

            case 'C':
            {
                cmpi_opt = true;
                break;
            }

            case 'r':
            {
                regmod_opt = true;
                break;
            }
            case 'l':
            {
                gen_livetest_opt = true;
                break;
            }
            case 'v':
            {
                verbose_opt = true;
                break;
            }
            case 'n':
            {
                if (!optarg)
                {
                    err("missing argument on -n option (namespace)");
                    exit(1);
                }
                namespace_opt = optarg;
            }

            default:
                err("unknown option: %c", opt);
                break;
        }
    }

    // Check usage.

    argc -= optind;
    argv += optind;

    if (argc < 2)
    {
        fprintf(stderr, (char*)USAGE, arg0);
        exit(1);
    }

    // Generate module file.

    genmak(arg0, argv[0], argc - 1, argv + 1);

    return 0;
}
