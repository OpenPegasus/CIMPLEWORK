/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Erp2.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1302]*/
extern const Meta_Property
_Erp2_w;

/*[1325]*/
const Meta_Property
_Erp2_w =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "w",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(Erp2,w),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_Erp2_x;

/*[1325]*/
const Meta_Property
_Erp2_x =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "x",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Erp2,x),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_Erp2_y;

/*[1325]*/
const Meta_Property
_Erp2_y =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "y",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(Erp2,y),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_Erp2_z;

/*[1325]*/
const Meta_Property
_Erp2_z =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "z",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    3, /* subscript */
    CIMPLE_OFF(Erp2,z),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _Erp2_MFA[] =
{
    (Meta_Feature*)(void*)&_Erp2_w,
    (Meta_Feature*)(void*)&_Erp2_x,
    (Meta_Feature*)(void*)&_Erp2_y,
    (Meta_Feature*)(void*)&_Erp2_z,
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
const Meta_Class Erp2::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "Erp2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Erp2_MFA,
    CIMPLE_ARRAY_SIZE(_Erp2_MFA),
    sizeof(Erp2),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END

