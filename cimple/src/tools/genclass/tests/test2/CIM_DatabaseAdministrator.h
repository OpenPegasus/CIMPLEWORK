/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_CIM_DatabaseAdministrator_h
#define _cimple_CIM_DatabaseAdministrator_h

#include <cimple/cimple.h>
#include "CIM_Dependency.h"
#include "CIM_CommonDatabase.h"
#include "CIM_UserEntity.h"

CIMPLE_NAMESPACE_BEGIN

// CIM_DatabaseAdministrator keys:

/*[928]*/
class CIM_DatabaseAdministrator : public Instance
{
public:
    // CIM_Dependency features:
    CIM_CommonDatabase* Antecedent;
    CIM_UserEntity* Dependent;

    // CIM_DatabaseAdministrator features:

    CIMPLE_CLASS(CIM_DatabaseAdministrator)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_DatabaseAdministrator_h */
