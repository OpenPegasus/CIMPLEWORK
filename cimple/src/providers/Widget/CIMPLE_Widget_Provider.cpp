// Generated by genprov 1.2.4
#include "CIMPLE_Widget_Provider.h"

CIMPLE_NAMESPACE_BEGIN

CIMPLE_Widget_Provider::CIMPLE_Widget_Provider()
{
}

CIMPLE_Widget_Provider::~CIMPLE_Widget_Provider()
{
}

Load_Status CIMPLE_Widget_Provider::load()
{
    return LOAD_OK;
}

Unload_Status CIMPLE_Widget_Provider::unload()
{
    return UNLOAD_OK;
}

Get_Instance_Status CIMPLE_Widget_Provider::get_instance(
    const CIMPLE_Widget* model,
    CIMPLE_Widget*& instance)
{
    CIMPLE_INFO(( "get_instance key = %d\n", model->Key.value ));
    printf( "get_instance key = %d\n", model->Key.value );

    if (key_eq(model, _instance))
    {
        instance = _instance->clone();
        return GET_INSTANCE_OK;
    }

    return GET_INSTANCE_NOT_FOUND;
}

Enum_Instances_Status CIMPLE_Widget_Provider::enum_instances(
    const CIMPLE_Widget* model,
    Enum_Instances_Handler<CIMPLE_Widget>* handler)
{
    printf("**** Enumerate instance()\n");
    CIMPLE_Widget* inst = CIMPLE_Widget::create();

    // Create a single instance with fixed key
    // This means that we return something different 
    inst->Key.set(1234);
    inst->Color.set("Cyan");
    inst->Flag.set(false);

    handler->handle(inst);
    
    if (_instance)
    {
        CIMPLE_Widget* inst = CIMPLE_Widget::create();
        inst = _instance->clone();
        handler->handle(inst);
    }

    return ENUM_INSTANCES_OK;
}

Create_Instance_Status CIMPLE_Widget_Provider::create_instance(
    CIMPLE_Widget* instance)
{
    assert(instance);
    print(instance);

    // save the received instance.   Note that this
    // test assumes that there will be only a single
    // active instance and unrefs any existing
    // instance.
    if (_instance)
        unref(_instance);

    _instance = instance->clone();

    return CREATE_INSTANCE_OK;
}

Delete_Instance_Status CIMPLE_Widget_Provider::delete_instance(
    const CIMPLE_Widget* instance)
{
    if(_instance && instance->Key == _instance->Key)
    {
        unref(_instance);
        return DELETE_INSTANCE_OK;
    }
    return DELETE_INSTANCE_NOT_FOUND;
}

Modify_Instance_Status CIMPLE_Widget_Provider::modify_instance(
    const CIMPLE_Widget* model,
    const CIMPLE_Widget* instance)
{
    printf("**** modify_instance()\n");

    print(model);
    print(instance);

    return MODIFY_INSTANCE_OK;
}

/*@END@*/

CIMPLE_NAMESPACE_END