// Generated by genprov 1.0.13
#include "CMPL_Embedded_Provider.h"

CIMPLE_NAMESPACE_BEGIN

CMPL_Embedded_Provider::CMPL_Embedded_Provider()
{
}

CMPL_Embedded_Provider::~CMPL_Embedded_Provider()
{
}

Load_Status CMPL_Embedded_Provider::load()
{
    return LOAD_OK;
}

Unload_Status CMPL_Embedded_Provider::unload()
{
    return UNLOAD_OK;
}

Get_Instance_Status CMPL_Embedded_Provider::get_instance(
    const CMPL_Embedded* model,
    CMPL_Embedded*& instance)
{
    return GET_INSTANCE_UNSUPPORTED;
}

Enum_Instances_Status CMPL_Embedded_Provider::enum_instances(
    const CMPL_Embedded* model,
    Enum_Instances_Handler<CMPL_Embedded>* handler)
{
    CMPL_Embedded* e = model->clone();

    // key:
    e->Key.set(12345);

    // embedded1:
    {
        CMPL_Embedded1* e1 = CMPL_Embedded1::create(true);
        e1->key.set(9999);
        e->embedded1 = e1;
    }

    // embedded2:
    {
        CMPL_Embedded2* e2 = CMPL_Embedded2::create(true);
        e2->key.set(9999);
        e->embedded2 = e2;
    }

    handler->handle(e);

    return ENUM_INSTANCES_OK;
}

Create_Instance_Status CMPL_Embedded_Provider::create_instance(
    CMPL_Embedded* instance)
{
    return CREATE_INSTANCE_UNSUPPORTED;
}

Delete_Instance_Status CMPL_Embedded_Provider::delete_instance(
    const CMPL_Embedded* instance)
{
    return DELETE_INSTANCE_UNSUPPORTED;
}

Modify_Instance_Status CMPL_Embedded_Provider::modify_instance(
    const CMPL_Embedded* model,
    const CMPL_Embedded* instance)
{
    return MODIFY_INSTANCE_UNSUPPORTED;
}

Invoke_Method_Status CMPL_Embedded_Provider::foo1(
    const CMPL_Embedded* self,
    CMPL_Embedded1*& return_value)
{
    CMPL_Embedded1* e1 = CMPL_Embedded1::create(true);
    e1->key.set(12345);
    return_value = e1;
    return INVOKE_METHOD_OK;
}

Invoke_Method_Status CMPL_Embedded_Provider::foo2(
    const CMPL_Embedded* self,
    const CMPL_Embedded1* arg1,
    CMPL_Embedded2*& arg2,
    CMPL_Embedded3*& arg3,
    Property<String>& return_value)
{
    // arg3:
    {
        CMPL_Embedded3* e3 = CMPL_Embedded3::create(true);
        e3->key.set(11111);
        arg3 = e3;
    }

    return_value.set("Hello");

    return INVOKE_METHOD_OK;
}

/*@END@*/

CIMPLE_NAMESPACE_END