/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.9
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "All_Part.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_207925690B611DEE9E617C3D13B8A5C9;

/*[1304]*/
extern const Meta_Property
_All_Part_Key;

/*[1327]*/
const Meta_Property
_All_Part_Key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(All_Part,Key),
    0, /* value */
};

/*[2027]*/
static Meta_Feature* _All_Part_MFA[] =
{
    (Meta_Feature*)(void*)&_All_Part_Key,
};

/*[2074]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
};

/*[2094]*/
const Meta_Class All_Part::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "All_Part",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _All_Part_MFA,
    CIMPLE_ARRAY_SIZE(_All_Part_MFA),
    sizeof(All_Part),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_207925690B611DEE9E617C3D13B8A5C9,
};

CIMPLE_NAMESPACE_END

