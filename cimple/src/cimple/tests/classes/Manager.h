/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.1.0
//
//==============================================================================

#ifndef _cimple_Manager_h
#define _cimple_Manager_h

#include <cimple/cimple.h>
#include "Employee.h"

CIMPLE_NAMESPACE_BEGIN

// Manager keys:
//     Id

/*[1195]*/
class Manager : public Instance
{
public:
    // Employee features:
    Property<uint32> Id;
    Property<String> First;
    Property<String> Last;
    Property<uint32> Gender;
    Property<boolean> Active;

    // Manager features:
    Property<uint32> NumEmployees;
    Property<uint32> Budget;

    CIMPLE_CLASS(Manager)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_Manager_h */
