/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Erp.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1302]*/
extern const Meta_Property
_Erp_w;

/*[1325]*/
const Meta_Property
_Erp_w =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "w",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(Erp,w),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_Erp_x;

/*[1325]*/
const Meta_Property
_Erp_x =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "x",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Erp,x),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_Erp_y;

/*[1325]*/
const Meta_Property
_Erp_y =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "y",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(Erp,y),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_Erp_z;

/*[1325]*/
const Meta_Property
_Erp_z =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "z",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    3, /* subscript */
    CIMPLE_OFF(Erp,z),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _Erp_MFA[] =
{
    (Meta_Feature*)(void*)&_Erp_w,
    (Meta_Feature*)(void*)&_Erp_x,
    (Meta_Feature*)(void*)&_Erp_y,
    (Meta_Feature*)(void*)&_Erp_z,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
    {1},
};

/*[2092]*/
const Meta_Class Erp::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "Erp",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Erp_MFA,
    CIMPLE_ARRAY_SIZE(_Erp_MFA),
    sizeof(Erp),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END

