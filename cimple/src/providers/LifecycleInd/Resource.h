#ifndef _Resource_h
#define _Resource_h

#include <cimple/cimple.h>
#include "LC_Test.h"
#include "LC_InstCreation.h"

CIMPLE_NAMESPACE_BEGIN

class Resource
{
public:
    // Mutex to be set any time NewInstance is passed from LC_Test to
    // indication sender by calling the callback
    Mutex mutex;

    // Method to send indication on to LC_InstCreation function to actually
    // send the indication.
    void (*indication_sender)(LC_Test *NewInstance);

    Resource();

    ~Resource();


};

extern Resource resource;

CIMPLE_NAMESPACE_END

#endif /* _Resource_h */
