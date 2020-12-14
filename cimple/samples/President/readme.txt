
The President provider is a first example of creating a CIMPLE
provider. This provider implements the simple class President and a very
simple provider implementation which defines instances for the
provider to return based on 3 instances of President that are built
when the enumerateInstance function is called. The CIMPLE
infrastructure then implements the enumerateInstanceNames and
getInstance functions.

Create, Modify, and Delete instance are not used in this sample.

The code in this directory includes:

  The class definition (repository.mof)
  The Provider Class files created by a executing genclass (President.* and
  repository.*)
  The Provider implementation files created by executing genprov
      (President_Provider.*)
  The module.cpp file created by executing genprov which defines the interface.
  A Makefile that was create with genmak (genmak -fgrl President President)
  that provides specific targets for:
      - building the provider (make) from the existing files.
      - Registering the provider (make insmod and make regmod) that installs
        and registers the provider with OpenPegasus
      - Unregister target that unregisters and removes the provider and its
        class definition from OpenPegasus
      - targets for the provider generation tools (genclass, genprov, etc. so
        that you can regenerate the provider .h and .cpp files.

The mof and provider files include some sample extensions to the Class
(new property and new method) so that you can experiment with extending and
 regenerating the provider (see below for details).

WHAT YOU CAN DO WITH THIS PROVIDER.

NOTE: The example is based in interfacing with OpenPegasus.

Building and installing the provider from the existing files:

Execute the following to build and install this provider based on using
OpenPegasus as the CIM Server:

0. Insure that OpenPegasus is built, installed, and is running.
1. Build CIMPLE if you have not already done that.
2. Go to this directory (cimple/samples/President)
3. Compile the provider (make) to create the shared library.
4. Install the provider (make insmod). Note that for the moment the insmod
   function is not defined as a target in the Makefile so that you have to
   remember to do this.  It simply copies the shared library from the $BINDIR
   directory to the OpenPegasus provider install directory.
5. Register the provider for OpenPegasus (make regmod). You should now have
   an installed and waiting provider for the class President in the namespace
   root/cimv2.
6. Test the resulting installed provider (make ei, make ni) which executes
   the OpenPegasus cimcli commands to execute enumerate operations.
7. Remove the provider (make unregister) which remove the class and
   unregisters the provider module from OpenPegasus.

Further Playing with this sample provider:

1. Completely rebuild the provider by executing the following:
   make genclass
   make genprov
   make genmod
   make
   make insmod
   make regmod
   ... test the provider again
   make unregister
   Note that this rebuilds all of the .h and .cpp files but that the code
   for implementation of the instances is kept.

2. Rebuild the provider by executing the following:
   make genproj
   make
   make insmod
   make regmod
   .... test the provider
   make unregister

   NOTE: genproj is the equivalent of executing genclass, genprov, genmod
   encapsulated into a single command.

3. Extend the provider. Add a property to the President class by 
   uncommenting:
      a. the line in repository.mof that defines the age property
      b. the lines in President_Provider.cpp that set the age into the
         instances.
   Then:
       make genclass
       make genprov
       make
       make insmod
       make regmod
       ... test again to see if the new property is display with the instances
       make unregister

4. Add a simple method to your provider by uncommenting:
   a. The lines for the getAge method in repository.mof

   Now look at President_Provider.cpp.  There is the skeleton of the method
   getNumberOfPresidents in the code.

   Rebuild again:
       make genclass
       make genprov
       make genmod
       make
       make insmod
       make regmod
       ... Now test the new method (ex. cimcli im President getNumberOfPresidents.
   It should return an exception that indicates ...

5  Implement the getNumberOfPresidents method with the following change:

    Replace the current return from this method:
       ...
    with:   
       number = 3;
       return_value.set(0);
       return INVOKE_METHOD_OK;
  
   Now rebuild
      make
      make insmod
      make regmod
      ... retest by executing the method as above. This time it should return
      3 as the return parameter number.

Congratulations, you have built and installed a simple instance provider with
a method.

6. Now try to rebuild the Makefile.  Execute:
          genmak -fgrlC President President

   This will completely rebuild the Makefile with the definition for a
   CMPI provider and the existing provider implementation code.

   Rebuild the provider:
       make
       make insmod
       make regmod
       .... Test the provider.  It should execute the same.
       To prove that this is a CMPI provider, execute:
            regview -C President
       The display should indicate that this is a provider and a
       CMPI type provider.
NOTE: This is not the recommended way to change provider type (see the
Makefile itself for more info) but demonstrates that you can use genmak to
actually recreate the Makefile.  Note that the previous Makefile is now in
Makefile.bak.

THAT'S IT FOLKS FOR THIS PROVIDER.

Look at either the providers in src/providers or other samples for more 
examples of how to build a provider.


