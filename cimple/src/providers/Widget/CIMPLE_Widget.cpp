/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.2.4
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIMPLE_Widget.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_40C0DC9B793E1A84B8A804BC51A504A2;

/*[1304]*/
extern const Meta_Property
_CIMPLE_Widget_Key;

/*[1327]*/
const Meta_Property
_CIMPLE_Widget_Key =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(CIMPLE_Widget,Key),
    0, /* value */
};

/*[1304]*/
extern const Meta_Property
_CIMPLE_Widget_Color;

/*[1327]*/
const Meta_Property
_CIMPLE_Widget_Color =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Color",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIMPLE_Widget,Color),
    0, /* value */
};

/*[1304]*/
extern const Meta_Property
_CIMPLE_Widget_Flag;

/*[1327]*/
const Meta_Property
_CIMPLE_Widget_Flag =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Flag",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0, /* subscript */
    CIMPLE_OFF(CIMPLE_Widget,Flag),
    0, /* value */
};

/*[2027]*/
static Meta_Feature* _CIMPLE_Widget_MFA[] =
{
    (Meta_Feature*)(void*)&_CIMPLE_Widget_Key,
    (Meta_Feature*)(void*)&_CIMPLE_Widget_Color,
    (Meta_Feature*)(void*)&_CIMPLE_Widget_Flag,
};

/*[2074]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
};

/*[2094]*/
const Meta_Class CIMPLE_Widget::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "CIMPLE_Widget",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIMPLE_Widget_MFA,
    CIMPLE_ARRAY_SIZE(_CIMPLE_Widget_MFA),
    sizeof(CIMPLE_Widget),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_40C0DC9B793E1A84B8A804BC51A504A2,
};

CIMPLE_NAMESPACE_END
