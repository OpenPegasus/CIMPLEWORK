/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_CIM_SystemComponent_h
#define _cimple_CIM_SystemComponent_h

#include <cimple/cimple.h>
#include "CIM_Component.h"
#include "CIM_System.h"
#include "CIM_ManagedSystemElement.h"

CIMPLE_NAMESPACE_BEGIN

// CIM_SystemComponent keys:

/*[928]*/
class CIM_SystemComponent : public Instance
{
public:
    // CIM_Component features:
    CIM_System* GroupComponent;
    CIM_ManagedSystemElement* PartComponent;

    // CIM_SystemComponent features:

    CIMPLE_CLASS(CIM_SystemComponent)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_SystemComponent_h */
