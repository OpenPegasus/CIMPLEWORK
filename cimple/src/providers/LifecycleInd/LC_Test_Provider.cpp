// Generated by genprov 2.0.25
#include "LC_Test_Provider.h"

CIMPLE_NAMESPACE_BEGIN

LC_Test_Provider::LC_Test_Provider()
{
}

LC_Test_Provider::~LC_Test_Provider()
{
}

Load_Status LC_Test_Provider::load()
{
    return LOAD_OK;
}

Unload_Status LC_Test_Provider::unload()
{
    return UNLOAD_OK;
}

Get_Instance_Status LC_Test_Provider::get_instance(
    const LC_Test* model,
    LC_Test*& instance)
{
    return GET_INSTANCE_UNSUPPORTED;
}

Enum_Instances_Status LC_Test_Provider::enum_instances(
    const LC_Test* model,
    Enum_Instances_Handler<LC_Test>* handler)
{
    return ENUM_INSTANCES_OK;
}

Create_Instance_Status LC_Test_Provider::create_instance(
    LC_Test* instance)
{
    return CREATE_INSTANCE_UNSUPPORTED;
}

Delete_Instance_Status LC_Test_Provider::delete_instance(
    const LC_Test* instance)
{
    return DELETE_INSTANCE_UNSUPPORTED;
}

Modify_Instance_Status LC_Test_Provider::modify_instance(
    const LC_Test* model,
    const LC_Test* instance)
{
    return MODIFY_INSTANCE_UNSUPPORTED;
}

/*@END@*/

CIMPLE_NAMESPACE_END
