TOP = ../../../..
include $(TOP)/mak/config.mak

BINARY = test_print

SOURCES = main.cpp SomeClass.cpp OtherClass.cpp

LIBRARIES = cimple

include $(TOP)/mak/rules.mak

genclass:
	genclass SomeClass OtherClass

tests:
	$(BINDIR)/test_print

vg:
	$(VALGRIND) --tool=memcheck --leak-check=full $(TARGET)
