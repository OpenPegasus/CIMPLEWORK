##
## Makefile generated by genmak version 2.0.25
##

##This makefile created with:
##CMD LINE: genmak -fgrl President President 

TOP=/home/kschopmeyer/cimplework/pegasus/LINUX_X86_64_GNU/share/cimple
##ROOT=.
##BINDIR=.
##LIBDIR=.
include $(TOP)/mak/config.mak

MODULE=1
SHARED_LIBRARY = cimplePresident

##
## Define list of provider classes for compile and link
##

PROVIDER_CLASS_LIST = President 

##
## Define source files for compile and link
##

SOURCES = President.cpp \
          President_Provider.cpp \
          module.cpp \
          repository.cpp 

##
## Module defined as Pegasus C++ interface
##
CIMPLE_PEGASUS_MODULE=1
DEFINES += -DCIMPLE_PEGASUS_MODULE
LIBRARIES += cimplepegadap
## Comment the above and uncomment below to rebuild as CMPI Provider
## CIMPLE_CMPI_MODULE=1
## DEFINES += -DCIMPLE_CMPI_MODULE
## LIBRARIES += cimplecmpiadap

LIBRARIES += cimple

include $(TOP)/mak/rules.mak
##############################################################
##
##     Makefile Targets for generating class and provider files
##
#############################################################

genclass:
	genclass -r $(PROVIDER_CLASS_LIST)
genprov:
	genprov $(PROVIDER_CLASS_LIST)
genmod:
	genmod President $(PROVIDER_CLASS_LIST)
genproj:
	genproj -r President $(PROVIDER_CLASS_LIST)

#####################################################
##
## Cimple module registration for Open Pegasus
## registers for namespace root/cimv2
##
#####################################################

regmod:
	regmod -c $(TARGET)

unregister:
	regmod -uc $(TARGET)

###########################################################################
##
## Manual demonstration tests using OpenPegasus cimcli. NOTE: Requires
## OpenPegasus version 2.10 cimcli for some of tests (ex. ci)
##
###########################################################################

ei:
	cimcli ei President -n root/cimv2

ni:
	cimcli ni President -n root/cimv2
