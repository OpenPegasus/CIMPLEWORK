// Generated by genprov 2.1.0
#ifndef _Person_Provider_h
#define _Person_Provider_h

#include <cimple/cimple.h>
#include "Person.h"

CIMPLE_NAMESPACE_BEGIN

class Person_Provider
{
public:

    typedef Person Class;

    Person_Provider();

    ~Person_Provider();

    Load_Status load();

    Unload_Status unload();

    Get_Instance_Status get_instance(
        const Person* model,
        Person*& instance);

    Enum_Instances_Status enum_instances(
        const Person* model,
        Enum_Instances_Handler<Person>* handler);

    Create_Instance_Status create_instance(
        Person* instance);

    Delete_Instance_Status delete_instance(
        const Person* instance);

    Modify_Instance_Status modify_instance(
        const Person* model,
        const Person* instance);

    Invoke_Method_Status hello(
        const Person* self,
        const Property<String>& message,
        Property<String>& response,
        Property<uint32>& return_value);

    /*@END@*/

private:
    Instance_Map<Person> _map;
    Thread _thread;
    Atomic_Counter _stop;
};

CIMPLE_NAMESPACE_END

#endif /* _Person_Provider_h */
