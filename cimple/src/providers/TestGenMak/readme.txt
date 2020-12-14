The code in this directory builds a provider by stepping through the whole
process of in the make file genmak.mak:

1. Build the make file by running genmak utility.
2. runs genclass
3. runs genprov
4. Overlay the *_Provider.cpp code with previously written version that
   builds actual instances
5. runs genmod to generate the module code
6. runs make to actually build the provider
7. runs make insmod to physically install the provider into run environment
8. runs regmod to register the provider
9. runs a set of tests defined in the runtests target
10. cleans out all of the compiled and generated files. The only permanent
   files are repository.mof and the *_Provider.cpp files which contain the
   code to create instances.

Normally this test is to be run as part of the development cycle for CIMPLE.

It includes the following major test targets:

testC++Provider - Test the complete path of genmak with classes, genclass,
genprov, genmod, make, regmod, runtests unregister, clean up with an
OpenPegasus C++ provider.

testCMPIProvidern - Same except CMPI provider created.
