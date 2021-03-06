// Generated by genprov 2.0.0
#include "CMPL_Callee_Provider.h"

CIMPLE_NAMESPACE_BEGIN

CMPL_Callee_Provider::CMPL_Callee_Provider()
{
}

CMPL_Callee_Provider::~CMPL_Callee_Provider()
{
}

Load_Status CMPL_Callee_Provider::load()
{
    return LOAD_OK;
}

Unload_Status CMPL_Callee_Provider::unload()
{
    return UNLOAD_OK;
}

Get_Instance_Status CMPL_Callee_Provider::get_instance(
    const CMPL_Callee* model,
    CMPL_Callee*& instance)
{
    return GET_INSTANCE_UNSUPPORTED;
}

Enum_Instances_Status CMPL_Callee_Provider::enum_instances(
    const CMPL_Callee* model,
    Enum_Instances_Handler<CMPL_Callee>* handler)
{
    return ENUM_INSTANCES_OK;
}

Create_Instance_Status CMPL_Callee_Provider::create_instance(
    CMPL_Callee* instance)
{
    return CREATE_INSTANCE_UNSUPPORTED;
}

Delete_Instance_Status CMPL_Callee_Provider::delete_instance(
    const CMPL_Callee* instance)
{
    return DELETE_INSTANCE_UNSUPPORTED;
}

Modify_Instance_Status CMPL_Callee_Provider::modify_instance(
    const CMPL_Callee* model,
    const CMPL_Callee* instance)
{
    return MODIFY_INSTANCE_UNSUPPORTED;
}

Invoke_Method_Status CMPL_Callee_Provider::foo1(
    const CMPL_Callee* self,
    const Property<uint32>& in1,
    const Property<String>& in2,
    Property<uint32>& out1,
    Property<String>& out2,
    Property<uint32>& return_value)
{
    printf("CMPL_Callee_Provider::foo1()\n");

    print(self);

    out1 = in1;
    out2 = in2;

    return_value.set(1234);
    return INVOKE_METHOD_OK;
}

Invoke_Method_Status CMPL_Callee_Provider::foo2(
    const Property<uint32>& in1,
    const Property<String>& in2,
    Property<uint32>& out1,
    Property<String>& out2,
    Property<uint32>& return_value)

{
    printf("CMPL_Callee_Provider::foo2()\n");

    out1 = in1;
    out2 = in2;

    return_value.set(5678);
    return INVOKE_METHOD_OK;
}

/*@END@*/

CIMPLE_NAMESPACE_END
