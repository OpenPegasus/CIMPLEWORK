/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.1.0
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CMPL_LargeInstance.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_06F233C6A58E10B9821369712C2541EF;

/*[1578]*/
extern const Meta_Property
_CMPL_LargeInstance_Key;

/*[1601]*/
const Meta_Property
_CMPL_LargeInstance_Key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(CMPL_LargeInstance,Key),
    0, /* value */
};

/*[1578]*/
extern const Meta_Property
_CMPL_LargeInstance_sizeOfInstance;

/*[550]*/
static const Meta_Value_Scalar<uint32>
_CMPL_LargeInstance_sizeOfInstance_MV =
{
    CIMPLE_UINT32_LITERAL(1000)
};

/*[1601]*/
const Meta_Property
_CMPL_LargeInstance_sizeOfInstance =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "sizeOfInstance",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(CMPL_LargeInstance,sizeOfInstance),
    (const Meta_Value*)(void*)&_CMPL_LargeInstance_sizeOfInstance_MV,
};

/*[1578]*/
extern const Meta_Property
_CMPL_LargeInstance_countToReturn;

/*[550]*/
static const Meta_Value_Scalar<uint32>
_CMPL_LargeInstance_countToReturn_MV =
{
    CIMPLE_UINT32_LITERAL(1000)
};

/*[1601]*/
const Meta_Property
_CMPL_LargeInstance_countToReturn =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "countToReturn",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(CMPL_LargeInstance,countToReturn),
    (const Meta_Value*)(void*)&_CMPL_LargeInstance_countToReturn_MV,
};

/*[1578]*/
extern const Meta_Property
_CMPL_LargeInstance_instanceDeliveryType;

/*[550]*/
static const Meta_Value_Scalar<uint16>
_CMPL_LargeInstance_instanceDeliveryType_MV =
{
    1
};

/*[1601]*/
const Meta_Property
_CMPL_LargeInstance_instanceDeliveryType =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "instanceDeliveryType",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CMPL_LargeInstance,instanceDeliveryType),
    (const Meta_Value*)(void*)&_CMPL_LargeInstance_instanceDeliveryType_MV,
};

/*[1578]*/
extern const Meta_Property
_CMPL_LargeInstance_largeProperty;

/*[1601]*/
const Meta_Property
_CMPL_LargeInstance_largeProperty =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "largeProperty",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CMPL_LargeInstance,largeProperty),
    0, /* value */
};

/*[1578]*/
extern const Meta_Property
_CMPL_LargeInstance_largeArrayProperty;

/*[1601]*/
const Meta_Property
_CMPL_LargeInstance_largeArrayProperty =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "largeArrayProperty",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(CMPL_LargeInstance,largeArrayProperty),
    0, /* value */
};

/*[1792]*/
static const Meta_Property
_CMPL_LargeInstance_setConfig_type =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "type",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_setConfig_method,type),
    0, /* value */
};

/*[1792]*/
static const Meta_Property
_CMPL_LargeInstance_setConfig_size =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "size",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_setConfig_method,size),
    0, /* value */
};

/*[1792]*/
static const Meta_Property
_CMPL_LargeInstance_setConfig_count =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "count",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_setConfig_method,count),
    0, /* value */
};

/*[1945]*/
static const Meta_Property
_CMPL_LargeInstance_setConfig_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_setConfig_method,return_value),
    0, /* value */
};

/*[1921]*/
static Meta_Feature* _CMPL_LargeInstance_setConfig_MFA[] =
{
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_setConfig_type,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_setConfig_size,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_setConfig_count,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_setConfig_return_value
};

/*[2123]*/
const Meta_Method
CMPL_LargeInstance_setConfig_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD|CIMPLE_FLAG_STATIC,
    "setConfig",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CMPL_LargeInstance_setConfig_MFA,
    CIMPLE_ARRAY_SIZE(_CMPL_LargeInstance_setConfig_MFA),
    sizeof(CMPL_LargeInstance_setConfig_method),
    UINT16,
};

/*[1792]*/
static const Meta_Property
_CMPL_LargeInstance_getConfig_type =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN|CIMPLE_FLAG_OUT,
    "type",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_getConfig_method,type),
    0, /* value */
};

/*[1792]*/
static const Meta_Property
_CMPL_LargeInstance_getConfig_size =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN|CIMPLE_FLAG_OUT,
    "size",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_getConfig_method,size),
    0, /* value */
};

/*[1792]*/
static const Meta_Property
_CMPL_LargeInstance_getConfig_count =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN|CIMPLE_FLAG_OUT,
    "count",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_getConfig_method,count),
    0, /* value */
};

/*[1945]*/
static const Meta_Property
_CMPL_LargeInstance_getConfig_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_getConfig_method,return_value),
    0, /* value */
};

/*[1921]*/
static Meta_Feature* _CMPL_LargeInstance_getConfig_MFA[] =
{
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_getConfig_type,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_getConfig_size,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_getConfig_count,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_getConfig_return_value
};

/*[2123]*/
const Meta_Method
CMPL_LargeInstance_getConfig_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD|CIMPLE_FLAG_STATIC,
    "getConfig",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CMPL_LargeInstance_getConfig_MFA,
    CIMPLE_ARRAY_SIZE(_CMPL_LargeInstance_getConfig_MFA),
    sizeof(CMPL_LargeInstance_getConfig_method),
    UINT16,
};

/*[1945]*/
static const Meta_Property
_CMPL_LargeInstance_test_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0,
    CIMPLE_OFF(CMPL_LargeInstance_test_method,return_value),
    0, /* value */
};

/*[1921]*/
static Meta_Feature* _CMPL_LargeInstance_test_MFA[] =
{
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_test_return_value
};

/*[2123]*/
const Meta_Method
CMPL_LargeInstance_test_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD|CIMPLE_FLAG_STATIC,
    "test",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CMPL_LargeInstance_test_MFA,
    CIMPLE_ARRAY_SIZE(_CMPL_LargeInstance_test_MFA),
    sizeof(CMPL_LargeInstance_test_method),
    UINT16,
};

/*[2301]*/
static Meta_Feature* _CMPL_LargeInstance_MFA[] =
{
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_Key,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_sizeOfInstance,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_countToReturn,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_instanceDeliveryType,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_largeProperty,
    (Meta_Feature*)(void*)&_CMPL_LargeInstance_largeArrayProperty,
    (Meta_Feature*)(void*)&CMPL_LargeInstance_setConfig_method::static_meta_class,
    (Meta_Feature*)(void*)&CMPL_LargeInstance_getConfig_method::static_meta_class,
    (Meta_Feature*)(void*)&CMPL_LargeInstance_test_method::static_meta_class,
};

/*[2348]*/
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
};

/*[2368]*/
const Meta_Class CMPL_LargeInstance::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "CMPL_LargeInstance",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CMPL_LargeInstance_MFA,
    CIMPLE_ARRAY_SIZE(_CMPL_LargeInstance_MFA),
    sizeof(CMPL_LargeInstance),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_06F233C6A58E10B9821369712C2541EF,
};

CIMPLE_NAMESPACE_END

