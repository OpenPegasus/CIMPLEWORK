/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.1
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "ThingLink.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_46CE1E6F52CD1E6593D6461243D92844;

/*[1389]*/
extern const Meta_Reference
_ThingLink_left;

/*[1400]*/
const Meta_Reference
_ThingLink_left =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "left",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Thing::static_meta_class,
    CIMPLE_OFF(ThingLink,left)
};

/*[1389]*/
extern const Meta_Reference
_ThingLink_right;

/*[1400]*/
const Meta_Reference
_ThingLink_right =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "right",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Thing::static_meta_class,
    CIMPLE_OFF(ThingLink,right)
};

/*[2027]*/
static Meta_Feature* _ThingLink_MFA[] =
{
    (Meta_Feature*)(void*)&_ThingLink_left,
    (Meta_Feature*)(void*)&_ThingLink_right,
};

/*[2074]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2094]*/
const Meta_Class ThingLink::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_ASSOCIATION,
    "ThingLink",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _ThingLink_MFA,
    CIMPLE_ARRAY_SIZE(_ThingLink_MFA),
    sizeof(ThingLink),
    _locals,
    0, /* super_class */ 
    2, /* num_keys */
    &__meta_repository_46CE1E6F52CD1E6593D6461243D92844,
};

CIMPLE_NAMESPACE_END

