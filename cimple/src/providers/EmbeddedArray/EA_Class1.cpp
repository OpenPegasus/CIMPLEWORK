/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.0.21
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "EA_Class1.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_9A2C3190033A13A8AC823388E2D31B2C;

/*[1302]*/
extern const Meta_Property
_EA_Class1_key;

/*[1325]*/
const Meta_Property
_EA_Class1_key =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(EA_Class1,key),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _EA_Class1_MFA[] =
{
    (Meta_Feature*)(void*)&_EA_Class1_key,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
};

/*[2092]*/
const Meta_Class EA_Class1::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "EA_Class1",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _EA_Class1_MFA,
    CIMPLE_ARRAY_SIZE(_EA_Class1_MFA),
    sizeof(EA_Class1),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_9A2C3190033A13A8AC823388E2D31B2C,
};

CIMPLE_NAMESPACE_END

