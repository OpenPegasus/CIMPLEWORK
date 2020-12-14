/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.0
//
//==============================================================================

#ifndef _cimple_CIM_ManagedSystemElement_h
#define _cimple_CIM_ManagedSystemElement_h

#include <cimple/cimple.h>
#include "CIM_ManagedElement.h"

CIMPLE_NAMESPACE_BEGIN

// CIM_ManagedSystemElement keys:

/*[928]*/
class CIM_ManagedSystemElement : public Instance
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

    CIMPLE_CLASS(CIM_ManagedSystemElement)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ManagedSystemElement_h */
