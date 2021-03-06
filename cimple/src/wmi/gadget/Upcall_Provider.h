// Generated by genprov 1.2.5
#ifndef _Upcall_Provider_h
#define _Upcall_Provider_h

#include <cimple/cimple.h>
#include "Upcall.h"

CIMPLE_NAMESPACE_BEGIN

class Upcall_Provider
{
public:

    typedef Upcall Class;

    Upcall_Provider();

    ~Upcall_Provider();

    Load_Status load();

    Unload_Status unload();

    Get_Instance_Status get_instance(
        const Upcall* model,
        Upcall*& instance);

    Enum_Instances_Status enum_instances(
        const Upcall* model,
        Enum_Instances_Handler<Upcall>* handler);

    Create_Instance_Status create_instance(
        Upcall* instance);

    Delete_Instance_Status delete_instance(
        const Upcall* instance);

    Modify_Instance_Status modify_instance(
        const Upcall* model,
        const Upcall* instance);

    Invoke_Method_Status upcalls(
        const Upcall* self,
        Property<uint32>& return_value);

    /*@END@*/
};

CIMPLE_NAMESPACE_END

#endif /* _Upcall_Provider_h */
