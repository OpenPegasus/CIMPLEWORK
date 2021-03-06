/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_Service.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_8CCF8E58804E17C2BA75EC619FBC3236;

extern const Meta_Property
_CIM_ManagedElement_Caption;

extern const Meta_Property
_CIM_ManagedElement_Description;

extern const Meta_Property
_CIM_ManagedElement_ElementName;

extern const Meta_Property
_CIM_ManagedSystemElement_InstallDate;

extern const Meta_Property
_CIM_Service_Name;

const Meta_Property
_CIM_Service_Name =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Name",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,Name),
    0, /* value */
};

extern const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus;

extern const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions;

extern const Meta_Property
_CIM_ManagedSystemElement_Status;

extern const Meta_Property
_CIM_ManagedSystemElement_HealthState;

extern const Meta_Property
_CIM_EnabledLogicalElement_EnabledState;

extern const Meta_Property
_CIM_EnabledLogicalElement_OtherEnabledState;

extern const Meta_Property
_CIM_EnabledLogicalElement_RequestedState;

extern const Meta_Property
_CIM_EnabledLogicalElement_EnabledDefault;

extern const Meta_Property
_CIM_EnabledLogicalElement_TimeOfLastStateChange;

extern const Meta_Property
_CIM_Service_SystemCreationClassName;

const Meta_Property
_CIM_Service_SystemCreationClassName =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "SystemCreationClassName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,SystemCreationClassName),
    0, /* value */
};

extern const Meta_Property
_CIM_Service_SystemName;

const Meta_Property
_CIM_Service_SystemName =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "SystemName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,SystemName),
    0, /* value */
};

extern const Meta_Property
_CIM_Service_CreationClassName;

const Meta_Property
_CIM_Service_CreationClassName =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "CreationClassName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,CreationClassName),
    0, /* value */
};

extern const Meta_Property
_CIM_Service_PrimaryOwnerName;

const Meta_Property
_CIM_Service_PrimaryOwnerName =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_WRITE,
    "PrimaryOwnerName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,PrimaryOwnerName),
    0, /* value */
};

extern const Meta_Property
_CIM_Service_PrimaryOwnerContact;

const Meta_Property
_CIM_Service_PrimaryOwnerContact =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_WRITE,
    "PrimaryOwnerContact",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,PrimaryOwnerContact),
    0, /* value */
};

extern const Meta_Property
_CIM_Service_StartMode;

const Meta_Property
_CIM_Service_StartMode =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "StartMode",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,StartMode),
    0, /* value */
};

extern const Meta_Property
_CIM_Service_Started;

const Meta_Property
_CIM_Service_Started =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Started",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0, /* subscript */
    CIMPLE_OFF(CIM_Service,Started),
    0, /* value */
};

static const Meta_Property
_CIM_Service_StartService_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CIM_Service_StartService_method,return_value),
    0, /* value */
};

static Meta_Feature* _CIM_Service_StartService_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_Service_StartService_return_value
};

const Meta_Method
CIM_Service_StartService_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD,
    "StartService",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_Service_StartService_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_Service_StartService_MFA),
    sizeof(CIM_Service_StartService_method),
    UINT32,
};

static const Meta_Property
_CIM_Service_StopService_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CIM_Service_StopService_method,return_value),
    0, /* value */
};

static Meta_Feature* _CIM_Service_StopService_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_Service_StopService_return_value
};

const Meta_Method
CIM_Service_StopService_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD,
    "StopService",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_Service_StopService_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_Service_StopService_MFA),
    sizeof(CIM_Service_StopService_method),
    UINT32,
};

static Meta_Feature* _CIM_Service_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_ElementName,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_InstallDate,
    (Meta_Feature*)(void*)&_CIM_Service_Name,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_OperationalStatus,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_Status,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_HealthState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_EnabledState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_OtherEnabledState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_RequestedState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_EnabledDefault,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_TimeOfLastStateChange,
    (Meta_Feature*)(void*)&CIM_EnabledLogicalElement_RequestStateChange_method::static_meta_class,
    (Meta_Feature*)(void*)&_CIM_Service_SystemCreationClassName,
    (Meta_Feature*)(void*)&_CIM_Service_SystemName,
    (Meta_Feature*)(void*)&_CIM_Service_CreationClassName,
    (Meta_Feature*)(void*)&_CIM_Service_PrimaryOwnerName,
    (Meta_Feature*)(void*)&_CIM_Service_PrimaryOwnerContact,
    (Meta_Feature*)(void*)&_CIM_Service_StartMode,
    (Meta_Feature*)(void*)&_CIM_Service_Started,
    (Meta_Feature*)(void*)&CIM_Service_StartService_method::static_meta_class,
    (Meta_Feature*)(void*)&CIM_Service_StopService_method::static_meta_class,
};

static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {0},
    {0},
    {1},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
};

const Meta_Class CIM_Service::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_Service",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_Service_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_Service_MFA),
    sizeof(CIM_Service),
    _locals,
    &CIM_EnabledLogicalElement::static_meta_class,
    4, /* num_keys */
    0x094F79F2, /* crc */
    &__meta_repository_8CCF8E58804E17C2BA75EC619FBC3236,
};

CIMPLE_NAMESPACE_END

