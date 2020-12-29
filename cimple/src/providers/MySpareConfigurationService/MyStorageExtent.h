/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_MyStorageExtent_h
#define _cimple_MyStorageExtent_h

#include <cimple/cimple.h>
#include "CIM_StorageExtent.h"

CIMPLE_NAMESPACE_BEGIN

class MyStorageExtent : public Instance
{
public:
    // CIM_ManagedElement features:
    Property<String> Caption;
    Property<String> Description;
    Property<String> ElementName;

    // CIM_ManagedSystemElement features:
    Property<Datetime> InstallDate;
    Property<String> Name;
    Property<Array_uint16> OperationalStatus;
    Property<Array_String> StatusDescriptions;
    Property<String> Status;
    Property<uint16> HealthState;

    // CIM_LogicalElement features:

    // CIM_EnabledLogicalElement features:
    Property<uint16> EnabledState;
    Property<String> OtherEnabledState;
    Property<uint16> RequestedState;
    Property<uint16> EnabledDefault;
    Property<Datetime> TimeOfLastStateChange;

    // CIM_LogicalDevice features:
    Property<String> SystemCreationClassName; // KEY
    Property<String> SystemName; // KEY
    Property<String> CreationClassName; // KEY
    Property<String> DeviceID; // KEY
    Property<boolean> PowerManagementSupported;
    Property<Array_uint16> PowerManagementCapabilities;
    Property<uint16> Availability;
    Property<uint16> StatusInfo;
    Property<uint32> LastErrorCode;
    Property<String> ErrorDescription;
    Property<boolean> ErrorCleared;
    Property<Array_String> OtherIdentifyingInfo;
    Property<uint64> PowerOnHours;
    Property<uint64> TotalPowerOnHours;
    Property<Array_String> IdentifyingDescriptions;
    Property<Array_uint16> AdditionalAvailability;
    Property<uint64> MaxQuiesceTime;

    // CIM_StorageExtent features:
    Property<uint16> DataOrganization;
    Property<String> Purpose;
    Property<uint16> Access;
    Property<String> ErrorMethodology;
    Property<uint64> BlockSize;
    Property<uint64> NumberOfBlocks;
    Property<uint64> ConsumableBlocks;
    Property<boolean> IsBasedOnUnderlyingRedundancy;
    Property<boolean> SequentialAccess;
    Property<Array_uint16> ExtentStatus;
    Property<boolean> NoSinglePointOfFailure;
    Property<uint16> DataRedundancy;
    Property<uint16> PackageRedundancy;
    Property<uint8> DeltaReservation;
    Property<boolean> Primordial;

    // MyStorageExtent features:

    CIMPLE_CLASS(MyStorageExtent)
};

typedef CIM_EnabledLogicalElement_RequestStateChange_method MyStorageExtent_RequestStateChange_method;

typedef CIM_LogicalDevice_SetPowerState_method MyStorageExtent_SetPowerState_method;

typedef CIM_LogicalDevice_Reset_method MyStorageExtent_Reset_method;

typedef CIM_LogicalDevice_EnableDevice_method MyStorageExtent_EnableDevice_method;

typedef CIM_LogicalDevice_OnlineDevice_method MyStorageExtent_OnlineDevice_method;

typedef CIM_LogicalDevice_QuiesceDevice_method MyStorageExtent_QuiesceDevice_method;

typedef CIM_LogicalDevice_SaveProperties_method MyStorageExtent_SaveProperties_method;

typedef CIM_LogicalDevice_RestoreProperties_method MyStorageExtent_RestoreProperties_method;

CIMPLE_NAMESPACE_END

#endif /* _cimple_MyStorageExtent_h */