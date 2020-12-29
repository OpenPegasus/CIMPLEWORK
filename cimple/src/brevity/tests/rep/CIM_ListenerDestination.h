/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_CIM_ListenerDestination_h
#define _cimple_CIM_ListenerDestination_h

#include <cimple/cimple.h>
#include "CIM_ManagedElement.h"

CIMPLE_NAMESPACE_BEGIN

// CIM_ListenerDestination keys:
//     SystemCreationClassName
//     SystemName
//     CreationClassName
//     Name

/*[928]*/
class CIM_ListenerDestination : public Instance
{
public:
    // CIM_ManagedElement features:
    Property<String> Caption;
    Property<String> Description;
    Property<String> ElementName;

    // CIM_ListenerDestination features:
    Property<String> SystemCreationClassName;
    Property<String> SystemName;
    Property<String> CreationClassName;
    Property<String> Name;
    Property<uint16> PersistenceType;
    Property<String> OtherPersistenceType;

    CIMPLE_CLASS(CIM_ListenerDestination)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ListenerDestination_h */