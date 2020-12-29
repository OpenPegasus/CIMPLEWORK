/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "SomeClass.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1302]*/
extern const Meta_Property
_SomeClass_prop1;

/*[1325]*/
const Meta_Property
_SomeClass_prop1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop1",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(SomeClass,prop1),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_SomeClass_prop2;

/*[1325]*/
const Meta_Property
_SomeClass_prop2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(SomeClass,prop2),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_SomeClass_prop3;

/*[1325]*/
const Meta_Property
_SomeClass_prop3 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop3",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0, /* subscript */
    CIMPLE_OFF(SomeClass,prop3),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_SomeClass_prop4;

/*[1325]*/
const Meta_Property
_SomeClass_prop4 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop4",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(SomeClass,prop4),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_SomeClass_prop5;

/*[1325]*/
const Meta_Property
_SomeClass_prop5 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop5",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    -1, /* subscript */
    CIMPLE_OFF(SomeClass,prop5),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_SomeClass_prop6;

/*[1325]*/
const Meta_Property
_SomeClass_prop6 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "prop6",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    -1, /* subscript */
    CIMPLE_OFF(SomeClass,prop6),
    0, /* value */
};

/*[1387]*/
extern const Meta_Reference
_SomeClass_other1;

/*[1398]*/
const Meta_Reference
_SomeClass_other1 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE,
    "other1",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &OtherClass::static_meta_class,
    CIMPLE_OFF(SomeClass,other1)
};

/*[1387]*/
extern const Meta_Reference
_SomeClass_other2;

/*[1398]*/
const Meta_Reference
_SomeClass_other2 =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE,
    "other2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &OtherClass::static_meta_class,
    CIMPLE_OFF(SomeClass,other2)
};

/*[2025]*/
static Meta_Feature* _SomeClass_MFA[] =
{
    (Meta_Feature*)(void*)&_SomeClass_prop1,
    (Meta_Feature*)(void*)&_SomeClass_prop2,
    (Meta_Feature*)(void*)&_SomeClass_prop3,
    (Meta_Feature*)(void*)&_SomeClass_prop4,
    (Meta_Feature*)(void*)&_SomeClass_prop5,
    (Meta_Feature*)(void*)&_SomeClass_prop6,
    (Meta_Feature*)(void*)&_SomeClass_other1,
    (Meta_Feature*)(void*)&_SomeClass_other2,
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
const Meta_Class SomeClass::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_ASSOCIATION,
    "SomeClass",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _SomeClass_MFA,
    CIMPLE_ARRAY_SIZE(_SomeClass_MFA),
    sizeof(SomeClass),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END
