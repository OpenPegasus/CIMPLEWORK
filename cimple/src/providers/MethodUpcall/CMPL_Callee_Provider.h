// Generated by genprov 2.0.0
#ifndef _CMPL_Callee_Provider_h
#define _CMPL_Callee_Provider_h

#include <cimple/cimple.h>
#include "CMPL_Callee.h"

CIMPLE_NAMESPACE_BEGIN

class CMPL_Callee_Provider
{
public:

    typedef CMPL_Callee Class;

    CMPL_Callee_Provider();

    ~CMPL_Callee_Provider();

    Load_Status load();

    Unload_Status unload();

    Get_Instance_Status get_instance(
        const CMPL_Callee* model,
        CMPL_Callee*& instance);

    Enum_Instances_Status enum_instances(
        const CMPL_Callee* model,
        Enum_Instances_Handler<CMPL_Callee>* handler);

    Create_Instance_Status create_instance(
        CMPL_Callee* instance);

    Delete_Instance_Status delete_instance(
        const CMPL_Callee* instance);

    Modify_Instance_Status modify_instance(
        const CMPL_Callee* model,
        const CMPL_Callee* instance);

    Invoke_Method_Status foo1(
        const CMPL_Callee* self,
        const Property<uint32>& in1,
        const Property<String>& in2,
        Property<uint32>& out1,
        Property<String>& out2,
        Property<uint32>& return_value);

    Invoke_Method_Status foo2(
        const Property<uint32>& in1,
        const Property<String>& in2,
        Property<uint32>& out1,
        Property<String>& out2,
        Property<uint32>& return_value);

    /*@END@*/
};

CIMPLE_NAMESPACE_END

#endif /* _CMPL_Callee_Provider_h */