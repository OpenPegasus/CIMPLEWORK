#include "Resource.h"

CIMPLE_NAMESPACE_BEGIN

// Create the resource object.  Note that this builds the
// instances.
Resource resource;

Resource::Resource()
{
    Auto_Mutex am(mutex);

    // If predefined resource objects required place them
    // here.
}

Resource::~Resource()
{
    Auto_Mutex am(mutex);

    for (size_t i = 0; i < lc_tests.size(); i++)
        LC_Test::destroy(lc_tests[i]);
}

CIMPLE_NAMESPACE_END
