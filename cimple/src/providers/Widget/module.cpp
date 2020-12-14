//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENMOD 1.2.4
//
//==============================================================================

#include <cimple/cimple.h>
#include "CIMPLE_Widget_Provider.h"

using namespace cimple;

static int __cimple_CIMPLE_Widget_Provider_proc(
    const Registration* registration,
    int operation,
    void* arg0,
    void* arg1,
    void* arg2,
    void* arg3,
    void* arg4,
    void* arg5,
    void* arg6,
    void* arg7)
{
    typedef CIMPLE_Widget Class;
    typedef CIMPLE_Widget_Provider Provider;

    if (operation != OPERATION_INVOKE_METHOD)
        return Instance_Provider_Proc_T<Provider>::proc(registration,
            operation, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

    Provider* provider = (Provider*)arg0;
    const Class* self = (const Class*)arg1;
    const char* meth_name = ((Instance*)arg2)->meta_class->name;

    return -1;
}

CIMPLE_MODULE(cimplewidget_Module);
CIMPLE_INSTANCE_PROVIDER(CIMPLE_Widget_Provider);

#ifdef CIMPLE_PEGASUS_MODULE
  CIMPLE_PEGASUS_PROVIDER_ENTRY_POINT;
# define __CIMPLE_FOUND_ENTRY_POINT
#endif

#ifdef CIMPLE_CMPI_MODULE
  CIMPLE_CMPI_INSTANCE_PROVIDER(CIMPLE_Widget_Provider);
  CIMPLE_CMPI_INSTANCE_PROVIDER2(CIMPLE_Widget_Provider, CIMPLE_Widget);
# define __CIMPLE_FOUND_ENTRY_POINT
#endif

#ifdef CIMPLE_OPENWBEM_MODULE
  CIMPLE_OPENWBEM_PROVIDER(cimplewidget_Module);
# define __CIMPLE_FOUND_ENTRY_POINT
#endif

#ifndef __CIMPLE_FOUND_ENTRY_POINT
# error "No provider entry point found. Please define one of the following: CIMPLE_PEGASUS_MODULE, CIMPLE_CMPI_MODULE, CIMPLE_OPENWBEM_MODULE"
#endif
