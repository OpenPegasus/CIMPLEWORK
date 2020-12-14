/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_CIM_StorageRedundancySet_h
#define _cimple_CIM_StorageRedundancySet_h

#include <cimple/cimple.h>
#include "CIM_RedundancySet.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_StorageRedundancySet : public Instance
{
public:
    // CIM_ManagedElement features:
    Property<String> Caption;
    Property<String> Description;
    Property<String> ElementName;

    // CIM_Collection features:

    // CIM_SystemSpecificCollection features:
    Property<String> InstanceID; // KEY

    // CIM_RedundancySet features:
    Property<uint16> RedundancyStatus;
    Property<Array_uint16> TypeOfSet;
    Property<uint32> MinNumberNeeded;
    Property<uint32> MaxNumberSupported;
    Property<String> VendorIdentifyingInfo;
    Property<Array_String> OtherTypeOfSet;
    Property<uint16> LoadBalanceAlgorithm;
    Property<String> OtherLoadBalanceAlgorithm;

    // CIM_StorageRedundancySet features:
    Property<uint16> TypeOfAlgorithm;
    Property<String> OtherAlgorithm;

    CIMPLE_CLASS(CIM_StorageRedundancySet)
};

typedef CIM_RedundancySet_Failover_method CIM_StorageRedundancySet_Failover_method;

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_StorageRedundancySet_h */
