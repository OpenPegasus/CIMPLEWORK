//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENMOD.
//
//==============================================================================

#include <cimple/cimple.h>
#include "CIM_StoragePool_Provider.h"

using namespace cimple;

static int __cimple_CIM_StoragePool_Provider_proc(
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
    typedef CIM_StoragePool Class;
    typedef CIM_StoragePool_Provider Provider;

    if (operation != OPERATION_INVOKE_METHOD)
        return Instance_Provider_Proc_T<Provider>::proc(registration,
            operation, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

    Provider* provider = (Provider*)arg0;
    const Class* self = (const Class*)arg1;
    const char* meth_name = ((Instance*)arg2)->meta_class->name;

    if (strcasecmp(meth_name, "GetSupportedSizes") == 0)
    {
        typedef CIM_StoragePool_GetSupportedSizes_method Method;
        Method* method = (Method*)arg2;
        return provider->GetSupportedSizes(
            self,
            method->ElementType,
            method->Goal,
            method->Sizes,
            method->return_value);
    }

    if (strcasecmp(meth_name, "GetSupportedSizeRange") == 0)
    {
        typedef CIM_StoragePool_GetSupportedSizeRange_method Method;
        Method* method = (Method*)arg2;
        return provider->GetSupportedSizeRange(
            self,
            method->ElementType,
            method->Goal,
            method->MinimumVolumeSize,
            method->MaximumVolumeSize,
            method->VolumeSizeDivisor,
            method->return_value);
    }

    if (strcasecmp(meth_name, "GetAvailableExtents") == 0)
    {
        typedef CIM_StoragePool_GetAvailableExtents_method Method;
        Method* method = (Method*)arg2;
        return provider->GetAvailableExtents(
            self,
            method->Goal,
            method->AvailableExtents,
            method->return_value);
    }

    return -1;
}

CIMPLE_MODULE(CIM_StoragePool_Module);
CIMPLE_INSTANCE_PROVIDER(CIM_StoragePool_Provider);

#ifdef CIMPLE_PEGASUS_MODULE
  CIMPLE_PEGASUS_PROVIDER_ENTRY_POINT;
#endif

#ifdef CIMPLE_CMPI_MODULE
  CIMPLE_CMPI_INSTANCE_PROVIDER(CIM_StoragePool_Provider);
#endif

#ifdef CIMPLE_OPENWBEM_MODULE
  CIMPLE_OPENWBEM_PROVIDER(CIM_StoragePool_Module);
#endif
