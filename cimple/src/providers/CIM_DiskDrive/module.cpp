//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENMOD 1.0.22
//
//==============================================================================

#include <cimple/cimple.h>
#include "CIM_DiskDrive_Provider.h"

using namespace cimple;

static int __cimple_CIM_DiskDrive_Provider_proc(
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
    typedef CIM_DiskDrive Class;
    typedef CIM_DiskDrive_Provider Provider;

    if (operation != OPERATION_INVOKE_METHOD)
        return Instance_Provider_Proc_T<Provider>::proc(registration,
            operation, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

    Provider* provider = (Provider*)arg0;
    const Class* self = (const Class*)arg1;
    const char* meth_name = ((Instance*)arg2)->meta_class->name;

    if (strcasecmp(meth_name, "RequestStateChange") == 0)
    {
        typedef CIM_DiskDrive_RequestStateChange_method Method;
        Method* method = (Method*)arg2;
        return provider->RequestStateChange(
            self,
            method->RequestedState,
            method->Job,
            method->TimeoutPeriod,
            method->return_value);
    }

    if (strcasecmp(meth_name, "SetPowerState") == 0)
    {
        typedef CIM_DiskDrive_SetPowerState_method Method;
        Method* method = (Method*)arg2;
        return provider->SetPowerState(
            self,
            method->PowerState,
            method->Time,
            method->return_value);
    }

    if (strcasecmp(meth_name, "Reset") == 0)
    {
        typedef CIM_DiskDrive_Reset_method Method;
        Method* method = (Method*)arg2;
        return provider->Reset(
            self,
            method->return_value);
    }

    if (strcasecmp(meth_name, "EnableDevice") == 0)
    {
        typedef CIM_DiskDrive_EnableDevice_method Method;
        Method* method = (Method*)arg2;
        return provider->EnableDevice(
            self,
            method->Enabled,
            method->return_value);
    }

    if (strcasecmp(meth_name, "OnlineDevice") == 0)
    {
        typedef CIM_DiskDrive_OnlineDevice_method Method;
        Method* method = (Method*)arg2;
        return provider->OnlineDevice(
            self,
            method->Online,
            method->return_value);
    }

    if (strcasecmp(meth_name, "QuiesceDevice") == 0)
    {
        typedef CIM_DiskDrive_QuiesceDevice_method Method;
        Method* method = (Method*)arg2;
        return provider->QuiesceDevice(
            self,
            method->Quiesce,
            method->return_value);
    }

    if (strcasecmp(meth_name, "SaveProperties") == 0)
    {
        typedef CIM_DiskDrive_SaveProperties_method Method;
        Method* method = (Method*)arg2;
        return provider->SaveProperties(
            self,
            method->return_value);
    }

    if (strcasecmp(meth_name, "RestoreProperties") == 0)
    {
        typedef CIM_DiskDrive_RestoreProperties_method Method;
        Method* method = (Method*)arg2;
        return provider->RestoreProperties(
            self,
            method->return_value);
    }

    if (strcasecmp(meth_name, "LockMedia") == 0)
    {
        typedef CIM_DiskDrive_LockMedia_method Method;
        Method* method = (Method*)arg2;
        return provider->LockMedia(
            self,
            method->Lock,
            method->return_value);
    }

    return -1;
}

CIMPLE_MODULE(CIM_DiskDrive_Module);
CIMPLE_INSTANCE_PROVIDER(CIM_DiskDrive_Provider);

#ifdef CIMPLE_PEGASUS_MODULE
  CIMPLE_PEGASUS_PROVIDER_ENTRY_POINT;
# define __CIMPLE_FOUND_ENTRY_POINT
#endif

#ifdef CIMPLE_CMPI_MODULE
  CIMPLE_CMPI_INSTANCE_PROVIDER(CIM_DiskDrive_Provider);
# define __CIMPLE_FOUND_ENTRY_POINT
#endif

#ifdef CIMPLE_OPENWBEM_MODULE
  CIMPLE_OPENWBEM_PROVIDER(CIM_DiskDrive_Module);
# define __CIMPLE_FOUND_ENTRY_POINT
#endif

#ifndef __CIMPLE_FOUND_ENTRY_POINT
# error "No provider entry point found. Please define one of the following: CIMPLE_PEGASUS_MODULE, CIMPLE_CMPI_MODULE, CIMPLE_OPENWBEM_MODULE"
#endif