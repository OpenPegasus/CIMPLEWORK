/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.5
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_ManagedElement.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_C0E213488C861365BDAA3AF494C71C28;

/*[1304]*/
extern const Meta_Property
_CIM_ManagedElement_Caption;

/*[1327]*/
const Meta_Property
_CIM_ManagedElement_Caption =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Caption",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedElement,Caption),
    0, /* value */
};

/*[1304]*/
extern const Meta_Property
_CIM_ManagedElement_Description;

/*[1327]*/
const Meta_Property
_CIM_ManagedElement_Description =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Description",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedElement,Description),
    0, /* value */
};

/*[1304]*/
extern const Meta_Property
_CIM_ManagedElement_ElementName;

/*[1327]*/
const Meta_Property
_CIM_ManagedElement_ElementName =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "ElementName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedElement,ElementName),
    0, /* value */
};

/*[2027]*/
static Meta_Feature* _CIM_ManagedElement_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_ElementName,
};

/*[2074]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
};

/*[2094]*/
const Meta_Class CIM_ManagedElement::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_ManagedElement",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_ManagedElement_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedElement_MFA),
    sizeof(CIM_ManagedElement),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    &__meta_repository_C0E213488C861365BDAA3AF494C71C28,
};

CIMPLE_NAMESPACE_END
