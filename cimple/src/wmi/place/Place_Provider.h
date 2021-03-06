// Generated by genprov 2.0.7
#ifndef _Place_Provider_h
#define _Place_Provider_h

#include <cimple/cimple.h>
#include "Place.h"

CIMPLE_NAMESPACE_BEGIN

class Place_Provider
{
public:

    typedef Place Class;

    Place_Provider();

    ~Place_Provider();

    Load_Status load();

    Unload_Status unload();

    Get_Instance_Status get_instance(
        const Place* model,
        Place*& instance);

    Enum_Instances_Status enum_instances(
        const Place* model,
        Enum_Instances_Handler<Place>* handler);

    Create_Instance_Status create_instance(
        Place* instance);

    Delete_Instance_Status delete_instance(
        const Place* instance);

    Modify_Instance_Status modify_instance(
        const Place* model,
        const Place* instance);

    Invoke_Method_Status foo(
        const Property<String>& arg,
        Property<uint32>& return_value);

    /*@END@*/
};

CIMPLE_NAMESPACE_END

#endif /* _Place_Provider_h */
