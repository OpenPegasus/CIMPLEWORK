/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Class3.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_BF07919D97D812EA85A754AAA084E729;

/*[1302]*/
extern const Meta_Property
_Class3_key;

/*[1325]*/
const Meta_Property
_Class3_key =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Class3,key),
    0, /* value */
};

extern const Meta_Reference
_Class3_embedded;

/*[1914]*/
const Meta_Reference _Class3_embedded =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "embedded",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(Class3,embedded)
};

/*[2025]*/
static Meta_Feature* _Class3_MFA[] =
{
    (Meta_Feature*)(void*)&_Class3_key,
    (Meta_Feature*)(void*)&_Class3_embedded,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2092]*/
const Meta_Class Class3::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "Class3",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Class3_MFA,
    CIMPLE_ARRAY_SIZE(_Class3_MFA),
    sizeof(Class3),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_BF07919D97D812EA85A754AAA084E729,
};

CIMPLE_NAMESPACE_END
