/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_CIM_ComputerSystem_h
#define _cimple_CIM_ComputerSystem_h

#include <cimple/cimple.h>
#include "CIM_System.h"

CIMPLE_NAMESPACE_BEGIN

// CIM_ComputerSystem keys:
//     Name
//     CreationClassName

/*[928]*/
class CIM_ComputerSystem : public Instance
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

    // CIM_System features:
    Property<String> CreationClassName;
    Property<String> NameFormat;
    Property<String> PrimaryOwnerName;
    Property<String> PrimaryOwnerContact;
    Property<Array_String> Roles;

    // CIM_ComputerSystem features:
    Property<Array_String> OtherIdentifyingInfo;
    Property<Array_String> IdentifyingDescriptions;
    Property<Array_uint16> Dedicated;
    Property<Array_String> OtherDedicatedDescriptions;
    Property<uint16> ResetCapability;
    Property<Array_uint16> PowerManagementCapabilities;

    CIMPLE_CLASS(CIM_ComputerSystem)
};

typedef CIM_EnabledLogicalElement_RequestStateChange_method CIM_ComputerSystem_RequestStateChange_method;

/*[1014]*/
class CIM_ComputerSystem_SetPowerState_method : public Instance
{
public:
    Property<uint32> PowerState;
    Property<Datetime> Time;
    Property<uint32> return_value;
    CIMPLE_METHOD(CIM_ComputerSystem_SetPowerState_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ComputerSystem_h */