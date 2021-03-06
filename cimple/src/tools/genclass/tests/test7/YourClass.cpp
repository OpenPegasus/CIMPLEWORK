/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "YourClass.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1302]*/
extern const Meta_Property
_YourClass_str1;

/*[1325]*/
const Meta_Property
_YourClass_str1 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "str1",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(YourClass,str1),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_YourClass_str2;

/*[1325]*/
const Meta_Property
_YourClass_str2 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "str2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(YourClass,str2),
    0, /* value */
};

extern const Meta_Reference
_YourClass_obj1;

/*[1914]*/
const Meta_Reference _YourClass_obj1 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "obj1",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(YourClass,obj1)
};

extern const Meta_Reference
_YourClass_obj2;

/*[1914]*/
const Meta_Reference _YourClass_obj2 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "obj2",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(YourClass,obj2)
};

/*[2025]*/
static Meta_Feature* _YourClass_MFA[] =
{
    (Meta_Feature*)(void*)&_YourClass_str1,
    (Meta_Feature*)(void*)&_YourClass_str2,
    (Meta_Feature*)(void*)&_YourClass_obj1,
    (Meta_Feature*)(void*)&_YourClass_obj2,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
    {1},
};

/*[2092]*/
const Meta_Class YourClass::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_INDICATION,
    "YourClass",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _YourClass_MFA,
    CIMPLE_ARRAY_SIZE(_YourClass_MFA),
    sizeof(YourClass),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END

