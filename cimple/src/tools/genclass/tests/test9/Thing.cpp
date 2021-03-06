//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Thing.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Qualifier_Scalar<const char*>
_Thing_prop1_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_Thing_prop1_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "this is prop1", /* value */ 
};

static const Meta_Qualifier*
_Thing_prop1_MQA[] =
{
    (Meta_Qualifier*)&_Thing_prop1_Description_MQ,
};

extern const Meta_Property
_Thing_prop1;

const Meta_Property
_Thing_prop1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop1",
    _Thing_prop1_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_prop1_MQA),
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Thing,prop1),
    0, /* value */
};

static const Meta_Qualifier*
_Thing_prop2_MQA[] =
{
};

extern const Meta_Property
_Thing_prop2;

const Meta_Value_Scalar<uint32>
_Thing_prop2_MV =
{
    200
};

const Meta_Property
_Thing_prop2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop2",
    _Thing_prop2_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_prop2_MQA),
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Thing,prop2),
    (const Meta_Value*)&_Thing_prop2_MV,
};

static const Meta_Qualifier*
_Thing_prop3_MQA[] =
{
};

extern const Meta_Property
_Thing_prop3;

const Meta_Value_Scalar<uint32>
_Thing_prop3_MV =
{
    300
};

const Meta_Property
_Thing_prop3 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop3",
    _Thing_prop3_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_prop3_MQA),
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Thing,prop3),
    (const Meta_Value*)&_Thing_prop3_MV,
};

static const Meta_Qualifier*
_Thing_prop4_MQA[] =
{
};

extern const Meta_Property
_Thing_prop4;

const Meta_Value_Scalar<uint32>
_Thing_prop4_MV =
{
    400
};

const Meta_Property
_Thing_prop4 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY,
    "prop4",
    _Thing_prop4_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_prop4_MQA),
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Thing,prop4),
    (const Meta_Value*)&_Thing_prop4_MV,
};

extern const Meta_Property
_Thing_prop5;

const Meta_Value_Scalar<const char*>
_Thing_prop5_MV =
{
    "Hello\nWorld"
};

const Meta_Property
_Thing_prop5 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop5",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(Thing,prop5),
    (const Meta_Value*)&_Thing_prop5_MV,
};

extern const Meta_Property
_Thing_prop6;

static const char*
_Thing_prop6_MV_elements[] =
{
    "Red",
    "Green",
    "Blue",
};

const Meta_Value_Array<const char*>
_Thing_prop6_MV =
{
    _Thing_prop6_MV_elements, /* value */
    CIMPLE_ARRAY_SIZE(_Thing_prop6_MV_elements),
};

const Meta_Property
_Thing_prop6 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop6",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(Thing,prop6),
    (const Meta_Value*)&_Thing_prop6_MV,
};

extern const Meta_Property
_Thing_prop7;

const Meta_Value_Scalar<const char*>
_Thing_prop7_MV =
{
    "20061225123000.000000-360"
};

const Meta_Property
_Thing_prop7 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop7",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(Thing,prop7),
    (const Meta_Value*)&_Thing_prop7_MV,
};

extern const Meta_Property
_Thing_prop8;

static const char*
_Thing_prop8_MV_elements[] =
{
    "20061225123000.000000-360",
    "20061225123000.000000+360",
};

const Meta_Value_Array<const char*>
_Thing_prop8_MV =
{
    _Thing_prop8_MV_elements, /* value */
    CIMPLE_ARRAY_SIZE(_Thing_prop8_MV_elements),
};

const Meta_Property
_Thing_prop8 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop8",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    -1, /* subscript */
    CIMPLE_OFF(Thing,prop8),
    (const Meta_Value*)&_Thing_prop8_MV,
};

extern const Meta_Property
_Thing_prop9;

static boolean
_Thing_prop9_MV_elements[] =
{
    true,
    false,
    true,
};

const Meta_Value_Array<boolean>
_Thing_prop9_MV =
{
    _Thing_prop9_MV_elements, /* value */
    CIMPLE_ARRAY_SIZE(_Thing_prop9_MV_elements),
};

const Meta_Property
_Thing_prop9 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop9",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    -1, /* subscript */
    CIMPLE_OFF(Thing,prop9),
    (const Meta_Value*)&_Thing_prop9_MV,
};

extern const Meta_Property
_Thing_prop10;

static uint32
_Thing_prop10_MV_elements[] =
{
    10,
    20,
    30,
};

const Meta_Value_Array<uint32>
_Thing_prop10_MV =
{
    _Thing_prop10_MV_elements, /* value */
    CIMPLE_ARRAY_SIZE(_Thing_prop10_MV_elements),
};

const Meta_Property
_Thing_prop10 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop10",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    -1, /* subscript */
    CIMPLE_OFF(Thing,prop10),
    (const Meta_Value*)&_Thing_prop10_MV,
};

extern const Meta_Property
_Thing_prop11;

const Meta_Property
_Thing_prop11 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop11",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    -1, /* subscript */
    CIMPLE_OFF(Thing,prop11),
    0, /* value */
};

static const Meta_Property
_Thing_foo_param0 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "param0",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0,
    CIMPLE_OFF(Thing_foo_method,param0),
    0, /* value */
};

static const Meta_Qualifier*
_Thing_foo_param1_MQA[] =
{
};

static const Meta_Property
_Thing_foo_param1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN|CIMPLE_FLAG_OUT,
    "param1",
    _Thing_foo_param1_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_foo_param1_MQA),
    STRING,
    0,
    CIMPLE_OFF(Thing_foo_method,param1),
    0, /* value */
};

static const Meta_Qualifier*
_Thing_foo_param2_MQA[] =
{
};

static const Meta_Property
_Thing_foo_param2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "param2",
    _Thing_foo_param2_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_foo_param2_MQA),
    STRING,
    0,
    CIMPLE_OFF(Thing_foo_method,param2),
    0, /* value */
};

static const Meta_Qualifier*
_Thing_foo_param3_MQA[] =
{
};

static const Meta_Property
_Thing_foo_param3 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN|CIMPLE_FLAG_OUT,
    "param3",
    _Thing_foo_param3_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_foo_param3_MQA),
    STRING,
    0,
    CIMPLE_OFF(Thing_foo_method,param3),
    0, /* value */
};

static const Meta_Qualifier*
_Thing_foo_param4_MQA[] =
{
};

static const Meta_Property
_Thing_foo_param4 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "param4",
    _Thing_foo_param4_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_foo_param4_MQA),
    STRING,
    0,
    CIMPLE_OFF(Thing_foo_method,param4),
    0, /* value */
};

static const Meta_Qualifier*
_Thing_foo_param5_MQA[] =
{
};

static const Meta_Property
_Thing_foo_param5 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY,
    "param5",
    _Thing_foo_param5_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_foo_param5_MQA),
    STRING,
    0,
    CIMPLE_OFF(Thing_foo_method,param5),
    0, /* value */
};

static const Meta_Property
_Thing_foo_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(Thing_foo_method,return_value),
    0, /* value */
};

static Meta_Feature* _Thing_foo_MFA[] =
{
    (Meta_Feature*)&_Thing_foo_param0,
    (Meta_Feature*)&_Thing_foo_param1,
    (Meta_Feature*)&_Thing_foo_param2,
    (Meta_Feature*)&_Thing_foo_param3,
    (Meta_Feature*)&_Thing_foo_param4,
    (Meta_Feature*)&_Thing_foo_param5,
    (Meta_Feature*)&_Thing_foo_return_value
};

const Meta_Method
Thing_foo_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD,
    "foo",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Thing_foo_MFA,
    CIMPLE_ARRAY_SIZE(_Thing_foo_MFA),
    sizeof(Thing_foo_method),
    UINT32,
};

static Meta_Feature* _Thing_MFA[] =
{
    (Meta_Feature*)&_Thing_prop1,
    (Meta_Feature*)&_Thing_prop2,
    (Meta_Feature*)&_Thing_prop3,
    (Meta_Feature*)&_Thing_prop4,
    (Meta_Feature*)&_Thing_prop5,
    (Meta_Feature*)&_Thing_prop6,
    (Meta_Feature*)&_Thing_prop7,
    (Meta_Feature*)&_Thing_prop8,
    (Meta_Feature*)&_Thing_prop9,
    (Meta_Feature*)&_Thing_prop10,
    (Meta_Feature*)&_Thing_prop11,
    (Meta_Feature*)&Thing_foo_method::static_meta_class,
};

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
    {1},
    {1},
    {1},
    {1},
};

extern const Meta_Qualifier_Scalar<const char*>
_Thing_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_Thing_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "The Thing to do", /* value */ 
};

static const Meta_Qualifier*
_Thing_MQA[] =
{
    (Meta_Qualifier*)&_Thing_Description_MQ,
};

const Meta_Class Thing::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "Thing",
    _Thing_MQA,
    CIMPLE_ARRAY_SIZE(_Thing_MQA),
    _Thing_MFA,
    CIMPLE_ARRAY_SIZE(_Thing_MFA),
    sizeof(Thing),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    0x07A784BF, /* crc */
    0,
};

CIMPLE_NAMESPACE_END

