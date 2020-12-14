/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.1.0
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Manager.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1569]*/
extern const Meta_Property
_Employee_Id;

/*[1569]*/
extern const Meta_Property
_Employee_First;

/*[1569]*/
extern const Meta_Property
_Employee_Last;

/*[1569]*/
extern const Meta_Property
_Employee_Gender;

/*[1569]*/
extern const Meta_Property
_Employee_Active;

/*[1569]*/
extern const Meta_Property
_Manager_NumEmployees;

/*[1592]*/
const Meta_Property
_Manager_NumEmployees =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "NumEmployees",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Manager,NumEmployees),
    0, /* value */
};

/*[1569]*/
extern const Meta_Property
_Manager_Budget;

/*[1592]*/
const Meta_Property
_Manager_Budget =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Budget",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Manager,Budget),
    0, /* value */
};

/*[2292]*/
static Meta_Feature* _Manager_MFA[] =
{
    (Meta_Feature*)(void*)&_Employee_Id,
    (Meta_Feature*)(void*)&_Employee_First,
    (Meta_Feature*)(void*)&_Employee_Last,
    (Meta_Feature*)(void*)&_Employee_Gender,
    (Meta_Feature*)(void*)&_Employee_Active,
    (Meta_Feature*)(void*)&_Manager_NumEmployees,
    (Meta_Feature*)(void*)&_Manager_Budget,
};

/*[2339]*/
static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {0},
    {0},
    {0},
    {1},
    {1},
};

/*[2359]*/
const Meta_Class Manager::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "Manager",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Manager_MFA,
    CIMPLE_ARRAY_SIZE(_Manager_MFA),
    sizeof(Manager),
    _locals,
    &Employee::static_meta_class,
    1, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END

