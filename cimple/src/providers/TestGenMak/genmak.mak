###############################################################################
## This Makefile and tests the genmak tool
##
## This makfile generates a Makefile, generates the
## various Cimple c++ files, registers the provider, runs tests, and removes
## the provider.  It is a test of the genmak, genclass
## genprov, etc. functions operating together.
##
## NOTE:  The only permanent files in CVS should be:
##        - repository.mof
##        - *_Provider.cpp files since they are used to insert the
##          specific module code.
##
## LIMITATIONS:
##    Not part of the user live tests
##    Runs correctly only with OpenPegasus because it tests automated
##        registration and run with OpenPegasus tools.
##    Tested only in linux today
##    Does not work with WMI provider option (genmak issue)
##
###############################################################################
##  TODO: 1. Add code to remake the Makefile with the files option
##        2. Add method to include that in complete test
##        3. Add test with another namespace tests
###############################################################################

TOP = ../../..
include $(TOP)/mak/config.mak

## list of classes for this provider as defined in repository.mof
MY_CLASS_LIST = CMPL_firstClass CMPL_secondClass

## generate a new Makefile for the two classes with C++ provider option
genMakefileCxx:
	genmak -frlg testgenmak $(MY_CLASS_LIST)

## generate a new Makefile for the two classes
genMakefileCMPI:
	genmak -frlgC testgenmak $(MY_CLASS_LIST)

## Build from the Makefile where genmak created the Makefile from the
## class list. In this case all of the parameters are built into the
## Makefile so the targets are simple
buildFromClassList:
	make genclass
	make genprov
##      move saved provider.cpp files into place to recover instance build code
	cp CMPL_firstClass_Provider.cpp.save CMPL_firstClass_Provider.cpp
	cp CMPL_secondClass_Provider.cpp.save CMPL_secondClass_Provider.cpp
##      Now rebuild Providers to incorporate instance build code
	make genprov
	make genmod
	make
	make insmod
	make regmod

## Build the Cimple source files and then create Makefile from the
## source file list.
buildFromFileList:
	genclass  -r $(MY_CLASS_LIST)
	genprov $(MY_CLASS_LIST)
##      move saved provider .cpp files into place to recover instance
##      build code
	cp CMPL_firstClass_Provider.cpp.save CMPL_firstClass_Provider.cpp
	cp CMPL_secondClass_Provider.cpp.save CMPL_secondClass_Provider.cpp
	genprov $(MY_CLASS_LIST)
	genmod testgenmak $(MY_CLASS_LIST)
##      Create Makefile (force, register, generate tool targets
##      Note that the live tests and genclass, etc. generation targets cannot
##      be defined when files list specified
	genmak -fr testgenmak CMPL_firstClass.cpp \
            CMPL_firstClass_Provider.cpp \
            CMPL_secondClass.cpp CMPL_secondClass_Provider.cpp \
            repository.cpp module.cpp
##      from here forward we can use the created Makefile
	make
	make insmod
	make regmod

## Run tests against the created provider.  This should be independent of
## the provider type.  NOTE: It is based on the use of Pegasus today.
runtest:
	cimcli gc CMPL_firstClass
	cimcli gc CMPL_secondClass
	cimcli gc CMPL_firstClass --sum -count 3
	cimcli ei CMPL_secondClass --sum -count 3
	cimcli gc CMPL_firstClass key=1
	cimcli gc CMPL_secondClass key=3

## Run tests that are added to the Makefile
runtestsFromMakefile:
	make ei
	make ni

## Test that the provider and classes were removed.
## FUTURE. Need way to test registration status for OpenPegasus. Could
## extend regmod to define a status call.
testRemoved:
	cimcli gc CMPL_firstClass --expExit 6
	cimcli gc CMPL_secondClass --expExit 6
	cimcli gi CMPL_firstClass --expExit 5
	cimcli gi CMPL_secondClass --expExit 5

## Clean up after provider test. Unregisters the provider and cleans up
## all of the object and source files created during the test
cleanall:
	make unregister
	make clean
	$(RM) *.h *.cpp Makefile.* 

cleanFiles:
	make clean
	$(RM) *.h *.cpp Makefile.* 

## Run the complete test once each for each provider type by building the
## provider from the class list provided to genmak
testCxxProvider: cleanFiles genMakefileCxx buildFromClassList runtest \
                 runtestsFromMakefile cleanall testRemoved
	$(ECHO) ++++ testCxxProvider Successful

testCMPIProvider: cleanFiles genMakefileCMPI buildFromClassList \
                 runtest cleanall testRemoved
	$(ECHO) ++++ testCMPIProvider Successful

testCxxProviderFromFileList: cleanFiles buildFromFileList runtest \
                 cleanall testRemoved
	$(ECHO) +++++ testCMPIProviderFromFileList Successful

alltests:
	$(MAKE) -f genmak.mak testCxxProvider
	$(MAKE) -f genmak.mak testCMPIProvider
	$(MAKE) -f genmak.mak testCxxProviderFromFileList
	$(ECHO) +++++++ genmake.mak alltests successful


