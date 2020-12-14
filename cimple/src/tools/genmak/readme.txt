The genmak utility is a support tool that simplifies writing make files
for CIMPLE provider creation and manipulation during the development process.

Note that this utility is not really required and that a development group
may elect to have a completely different development process.   

This tool builds a basic Makefile for a single provider module based on either:


1. A list of classes. In this case it generates the assumed names for the
   files to be compiled (<className>.cpp and <className_Provider>.cpp for
   each provider to be compiled and then addes the repository.cpp and
   module.cpp file names.  In this mode genmak can be used to create a basic
   Makefile before using genclass, etc. to create the providers.

2. A list of the files to be compiled (all of the .cpp files for the provider
   module.  This was the original mode for generating make files previous
   to CIMPLE 2.0.25 and required that the provider compilable files all be
   created first.

It builds the Makefile based on certain assumptions about location of the
generate files including locations for:

    BINDIST

In addition, the tool has options to:

1. Override any existing Makefile.  Note that it completely replaces the
   existing Makefile and changes the name of any existing Makefile to
   Makefile.old

2. (Experimental) Generate standard make targets for genclass, genprov,
   genmod, and regmod based on the provider name and classlist.

3  (Experimental) Generate a target for the regmod tool. Note that this is
   based on the OpenPegasus model for registering providers.

2. (Experimental) add some standard tests so that at least basic tests can
   be run on the resulting provider. This is a limited set of tests of
   generic operations on the provider (enumerate instances and enumerate
   instance names) simply so that the basic operations of the provider can
   be confirmed and assumes that the provider supports these operations.  This
   is based on an OpenPegasus command line tool (cimcli).
