//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_CIM_Card_h
#define _cimple_CIM_Card_h

#include <cimple/cimple.h>
#include "CIM_PhysicalPackage.h"
#include "CIM_PhysicalConnector.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_Card : public Instance
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

    // CIM_PhysicalElement features:
    Property<String> Tag;
    Property<String> CreationClassName;
    Property<String> Manufacturer;
    Property<String> Model;
    Property<String> SKU;
    Property<String> SerialNumber;
    Property<String> Version;
    Property<String> PartNumber;
    Property<String> OtherIdentifyingInfo;
    Property<boolean> PoweredOn;
    Property<Datetime> ManufactureDate;
    Property<String> VendorEquipmentType;
    Property<String> UserTracking;
    Property<boolean> CanBeFRUed;

    // CIM_PhysicalPackage features:
    Property<uint16> RemovalConditions;
    Property<boolean> Removable;
    Property<boolean> Replaceable;
    Property<boolean> HotSwappable;
    Property<real32> Height;
    Property<real32> Depth;
    Property<real32> Width;
    Property<real32> Weight;

    // CIM_Card features:
    Property<boolean> HostingBoard;
    Property<String> SlotLayout;
    Property<boolean> RequiresDaughterBoard;
    Property<boolean> SpecialRequirements;
    Property<String> RequirementsDescription;
    Property<Array_sint16> OperatingVoltages;

    CIMPLE_CLASS(CIM_Card)
};

typedef CIM_PhysicalPackage_IsCompatible_method CIM_Card_IsCompatible_method;

class CIM_Card_ConnectorPower_method : public Instance
{
public:
    CIM_PhysicalConnector* Connector;
    Property<boolean> PoweredOn;
    Property<uint32> return_value;
    CIMPLE_METHOD(CIM_Card_ConnectorPower_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_Card_h */
