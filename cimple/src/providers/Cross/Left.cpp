/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.5
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Left.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_2BB81CCA56E81C2B90F7DCC691A2CFC0;

/*[1304]*/
extern const Meta_Property
_Left_key;

/*[1327]*/
const Meta_Property
_Left_key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Left,key),
    0, /* value */
};

/*[2027]*/
static Meta_Feature* _Left_MFA[] =
{
    (Meta_Feature*)(void*)&_Left_key,
};

/*[2074]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
};

/*[2094]*/
const Meta_Class Left::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "Left",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Left_MFA,
    CIMPLE_ARRAY_SIZE(_Left_MFA),
    sizeof(Left),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_2BB81CCA56E81C2B90F7DCC691A2CFC0,
};

CIMPLE_NAMESPACE_END

