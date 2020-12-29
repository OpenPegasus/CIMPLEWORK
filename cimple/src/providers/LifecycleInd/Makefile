TOP = ../../..
include $(TOP)/mak/config.mak

MODULE=1

SHARED_LIBRARY = cimpleLifecycleInd

SOURCES = \
    module.cpp \
    LC_Test.cpp \
    LC_Test_Provider.cpp \
    LC_InstCreation.cpp \
    LC_InstCreationProvider.cpp \
    repository.cpp

# Allow building providers for either CMPI or Pegasus C++ provider interface
# Changing Provider interfaces requires reregistering the provider.
# Default is CMPI Provider
ifndef CIMPLE_PROVIDER_TYPE
   CIMPLE_CMPI_MODULE = 1
endif

## Expand CIMPLE_***_MODULE definitions and CIMPLE_PROVIDER_TYPE
include ../common.mak

include $(TOP)/mak/rules.mak

regmod:
	$(BINDIR)/regmod -c $(TARGET)

genprov:
	$(BINDIR)/genprov LC_Test LC_InstCreation

genmod:
	$(BINDIR)/genmod LC_Test LC_InstCreation
genclass:
	$(BINDIR)/genclass -r LC_Test LC_InstCreation

genproj:
	$(BINDIR)/genproj LC_Test LC_InstCreation

regmod-dump:
	$(BINDIR)/regmod -d -c $(TARGET)


## manual tests

eitest:

	cimcli ei LC_Test

createinsit:

	cimcli ci LC_Test id=1 first=Blah

delinst:
	cimcli di LC_test id=1
