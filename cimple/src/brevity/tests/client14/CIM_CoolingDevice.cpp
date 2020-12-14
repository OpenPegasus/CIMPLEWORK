/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.0
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_CoolingDevice.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_85D02B84B3BA1978B6B4B067335B2107;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedElement_Caption;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedElement_Description;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedElement_ElementName;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_InstallDate;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_Name;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_Status;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_HealthState;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_EnabledState;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_OtherEnabledState;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_RequestedState;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_EnabledDefault;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_TimeOfLastStateChange;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_SystemCreationClassName;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_SystemName;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_CreationClassName;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_DeviceID;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_PowerManagementSupported;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_PowerManagementCapabilities;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_Availability;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_StatusInfo;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_LastErrorCode;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_ErrorDescription;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_ErrorCleared;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_OtherIdentifyingInfo;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_PowerOnHours;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_TotalPowerOnHours;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_IdentifyingDescriptions;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_AdditionalAvailability;

/*[1302]*/
extern const Meta_Property
_CIM_LogicalDevice_MaxQuiesceTime;

/*[1302]*/
extern const Meta_Property
_CIM_CoolingDevice_ActiveCooling;

/*[1325]*/
const Meta_Property
_CIM_CoolingDevice_ActiveCooling =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "ActiveCooling",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0, /* subscript */
    CIMPLE_OFF(CIM_CoolingDevice,ActiveCooling),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _CIM_CoolingDevice_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_ElementName,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_InstallDate,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_Name,
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
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_SystemCreationClassName,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_SystemName,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_CreationClassName,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_DeviceID,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_PowerManagementSupported,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_PowerManagementCapabilities,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_Availability,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_StatusInfo,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_LastErrorCode,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_ErrorDescription,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_ErrorCleared,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_OtherIdentifyingInfo,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_PowerOnHours,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_TotalPowerOnHours,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_IdentifyingDescriptions,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_AdditionalAvailability,
    (Meta_Feature*)(void*)&_CIM_LogicalDevice_MaxQuiesceTime,
    (Meta_Feature*)(void*)&CIM_LogicalDevice_SetPowerState_method::static_meta_class,
    (Meta_Feature*)(void*)&CIM_LogicalDevice_Reset_method::static_meta_class,
    (Meta_Feature*)(void*)&CIM_LogicalDevice_EnableDevice_method::static_meta_class,
    (Meta_Feature*)(void*)&CIM_LogicalDevice_OnlineDevice_method::static_meta_class,
    (Meta_Feature*)(void*)&CIM_LogicalDevice_QuiesceDevice_method::static_meta_class,
    (Meta_Feature*)(void*)&CIM_LogicalDevice_SaveProperties_method::static_meta_class,
    (Meta_Feature*)(void*)&CIM_LogicalDevice_RestoreProperties_method::static_meta_class,
    (Meta_Feature*)(void*)&_CIM_CoolingDevice_ActiveCooling,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
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
};

/*[2092]*/
const Meta_Class CIM_CoolingDevice::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "CIM_CoolingDevice",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_CoolingDevice_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_CoolingDevice_MFA),
    sizeof(CIM_CoolingDevice),
    _locals,
    &CIM_LogicalDevice::static_meta_class,
    4, /* num_keys */
    &__meta_repository_85D02B84B3BA1978B6B4B067335B2107,
};

CIMPLE_NAMESPACE_END

