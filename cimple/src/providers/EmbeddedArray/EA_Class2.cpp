/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.0.21
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "EA_Class2.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_9A2C3190033A13A8AC823388E2D31B2C;

extern const Meta_Reference
_EA_Class2_inst1;

/*[1914]*/
const Meta_Reference _EA_Class2_inst1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_INSTANCE,
    "inst1",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &EA_Class1::static_meta_class,
    CIMPLE_OFF(EA_Class2,inst1)
};

extern const Meta_Reference
_EA_Class2_inst2;

/*[1914]*/
const Meta_Reference _EA_Class2_inst2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_INSTANCE,
    "inst2",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    -1, /* subscript */
    &EA_Class1::static_meta_class,
    CIMPLE_OFF(EA_Class2,inst2)
};

extern const Meta_Reference
_EA_Class2_obj1;

/*[1914]*/
const Meta_Reference _EA_Class2_obj1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "obj1",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(EA_Class2,obj1)
};

extern const Meta_Reference
_EA_Class2_obj2;

/*[1914]*/
const Meta_Reference _EA_Class2_obj2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "obj2",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    -1, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(EA_Class2,obj2)
};

/*[1729]*/
static const Meta_Reference
_EA_Class2_foo1_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_INSTANCE|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &EA_Class1::static_meta_class,
    CIMPLE_OFF(EA_Class2_foo1_method, return_value),
};

/*[1645]*/
static Meta_Feature* _EA_Class2_foo1_MFA[] =
{
    (Meta_Feature*)(void*)&_EA_Class2_foo1_return_value
};

/*[1847]*/
const Meta_Method
EA_Class2_foo1_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD,
    "foo1",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _EA_Class2_foo1_MFA,
    CIMPLE_ARRAY_SIZE(_EA_Class2_foo1_MFA),
    sizeof(EA_Class2_foo1_method),
    STRING,
};

/*[1729]*/
static const Meta_Reference
_EA_Class2_foo2_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_OUT|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(EA_Class2_foo2_method, return_value),
};

/*[1645]*/
static Meta_Feature* _EA_Class2_foo2_MFA[] =
{
    (Meta_Feature*)(void*)&_EA_Class2_foo2_return_value
};

/*[1847]*/
const Meta_Method
EA_Class2_foo2_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "foo2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _EA_Class2_foo2_MFA,
    CIMPLE_ARRAY_SIZE(_EA_Class2_foo2_MFA),
    sizeof(EA_Class2_foo2_method),
    STRING,
};

/*[1580]*/
static const Meta_Reference
_EA_Class2_foo3_arg1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_INSTANCE|CIMPLE_FLAG_IN,
    "arg1",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &EA_Class1::static_meta_class,
    CIMPLE_OFF(EA_Class2_foo3_method,arg1)
};

/*[1580]*/
static const Meta_Reference
_EA_Class2_foo3_arg2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_INSTANCE|CIMPLE_FLAG_OUT,
    "arg2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &EA_Class1::static_meta_class,
    CIMPLE_OFF(EA_Class2_foo3_method,arg2)
};

/*[1669]*/
static const Meta_Property
_EA_Class2_foo3_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(EA_Class2_foo3_method,return_value),
    0, /* value */
};

/*[1645]*/
static Meta_Feature* _EA_Class2_foo3_MFA[] =
{
    (Meta_Feature*)(void*)&_EA_Class2_foo3_arg1,
    (Meta_Feature*)(void*)&_EA_Class2_foo3_arg2,
    (Meta_Feature*)(void*)&_EA_Class2_foo3_return_value
};

/*[1847]*/
const Meta_Method
EA_Class2_foo3_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD,
    "foo3",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _EA_Class2_foo3_MFA,
    CIMPLE_ARRAY_SIZE(_EA_Class2_foo3_MFA),
    sizeof(EA_Class2_foo3_method),
    UINT32,
};

/*[1580]*/
static const Meta_Reference
_EA_Class2_foo4_arg1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_IN|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "arg1",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(EA_Class2_foo4_method,arg1)
};

/*[1580]*/
static const Meta_Reference
_EA_Class2_foo4_arg2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_OUT|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "arg2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(EA_Class2_foo4_method,arg2)
};

/*[1669]*/
static const Meta_Property
_EA_Class2_foo4_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(EA_Class2_foo4_method,return_value),
    0, /* value */
};

/*[1645]*/
static Meta_Feature* _EA_Class2_foo4_MFA[] =
{
    (Meta_Feature*)(void*)&_EA_Class2_foo4_arg1,
    (Meta_Feature*)(void*)&_EA_Class2_foo4_arg2,
    (Meta_Feature*)(void*)&_EA_Class2_foo4_return_value
};

/*[1847]*/
const Meta_Method
EA_Class2_foo4_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD,
    "foo4",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _EA_Class2_foo4_MFA,
    CIMPLE_ARRAY_SIZE(_EA_Class2_foo4_MFA),
    sizeof(EA_Class2_foo4_method),
    UINT32,
};

/*[2025]*/
static Meta_Feature* _EA_Class2_MFA[] =
{
    (Meta_Feature*)(void*)&_EA_Class2_inst1,
    (Meta_Feature*)(void*)&_EA_Class2_inst2,
    (Meta_Feature*)(void*)&_EA_Class2_obj1,
    (Meta_Feature*)(void*)&_EA_Class2_obj2,
    (Meta_Feature*)(void*)&EA_Class2_foo1_method::static_meta_class,
    (Meta_Feature*)(void*)&EA_Class2_foo2_method::static_meta_class,
    (Meta_Feature*)(void*)&EA_Class2_foo3_method::static_meta_class,
    (Meta_Feature*)(void*)&EA_Class2_foo4_method::static_meta_class,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
};

/*[2092]*/
const Meta_Class EA_Class2::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "EA_Class2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _EA_Class2_MFA,
    CIMPLE_ARRAY_SIZE(_EA_Class2_MFA),
    sizeof(EA_Class2),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    &__meta_repository_9A2C3190033A13A8AC823388E2D31B2C,
};

CIMPLE_NAMESPACE_END
