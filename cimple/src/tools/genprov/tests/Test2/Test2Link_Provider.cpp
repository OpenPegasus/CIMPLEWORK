// Generated by genprov 1.0.22
#include "Test2Link_Provider.h"

CIMPLE_NAMESPACE_BEGIN

Test2Link_Provider::Test2Link_Provider()
{
}

Test2Link_Provider::~Test2Link_Provider()
{
}

Load_Status Test2Link_Provider::load()
{
    return LOAD_OK;
}

Unload_Status Test2Link_Provider::unload()
{
    return UNLOAD_OK;
}

Get_Instance_Status Test2Link_Provider::get_instance(
    const Test2Link* model,
    Test2Link*& instance)
{
    return GET_INSTANCE_UNSUPPORTED;
}

Enum_Instances_Status Test2Link_Provider::enum_instances(
    const Test2Link* model,
    Enum_Instances_Handler<Test2Link>* handler)
{
    return ENUM_INSTANCES_OK;
}

Create_Instance_Status Test2Link_Provider::create_instance(
    Test2Link* instance)
{
    return CREATE_INSTANCE_UNSUPPORTED;
}

Delete_Instance_Status Test2Link_Provider::delete_instance(
    const Test2Link* instance)
{
    return DELETE_INSTANCE_UNSUPPORTED;
}

Modify_Instance_Status Test2Link_Provider::modify_instance(
    const Test2Link* model,
    const Test2Link* instance)
{
    return MODIFY_INSTANCE_UNSUPPORTED;
}

Enum_Associator_Names_Status Test2Link_Provider::enum_associator_names(
    const Instance* instance,
    const String& result_class,
    const String& role,
    const String& result_role,
    Enum_Associator_Names_Handler<Instance>* handler)
{
    return ENUM_ASSOCIATOR_NAMES_UNSUPPORTED;
}

Enum_Associators_Status Test2Link_Provider::enum_associators(
    const Instance* instance,
    const String& result_class,
    const String& role,
    const String& result_role,
    Enum_Associators_Handler<Instance>* handler)
{
    return ENUM_ASSOCIATORS_UNSUPPORTED;
}

Enum_References_Status Test2Link_Provider::enum_references(
    const Instance* instance,
    const Test2Link* model,
    const String& role,
    Enum_References_Handler<Test2Link>* handler)
{
    return ENUM_REFERENCES_UNSUPPORTED;
}

/*@END@*/

CIMPLE_NAMESPACE_END