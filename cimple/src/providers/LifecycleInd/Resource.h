#ifndef _Resource_h
#define _Resource_h

#include <cimple/cimple.h>
#include "LC_Test.h"

CIMPLE_NAMESPACE_BEGIN

class Resource
{
public:

    // Instance ID of new instance added to lc_tests. Used by
    // LC_CreateInstance to send indication.
    Uint32 new_instance;
    Array<LC_Test*> lc_tests;
    // Mutex locks use of the lc_tests array
    Mutex mutex;

    Resource();

    ~Resource();
};

extern Resource resource;

CIMPLE_NAMESPACE_END

#endif /* _Resource_h */
