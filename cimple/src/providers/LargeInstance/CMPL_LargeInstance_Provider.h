// Generated by genprov 2.1.0
#ifndef _CMPL_LargeInstance_Provider_h
#define _CMPL_LargeInstance_Provider_h

#include <cimple/cimple.h>
#include "CMPL_LargeInstance.h"

CIMPLE_NAMESPACE_BEGIN

class CMPL_LargeInstance_Provider
{
public:

    typedef CMPL_LargeInstance Class;

    CMPL_LargeInstance_Provider();

    ~CMPL_LargeInstance_Provider();

    Load_Status load();

    Unload_Status unload();

    Get_Instance_Status get_instance(
        const CMPL_LargeInstance* model,
        CMPL_LargeInstance*& instance);

    Enum_Instances_Status enum_instances(
        const CMPL_LargeInstance* model,
        Enum_Instances_Handler<CMPL_LargeInstance>* handler);

    Create_Instance_Status create_instance(
        CMPL_LargeInstance* instance);

    Delete_Instance_Status delete_instance(
        const CMPL_LargeInstance* instance);

    Modify_Instance_Status modify_instance(
        const CMPL_LargeInstance* model,
        const CMPL_LargeInstance* instance);

    Invoke_Method_Status getConfig(
        Property<uint16>& type,
        Property<uint32>& size,
        Property<uint32>& count,
        Property<uint16>& return_value);

    Invoke_Method_Status setConfig(
        const Property<uint16>& type,
        const Property<uint32>& size,
        const Property<uint32>& count,
        Property<uint16>& return_value);

    Invoke_Method_Status test(
        Property<uint16>& return_value);

    /*@END@*/

    // Functionality added manually for this provider
    // enum defining deivery types.
    // TODO - This should really be a mof value defintion.
    enum instanceDeliveryTypes{
        ILLEGAL,
        DIRECT,
        CLONE,
        CACHE
    };

    instanceDeliveryTypes _instanceDeliveryType;
    uint32 _sizeOfInstance;
    uint32 _countToDeliver;
};

CIMPLE_NAMESPACE_END

#endif /* _CMPL_LargeInstance_Provider_h */