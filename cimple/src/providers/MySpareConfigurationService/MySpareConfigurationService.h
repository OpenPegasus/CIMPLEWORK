/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_MySpareConfigurationService_h
#define _cimple_MySpareConfigurationService_h

#include <cimple/cimple.h>
#include "SNIA_SpareConfigurationService.h"

CIMPLE_NAMESPACE_BEGIN

class MySpareConfigurationService : public Instance
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

    // CIM_Service features:
    Property<String> SystemCreationClassName; // KEY
    Property<String> SystemName; // KEY
    Property<String> CreationClassName; // KEY
    Property<String> PrimaryOwnerName;
    Property<String> PrimaryOwnerContact;
    Property<String> StartMode;
    Property<boolean> Started;

    // SNIA_SpareConfigurationService features:

    // MySpareConfigurationService features:

    CIMPLE_CLASS(MySpareConfigurationService)
};

typedef CIM_EnabledLogicalElement_RequestStateChange_method MySpareConfigurationService_RequestStateChange_method;

typedef CIM_Service_StartService_method MySpareConfigurationService_StartService_method;

typedef CIM_Service_StopService_method MySpareConfigurationService_StopService_method;

typedef SNIA_SpareConfigurationService_AssignSpares_method MySpareConfigurationService_AssignSpares_method;

typedef SNIA_SpareConfigurationService_UnassignSpares_method MySpareConfigurationService_UnassignSpares_method;

typedef SNIA_SpareConfigurationService_RebuildStorageExtent_method MySpareConfigurationService_RebuildStorageExtent_method;

typedef SNIA_SpareConfigurationService_CheckParityConsistency_method MySpareConfigurationService_CheckParityConsistency_method;

typedef SNIA_SpareConfigurationService_RepairParity_method MySpareConfigurationService_RepairParity_method;

CIMPLE_NAMESPACE_END

#endif /* _cimple_MySpareConfigurationService_h */