/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.23
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "StringArrayClass.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_7EB8B340D468118B8FB4339B8821B463;

/*[1568]*/
extern const Meta_Property
_StringArrayClass_Key;

/*[1591]*/
const Meta_Property
_StringArrayClass_Key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(StringArrayClass,Key),
    0, /* value */
};

/*[1568]*/
extern const Meta_Property
_StringArrayClass_Colors;

/*[1591]*/
const Meta_Property
_StringArrayClass_Colors =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Colors",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(StringArrayClass,Colors),
    0, /* value */
};

/*[1568]*/
extern const Meta_Property
_StringArrayClass_sizes;

/*[1591]*/
const Meta_Property
_StringArrayClass_sizes =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "sizes",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    -1, /* subscript */
    CIMPLE_OFF(StringArrayClass,sizes),
    0, /* value */
};

/*[2291]*/
static Meta_Feature* _StringArrayClass_MFA[] =
{
    (Meta_Feature*)(void*)&_StringArrayClass_Key,
    (Meta_Feature*)(void*)&_StringArrayClass_Colors,
    (Meta_Feature*)(void*)&_StringArrayClass_sizes,
};

/*[2338]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
};

/*[2358]*/
const Meta_Class StringArrayClass::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "StringArrayClass",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _StringArrayClass_MFA,
    CIMPLE_ARRAY_SIZE(_StringArrayClass_MFA),
    sizeof(StringArrayClass),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_7EB8B340D468118B8FB4339B8821B463,
};

CIMPLE_NAMESPACE_END
