TOP = ../../..
include $(TOP)/mak/config.mak

## Defines this as a provider module to the CIMPLE make environment
## The target insmod can be used to install the provider shared library
MODULE=1

SHARED_LIBRARY = cimplePresident

## List of classes for this provider is in a file classlist in the provider
## directory
SOURCES = repository.cpp \
          President.cpp \
          President_Provider.cpp \
          module.cpp

#CIMPLE_CMPI_MODULE = 1
CIMPLE_PEGASUS_MODULE = 1
include ../common.mak

include $(TOP)/mak/rules.mak

###############################################################################
##
## CIMPLE tool targets to build the classes, providers, and module
##
###############################################################################

genclass:
	$(BINDIR)/genclass -r President

genprov:
	$(BINDIR)/genprov President

genmod:
	$(BINDIR)/genmod President President

## As an alternate to getclass, genprov, and genproj you can use the
## following which does all three commands.	
genproj:
	$(BINDIR)/genproj President President

regmod:
	$(BINDIR)/regmod -c $(TARGET)

unregister:
	$(BINDIR)/regmod -u -c $(TARGET)

###############################################################################
##
## Manual demonstration tests using cimcli. NOTE: Requires 2.10 cimcli
##        for some of the tests (ex. ci)
##
###############################################################################
ei:
	$(CIMCLI) ei President

ni:
	$(CIMCLI) ni President

gi:
	$(CIMCLI) gi President

