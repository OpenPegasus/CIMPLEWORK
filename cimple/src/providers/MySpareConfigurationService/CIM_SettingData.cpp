/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_SettingData.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_C2AA78B37C6515EB9DBF2BC150C67E7F;

extern const Meta_Property
_CIM_ManagedElement_Caption;

extern const Meta_Property
_CIM_ManagedElement_Description;

extern const Meta_Property
_CIM_SettingData_ElementName;

const Meta_Property
_CIM_SettingData_ElementName =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_REQUIRED,
    "ElementName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_SettingData,ElementName),
    0, /* value */
};

extern const Meta_Property
_CIM_SettingData_InstanceID;

const Meta_Property
_CIM_SettingData_InstanceID =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "InstanceID",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_SettingData,InstanceID),
    0, /* value */
};

static Meta_Feature* _CIM_SettingData_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)(void*)&_CIM_SettingData_ElementName,
    (Meta_Feature*)(void*)&_CIM_SettingData_InstanceID,
};

static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {1},
    {1},
};

const Meta_Class CIM_SettingData::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_SettingData",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_SettingData_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_SettingData_MFA),
    sizeof(CIM_SettingData),
    _locals,
    &CIM_ManagedElement::static_meta_class,
    1, /* num_keys */
    0x375DA4F9, /* crc */
    &__meta_repository_C2AA78B37C6515EB9DBF2BC150C67E7F,
};

CIMPLE_NAMESPACE_END
