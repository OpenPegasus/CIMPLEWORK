// Generated by genprov 1.0.22
#include "Test2_Provider.h"

CIMPLE_NAMESPACE_BEGIN

Test2_Provider::Test2_Provider()
{
}

Test2_Provider::~Test2_Provider()
{
}

Load_Status Test2_Provider::load()
{
    return LOAD_OK;
}

Unload_Status Test2_Provider::unload()
{
    return UNLOAD_OK;
}

Get_Instance_Status Test2_Provider::get_instance(
    const Test2* model,
    Test2*& instance)
{
    return GET_INSTANCE_UNSUPPORTED;
}

Enum_Instances_Status Test2_Provider::enum_instances(
    const Test2* model,
    Enum_Instances_Handler<Test2>* handler)
{
    return ENUM_INSTANCES_OK;
}

Create_Instance_Status Test2_Provider::create_instance(
    Test2* instance)
{
    return CREATE_INSTANCE_UNSUPPORTED;
}

Delete_Instance_Status Test2_Provider::delete_instance(
    const Test2* instance)
{
    return DELETE_INSTANCE_UNSUPPORTED;
}

Modify_Instance_Status Test2_Provider::modify_instance(
    const Test2* model,
    const Test2* instance)
{
    return MODIFY_INSTANCE_UNSUPPORTED;
}

/*@END@*/

CIMPLE_NAMESPACE_END
