// Generated by genprov 1.2.5
#ifndef _Widget_Provider_h
#define _Widget_Provider_h

#include <cimple/cimple.h>
#include "Widget.h"

CIMPLE_NAMESPACE_BEGIN

class Widget_Provider
{
public:

    typedef Widget Class;

    Widget_Provider();

    ~Widget_Provider();

    Load_Status load();

    Unload_Status unload();

    Get_Instance_Status get_instance(
        const Widget* model,
        Widget*& instance);

    Enum_Instances_Status enum_instances(
        const Widget* model,
        Enum_Instances_Handler<Widget>* handler);

    Create_Instance_Status create_instance(
        Widget* instance);

    Delete_Instance_Status delete_instance(
        const Widget* instance);

    Modify_Instance_Status modify_instance(
        const Widget* model,
        const Widget* instance);

    Invoke_Method_Status foo(
        const Property<uint32>& arg1,
        const Property<String>& arg2,
        Property<uint32>& arg3,
        Property<String>& arg4,
        Property<boolean>& return_value);

    Invoke_Method_Status goo(
        const Widget* self,
        const Gadget* gin,
        Gadget*& gout,
        Property<uint32>& return_value);

    Invoke_Method_Status hoo(
        const Property< Array<Gadget*> >& gin,
        Property< Array<Gadget*> >& gout,
        Property<uint32>& return_value);

    /*@END@*/
};

CIMPLE_NAMESPACE_END

#endif /* _Widget_Provider_h */