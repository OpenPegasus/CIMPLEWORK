/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Delegate.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_FB96CCB9ABA012ACAEBD154292E4CD2A;

/*[1302]*/
extern const Meta_Property
_Delegate_key;

/*[1325]*/
const Meta_Property
_Delegate_key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Delegate,key),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_Delegate_message;

/*[1325]*/
const Meta_Property
_Delegate_message =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "message",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(Delegate,message),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _Delegate_MFA[] =
{
    (Meta_Feature*)(void*)&_Delegate_key,
    (Meta_Feature*)(void*)&_Delegate_message,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2092]*/
const Meta_Class Delegate::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "Delegate",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Delegate_MFA,
    CIMPLE_ARRAY_SIZE(_Delegate_MFA),
    sizeof(Delegate),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_FB96CCB9ABA012ACAEBD154292E4CD2A,
};

CIMPLE_NAMESPACE_END

