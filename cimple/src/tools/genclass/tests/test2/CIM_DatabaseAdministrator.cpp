/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_DatabaseAdministrator.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1387]*/
extern const Meta_Reference
_CIM_DatabaseAdministrator_Antecedent;

/*[1398]*/
const Meta_Reference
_CIM_DatabaseAdministrator_Antecedent =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "Antecedent",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &CIM_CommonDatabase::static_meta_class,
    CIMPLE_OFF(CIM_DatabaseAdministrator,Antecedent)
};

/*[1387]*/
extern const Meta_Reference
_CIM_DatabaseAdministrator_Dependent;

/*[1398]*/
const Meta_Reference
_CIM_DatabaseAdministrator_Dependent =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "Dependent",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &CIM_UserEntity::static_meta_class,
    CIMPLE_OFF(CIM_DatabaseAdministrator,Dependent)
};

/*[2025]*/
static Meta_Feature* _CIM_DatabaseAdministrator_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_DatabaseAdministrator_Antecedent,
    (Meta_Feature*)(void*)&_CIM_DatabaseAdministrator_Dependent,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2092]*/
const Meta_Class CIM_DatabaseAdministrator::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_ASSOCIATION,
    "CIM_DatabaseAdministrator",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_DatabaseAdministrator_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_DatabaseAdministrator_MFA),
    sizeof(CIM_DatabaseAdministrator),
    _locals,
    &CIM_Dependency::static_meta_class,
    2, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END
