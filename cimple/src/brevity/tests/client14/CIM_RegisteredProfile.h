/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.0
//
//==============================================================================

#ifndef _cimple_CIM_RegisteredProfile_h
#define _cimple_CIM_RegisteredProfile_h

#include <cimple/cimple.h>
#include "CIM_ManagedElement.h"

CIMPLE_NAMESPACE_BEGIN

// CIM_RegisteredProfile keys:
//     InstanceID

/*[928]*/
class CIM_RegisteredProfile : public Instance
{
public:
    // CIM_ManagedElement features:
    Property<String> Caption;
    Property<String> Description;
    Property<String> ElementName;

    // CIM_RegisteredProfile features:
    Property<String> InstanceID;
    Property<uint16> RegisteredOrganization;
    Property<String> OtherRegisteredOrganization;
    Property<String> RegisteredName;
    Property<String> RegisteredVersion;
    Property<Array_uint16> AdvertiseTypes;
    Property<Array_String> AdvertiseTypeDescriptions;

    CIMPLE_CLASS(CIM_RegisteredProfile)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_RegisteredProfile_h */