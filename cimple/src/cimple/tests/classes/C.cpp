/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.1.0
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "C.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1569]*/
extern const Meta_Property
_A_w;

/*[1569]*/
extern const Meta_Property
_B_x;

/*[1569]*/
extern const Meta_Property
_B_y;

/*[1569]*/
extern const Meta_Property
_C_z;

/*[1592]*/
const Meta_Property
_C_z =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "z",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(C,z),
    0, /* value */
};

/*[2292]*/
static Meta_Feature* _C_MFA[] =
{
    (Meta_Feature*)(void*)&_A_w,
    (Meta_Feature*)(void*)&_B_x,
    (Meta_Feature*)(void*)&_B_y,
    (Meta_Feature*)(void*)&_C_z,
};

/*[2339]*/
static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {0},
    {1},
};

/*[2359]*/
const Meta_Class C::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "C",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _C_MFA,
    CIMPLE_ARRAY_SIZE(_C_MFA),
    sizeof(C),
    _locals,
    &B::static_meta_class,
    1, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END
