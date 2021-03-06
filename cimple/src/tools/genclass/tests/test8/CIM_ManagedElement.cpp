/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_ManagedElement.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Caption_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Caption_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "The Caption property is a short textual description (one- line string) of the object.", /* value */ 
};

extern const Meta_Qualifier_Scalar<uint32>
_CIM_ManagedElement_Caption_MaxLen_MQ;

const Meta_Qualifier_Scalar<uint32>
_CIM_ManagedElement_Caption_MaxLen_MQ =
{
    { 0 }, /* refs */
    "MaxLen", /* name */
    UINT32, /* type */
    0, /* array */
    64, /* value */ 
};

static const Meta_Qualifier*
_CIM_ManagedElement_Caption_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedElement_Caption_Description_MQ,
    (Meta_Qualifier*)&_CIM_ManagedElement_Caption_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_Caption;

const Meta_Property
_CIM_ManagedElement_Caption =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Caption",
    _CIM_ManagedElement_Caption_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedElement_Caption_MQA),
    STRING,
    0,
    CIMPLE_OFF(CIM_ManagedElement,Caption),
    0, /* value */
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Description_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Description_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "The Description property provides a textual description of the object.", /* value */ 
};

static const Meta_Qualifier*
_CIM_ManagedElement_Description_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedElement_Description_Description_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_Description;

const Meta_Property
_CIM_ManagedElement_Description =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Description",
    _CIM_ManagedElement_Description_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedElement_Description_MQA),
    STRING,
    0,
    CIMPLE_OFF(CIM_ManagedElement,Description),
    0, /* value */
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_ElementName_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_ElementName_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "A user-friendly name for the object. This property allows each instance to define a user-friendly name in addition to its key properties, identity data, and description information. \nNote that the Name property of ManagedSystemElement is also defined as a user-friendly name. But, it is often subclassed to be a Key. It is not reasonable that the same property can convey both identity and a user-friendly name, without inconsistencies. Where Name exists and is not a Key (such as for instances of LogicalDevice), the same information can be present in both the Name and ElementName properties.", /* value */ 
};

static const Meta_Qualifier*
_CIM_ManagedElement_ElementName_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedElement_ElementName_Description_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_ElementName;

const Meta_Property
_CIM_ManagedElement_ElementName =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "ElementName",
    _CIM_ManagedElement_ElementName_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedElement_ElementName_MQA),
    STRING,
    0,
    CIMPLE_OFF(CIM_ManagedElement,ElementName),
    0, /* value */
};

static Meta_Feature* _CIM_ManagedElement_MFA[] =
{
    (Meta_Feature*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)&_CIM_ManagedElement_ElementName,
};

static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Version_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Version_MQ =
{
    { 0 }, /* refs */
    "Version", /* name */
    STRING, /* type */
    0, /* array */
    "2.10.0", /* value */ 
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "ManagedElement is an abstract class that provides a common superclass (or top of the inheritance tree) for the non-association classes in the CIM Schema.", /* value */ 
};

static const Meta_Qualifier*
_CIM_ManagedElement_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedElement_Version_MQ,
    (Meta_Qualifier*)&_CIM_ManagedElement_Description_MQ,
};

const Meta_Class CIM_ManagedElement::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_ManagedElement",
    _CIM_ManagedElement_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedElement_MQA),
    _CIM_ManagedElement_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedElement_MFA),
    sizeof(CIM_ManagedElement),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    0x5B2A3886, /* crc */
    0,
};

CIMPLE_NAMESPACE_END

