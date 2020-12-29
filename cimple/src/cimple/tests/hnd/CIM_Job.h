/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_CIM_Job_h
#define _cimple_CIM_Job_h

#include <cimple/cimple.h>
#include "CIM_LogicalElement.h"

CIMPLE_NAMESPACE_BEGIN

class CIMPLE_LINKAGE CIM_Job : public Instance
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

    // CIM_Job features:
    Property<String> JobStatus;
    Property<Datetime> TimeSubmitted;
    Property<Datetime> ScheduledStartTime;
    Property<Datetime> StartTime;
    Property<Datetime> ElapsedTime;
    Property<uint32> JobRunTimes;
    Property<uint8> RunMonth;
    Property<sint8> RunDay;
    Property<sint8> RunDayOfWeek;
    Property<Datetime> RunStartInterval;
    Property<uint16> LocalOrUtcTime;
    Property<Datetime> UntilTime;
    Property<String> Notify;
    Property<String> Owner;
    Property<uint32> Priority;
    Property<uint16> PercentComplete;
    Property<boolean> DeleteOnCompletion;
    Property<uint16> ErrorCode;
    Property<String> ErrorDescription;
    Property<uint16> RecoveryAction;
    Property<String> OtherRecoveryAction;

    CIMPLE_CLASS(CIM_Job)
};

class CIMPLE_LINKAGE CIM_Job_Ref : public CIM_LogicalElement_Ref
{
public:

    CIM_Job_Ref();
    CIM_Job_Ref(const CIM_Job_Ref& x);
    CIM_Job_Ref(CIM_Job* inst);
    ~CIM_Job_Ref();
    CIM_Job_Ref& operator=(const CIM_Job_Ref& x);
};

class CIMPLE_LINKAGE CIM_Job_Hnd : public CIM_LogicalElement_Hnd
{
public:

    CIM_Job_Hnd();
    CIM_Job_Hnd(const CIM_Job_Hnd& x);
    CIM_Job_Hnd(CIM_Job* inst);
    ~CIM_Job_Hnd();
    CIM_Job_Hnd& operator=(const CIM_Job_Hnd& x);

    // JobStatus:
    const String& JobStatus() const;
    void JobStatus(const String& x);
    bool JobStatus_null() const;
    void JobStatus_null(bool x);

    // TimeSubmitted:
    const Datetime& TimeSubmitted() const;
    void TimeSubmitted(const Datetime& x);
    bool TimeSubmitted_null() const;
    void TimeSubmitted_null(bool x);

    // ScheduledStartTime:
    const Datetime& ScheduledStartTime() const;
    void ScheduledStartTime(const Datetime& x);
    bool ScheduledStartTime_null() const;
    void ScheduledStartTime_null(bool x);

    // StartTime:
    const Datetime& StartTime() const;
    void StartTime(const Datetime& x);
    bool StartTime_null() const;
    void StartTime_null(bool x);

    // ElapsedTime:
    const Datetime& ElapsedTime() const;
    void ElapsedTime(const Datetime& x);
    bool ElapsedTime_null() const;
    void ElapsedTime_null(bool x);

    // JobRunTimes:
    const uint32& JobRunTimes() const;
    void JobRunTimes(const uint32& x);
    bool JobRunTimes_null() const;
    void JobRunTimes_null(bool x);

    // RunMonth:
    const uint8& RunMonth() const;
    void RunMonth(const uint8& x);
    bool RunMonth_null() const;
    void RunMonth_null(bool x);

    // RunDay:
    const sint8& RunDay() const;
    void RunDay(const sint8& x);
    bool RunDay_null() const;
    void RunDay_null(bool x);

    // RunDayOfWeek:
    const sint8& RunDayOfWeek() const;
    void RunDayOfWeek(const sint8& x);
    bool RunDayOfWeek_null() const;
    void RunDayOfWeek_null(bool x);

    // RunStartInterval:
    const Datetime& RunStartInterval() const;
    void RunStartInterval(const Datetime& x);
    bool RunStartInterval_null() const;
    void RunStartInterval_null(bool x);

    // LocalOrUtcTime:
    const uint16& LocalOrUtcTime() const;
    void LocalOrUtcTime(const uint16& x);
    bool LocalOrUtcTime_null() const;
    void LocalOrUtcTime_null(bool x);

    // UntilTime:
    const Datetime& UntilTime() const;
    void UntilTime(const Datetime& x);
    bool UntilTime_null() const;
    void UntilTime_null(bool x);

    // Notify:
    const String& Notify() const;
    void Notify(const String& x);
    bool Notify_null() const;
    void Notify_null(bool x);

    // Owner:
    const String& Owner() const;
    void Owner(const String& x);
    bool Owner_null() const;
    void Owner_null(bool x);

    // Priority:
    const uint32& Priority() const;
    void Priority(const uint32& x);
    bool Priority_null() const;
    void Priority_null(bool x);

    // PercentComplete:
    const uint16& PercentComplete() const;
    void PercentComplete(const uint16& x);
    bool PercentComplete_null() const;
    void PercentComplete_null(bool x);

    // DeleteOnCompletion:
    const boolean& DeleteOnCompletion() const;
    void DeleteOnCompletion(const boolean& x);
    bool DeleteOnCompletion_null() const;
    void DeleteOnCompletion_null(bool x);

    // ErrorCode:
    const uint16& ErrorCode() const;
    void ErrorCode(const uint16& x);
    bool ErrorCode_null() const;
    void ErrorCode_null(bool x);

    // ErrorDescription:
    const String& ErrorDescription() const;
    void ErrorDescription(const String& x);
    bool ErrorDescription_null() const;
    void ErrorDescription_null(bool x);

    // RecoveryAction:
    const uint16& RecoveryAction() const;
    void RecoveryAction(const uint16& x);
    bool RecoveryAction_null() const;
    void RecoveryAction_null(bool x);

    // OtherRecoveryAction:
    const String& OtherRecoveryAction() const;
    void OtherRecoveryAction(const String& x);
    bool OtherRecoveryAction_null() const;
    void OtherRecoveryAction_null(bool x);
};

class CIMPLE_LINKAGE CIM_Job_KillJob_method : public Instance
{
public:
    Property<boolean> DeleteOnKill;
    Property<uint32> return_value;
    CIMPLE_METHOD(CIM_Job_KillJob_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_Job_h */