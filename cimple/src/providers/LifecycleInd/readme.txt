This provider implements a single class that can create,
modify, and delete instances, a set of classes for
lifecycle indications and the linkage so that if the
indications are enabled, the execution of create, modify,
or delete on the target class causes a corresponding
lifecycle indication to be generated.

It is very simplistic, designed simply to demonstrate the
mechanism to pass information for lifecycle indications from
a class provider to a corresponding instance creation, etc.
provider through a Resource class.

The basics are:

1. Define a class (Resource) that incorporates all of the communication
between the instance provider and the indication provider.  This class
can serve to save instances of the instance class (i.e. the Employee
and Manager in the Employee provider).

2. Provide a common method to communicate between the instance provider
and the indication provider.

3. Provide locks to separate the instance and indication provider since they
are on separate threads.

4. Insure that the indication provider is enabled before an indication is
sent.

NOTES:

1. An lifecycle indication subscription is for a specific class and state
   change(create, delete, modify, read). Note that read is really worthless for
   most things since it generates an indication each time an the targetd class
   defined for the indication is touched (not changed, just read).

2. At least in OpenPegasus, the server consolidates indication subscriptions
   for different destinations into a single enable and the server itself
   routes the resulting indications to multiple destinations.
