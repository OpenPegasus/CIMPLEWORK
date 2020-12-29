/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.1.0
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Arrays.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_7C30D6E22609183282B44B91556E700F;

/*[1542]*/
extern const Meta_Property
_Arrays_key;

/*[1565]*/
const Meta_Property
_Arrays_key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(Arrays,key),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_returnCount;

/*[1565]*/
const Meta_Property
_Arrays_returnCount =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "returnCount",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Arrays,returnCount),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_arr;

/*[1565]*/
const Meta_Property
_Arrays_arr =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "arr",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    -1, /* subscript */
    CIMPLE_OFF(Arrays,arr),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_arr_sin16;

/*[1565]*/
const Meta_Property
_Arrays_arr_sin16 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "arr_sin16",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    SINT16,
    -1, /* subscript */
    CIMPLE_OFF(Arrays,arr_sin16),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_arr_uint32;

/*[1565]*/
const Meta_Property
_Arrays_arr_uint32 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "arr_uint32",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    -1, /* subscript */
    CIMPLE_OFF(Arrays,arr_uint32),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_arr_uint64;

/*[1565]*/
const Meta_Property
_Arrays_arr_uint64 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "arr_uint64",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT64,
    -1, /* subscript */
    CIMPLE_OFF(Arrays,arr_uint64),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_arr_sint64;

/*[1565]*/
const Meta_Property
_Arrays_arr_sint64 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "arr_sint64",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    SINT64,
    -1, /* subscript */
    CIMPLE_OFF(Arrays,arr_sint64),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_arrString;

/*[1565]*/
const Meta_Property
_Arrays_arrString =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "arrString",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(Arrays,arrString),
    0, /* value */
};

/*[1542]*/
extern const Meta_Property
_Arrays_arrDatetime;

/*[1565]*/
const Meta_Property
_Arrays_arrDatetime =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "arrDatetime",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    -1, /* subscript */
    CIMPLE_OFF(Arrays,arrDatetime),
    0, /* value */
};

/*[1756]*/
static const Meta_Property
_Arrays_setReturnCount_returnCount =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "returnCount",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(Arrays_setReturnCount_method,returnCount),
    0, /* value */
};

/*[1756]*/
static const Meta_Property
_Arrays_setReturnCount_prevReturnCount =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN|CIMPLE_FLAG_OUT,
    "prevReturnCount",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(Arrays_setReturnCount_method,prevReturnCount),
    0, /* value */
};

/*[1909]*/
static const Meta_Property
_Arrays_setReturnCount_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(Arrays_setReturnCount_method,return_value),
    0, /* value */
};

/*[1885]*/
static Meta_Feature* _Arrays_setReturnCount_MFA[] =
{
    (Meta_Feature*)(void*)&_Arrays_setReturnCount_returnCount,
    (Meta_Feature*)(void*)&_Arrays_setReturnCount_prevReturnCount,
    (Meta_Feature*)(void*)&_Arrays_setReturnCount_return_value
};

/*[2087]*/
const Meta_Method
Arrays_setReturnCount_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD,
    "setReturnCount",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Arrays_setReturnCount_MFA,
    CIMPLE_ARRAY_SIZE(_Arrays_setReturnCount_MFA),
    sizeof(Arrays_setReturnCount_method),
    UINT32,
};

/*[1756]*/
static const Meta_Property
_Arrays_getReturnCount_returnCount =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN|CIMPLE_FLAG_OUT,
    "returnCount",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(Arrays_getReturnCount_method,returnCount),
    0, /* value */
};

/*[1909]*/
static const Meta_Property
_Arrays_getReturnCount_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(Arrays_getReturnCount_method,return_value),
    0, /* value */
};

/*[1885]*/
static Meta_Feature* _Arrays_getReturnCount_MFA[] =
{
    (Meta_Feature*)(void*)&_Arrays_getReturnCount_returnCount,
    (Meta_Feature*)(void*)&_Arrays_getReturnCount_return_value
};

/*[2087]*/
const Meta_Method
Arrays_getReturnCount_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD,
    "getReturnCount",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Arrays_getReturnCount_MFA,
    CIMPLE_ARRAY_SIZE(_Arrays_getReturnCount_MFA),
    sizeof(Arrays_getReturnCount_method),
    UINT32,
};

/*[2265]*/
static Meta_Feature* _Arrays_MFA[] =
{
    (Meta_Feature*)(void*)&_Arrays_key,
    (Meta_Feature*)(void*)&_Arrays_returnCount,
    (Meta_Feature*)(void*)&_Arrays_arr,
    (Meta_Feature*)(void*)&_Arrays_arr_sin16,
    (Meta_Feature*)(void*)&_Arrays_arr_uint32,
    (Meta_Feature*)(void*)&_Arrays_arr_uint64,
    (Meta_Feature*)(void*)&_Arrays_arr_sint64,
    (Meta_Feature*)(void*)&_Arrays_arrString,
    (Meta_Feature*)(void*)&_Arrays_arrDatetime,
    (Meta_Feature*)(void*)&Arrays_setReturnCount_method::static_meta_class,
    (Meta_Feature*)(void*)&Arrays_getReturnCount_method::static_meta_class,
};

/*[2312]*/
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
};

/*[2332]*/
const Meta_Class Arrays::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "Arrays",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Arrays_MFA,
    CIMPLE_ARRAY_SIZE(_Arrays_MFA),
    sizeof(Arrays),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_7C30D6E22609183282B44B91556E700F,
};

CIMPLE_NAMESPACE_END
