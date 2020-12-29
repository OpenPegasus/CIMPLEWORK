/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_CIM_ConcreteJob_h
#define _cimple_CIM_ConcreteJob_h

#include <cimple/cimple.h>
#include "CIM_Job.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_ConcreteJob : public Instance
{
public:
    // CIM_ManagedElement features:
    Property<String> Caption;
    Property<String> Description;
    Property<String> ElementName;

    // CIM_ManagedSystemElement features:
    Property<Datetime> InstallDate;
    Property<String> Name;
    struct _OperationalStatus
    {
        enum
        {
            enum_Unknown = 0,
            enum_Other = 1,
            enum_OK = 2,
            enum_Degraded = 3,
            enum_Stressed = 4,
            enum_Predictive_Failure = 5,
            enum_Error = 6,
            enum_Non_Recoverable_Error = 7,
            enum_Starting = 8,
            enum_Stopping = 9,
            enum_Stopped = 10,
            enum_In_Service = 11,
            enum_No_Contact = 12,
            enum_Lost_Communication = 13,
            enum_Aborted = 14,
            enum_Dormant = 15,
            enum_Supporting_Entity_in_Error = 16,
            enum_Completed = 17,
            enum_Power_Mode = 18,
            enum_DMTF_Reserved = 0,
            enum_Vendor_Reserved = 0,
        };
        Array_uint16 value;
        uint8 null;
    }
    OperationalStatus;
    Property<Array_String> StatusDescriptions;
    Property<String> Status;
    struct _HealthState
    {
        enum
        {
            enum_Unknown = 0,
            enum_OK = 5,
            enum_Degraded_Warning = 10,
            enum_Minor_failure = 15,
            enum_Major_failure = 20,
            enum_Critical_failure = 25,
            enum_Non_recoverable_error = 30,
            enum_DMTF_Reserved = 0,
        };
        uint16 value;
        uint8 null;
    }
    HealthState;

    // CIM_LogicalElement features:

    // CIM_Job features:
    Property<String> JobStatus;
    Property<Datetime> TimeSubmitted;
    Property<Datetime> ScheduledStartTime;
    Property<Datetime> StartTime;
    Property<Datetime> ElapsedTime;
    Property<uint32> JobRunTimes;
    struct _RunMonth
    {
        enum
        {
            enum_January = 0,
            enum_February = 1,
            enum_March = 2,
            enum_April = 3,
            enum_May = 4,
            enum_June = 5,
            enum_July = 6,
            enum_August = 7,
            enum_September = 8,
            enum_October = 9,
            enum_November = 10,
            enum_December = 11,
        };
        uint8 value;
        uint8 null;
    }
    RunMonth;
    Property<sint8> RunDay;
    struct _RunDayOfWeek
    {
        enum
        {
            enum__Saturday = -7,
            enum__Friday = -6,
            enum__Thursday = -5,
            enum__Wednesday = -4,
            enum__Tuesday = -3,
            enum__Monday = -2,
            enum__Sunday = -1,
            enum_ExactDayOfMonth = 0,
            enum_Sunday = 1,
            enum_Monday = 2,
            enum_Tuesday = 3,
            enum_Wednesday = 4,
            enum_Thursday = 5,
            enum_Friday = 6,
            enum_Saturday = 7,
        };
        sint8 value;
        uint8 null;
    }
    RunDayOfWeek;
    Property<Datetime> RunStartInterval;
    struct _LocalOrUtcTime
    {
        enum
        {
            enum_Local_Time = 1,
            enum_UTC_Time = 2,
        };
        uint16 value;
        uint8 null;
    }
    LocalOrUtcTime;
    Property<Datetime> UntilTime;
    Property<String> Notify;
    Property<String> Owner;
    Property<uint32> Priority;
    Property<uint16> PercentComplete;
    Property<boolean> DeleteOnCompletion;
    Property<uint16> ErrorCode;
    Property<String> ErrorDescription;
    struct _RecoveryAction
    {
        enum
        {
            enum_Unknown = 0,
            enum_Other = 1,
            enum_Do_Not_Continue = 2,
            enum_Continue_With_Next_Job = 3,
            enum_Re_run_Job = 4,
            enum_Run_Recovery_Job = 5,
        };
        uint16 value;
        uint8 null;
    }
    RecoveryAction;
    Property<String> OtherRecoveryAction;

    // CIM_ConcreteJob features:
    Property<String> InstanceID; // KEY
    struct _JobState
    {
        enum
        {
            enum_New = 2,
            enum_Starting = 3,
            enum_Running = 4,
            enum_Suspended = 5,
            enum_Shutting_Down = 6,
            enum_Completed = 7,
            enum_Terminated = 8,
            enum_Killed = 9,
            enum_Exception = 10,
            enum_Service = 11,
            enum_Query_Pending = 12,
            enum_DMTF_Reserved = 13,
            enum_Vendor_Reserved = 32768,
        };
        uint16 value;
        uint8 null;
    }
    JobState;
    Property<Datetime> TimeOfLastStateChange;
    Property<Datetime> TimeBeforeRemoval;

    CIMPLE_CLASS(CIM_ConcreteJob)
};

typedef CIM_Job_KillJob_method CIM_ConcreteJob_KillJob_method;

class CIM_ConcreteJob_RequestStateChange_method : public Instance
{
public:
    Property<uint16> RequestedState;
    Property<Datetime> TimeoutPeriod;
    Property<uint32> return_value;
    CIMPLE_METHOD(CIM_ConcreteJob_RequestStateChange_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ConcreteJob_h */