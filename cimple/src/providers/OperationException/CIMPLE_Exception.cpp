/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.5
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIMPLE_Exception.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_5C36F0E1DDB21B1D815B3034F5BB8D9D;

/*[1304]*/
extern const Meta_Property
_CIMPLE_Exception_Key;

/*[1327]*/
const Meta_Property
_CIMPLE_Exception_Key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(CIMPLE_Exception,Key),
    0, /* value */
};

/*[1304]*/
extern const Meta_Property
_CIMPLE_Exception_exception;

/*[1327]*/
const Meta_Property
_CIMPLE_Exception_exception =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "exception",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(CIMPLE_Exception,exception),
    0, /* value */
};

/*[1304]*/
extern const Meta_Property
_CIMPLE_Exception_Flag;

/*[1327]*/
const Meta_Property
_CIMPLE_Exception_Flag =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Flag",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0, /* subscript */
    CIMPLE_OFF(CIMPLE_Exception,Flag),
    0, /* value */
};

/*[1518]*/
static const Meta_Property
_CIMPLE_Exception_setException_Exception =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "Exception",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CIMPLE_Exception_setException_method,Exception),
    0, /* value */
};

/*[1518]*/
static const Meta_Property
_CIMPLE_Exception_setException_getInstanceDefault =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "getInstanceDefault",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0,
    CIMPLE_OFF(CIMPLE_Exception_setException_method,getInstanceDefault),
    0, /* value */
};

/*[1518]*/
static const Meta_Property
_CIMPLE_Exception_setException_associatorsDefault =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "associatorsDefault",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0,
    CIMPLE_OFF(CIMPLE_Exception_setException_method,associatorsDefault),
    0, /* value */
};

/*[1671]*/
static const Meta_Property
_CIMPLE_Exception_setException_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CIMPLE_Exception_setException_method,return_value),
    0, /* value */
};

/*[1647]*/
static Meta_Feature* _CIMPLE_Exception_setException_MFA[] =
{
    (Meta_Feature*)(void*)&_CIMPLE_Exception_setException_Exception,
    (Meta_Feature*)(void*)&_CIMPLE_Exception_setException_getInstanceDefault,
    (Meta_Feature*)(void*)&_CIMPLE_Exception_setException_associatorsDefault,
    (Meta_Feature*)(void*)&_CIMPLE_Exception_setException_return_value
};

/*[1849]*/
const Meta_Method
CIMPLE_Exception_setException_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD,
    "setException",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIMPLE_Exception_setException_MFA,
    CIMPLE_ARRAY_SIZE(_CIMPLE_Exception_setException_MFA),
    sizeof(CIMPLE_Exception_setException_method),
    UINT32,
};

/*[1671]*/
static const Meta_Property
_CIMPLE_Exception_testException_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CIMPLE_Exception_testException_method,return_value),
    0, /* value */
};

/*[1647]*/
static Meta_Feature* _CIMPLE_Exception_testException_MFA[] =
{
    (Meta_Feature*)(void*)&_CIMPLE_Exception_testException_return_value
};

/*[1849]*/
const Meta_Method
CIMPLE_Exception_testException_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD,
    "testException",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIMPLE_Exception_testException_MFA,
    CIMPLE_ARRAY_SIZE(_CIMPLE_Exception_testException_MFA),
    sizeof(CIMPLE_Exception_testException_method),
    UINT32,
};

/*[2027]*/
static Meta_Feature* _CIMPLE_Exception_MFA[] =
{
    (Meta_Feature*)(void*)&_CIMPLE_Exception_Key,
    (Meta_Feature*)(void*)&_CIMPLE_Exception_exception,
    (Meta_Feature*)(void*)&_CIMPLE_Exception_Flag,
    (Meta_Feature*)(void*)&CIMPLE_Exception_setException_method::static_meta_class,
    (Meta_Feature*)(void*)&CIMPLE_Exception_testException_method::static_meta_class,
};

/*[2074]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
    {1},
    {1},
};

/*[2094]*/
const Meta_Class CIMPLE_Exception::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "CIMPLE_Exception",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIMPLE_Exception_MFA,
    CIMPLE_ARRAY_SIZE(_CIMPLE_Exception_MFA),
    sizeof(CIMPLE_Exception),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_5C36F0E1DDB21B1D815B3034F5BB8D9D,
};

CIMPLE_NAMESPACE_END
