/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.1.0
//
//==============================================================================

#ifndef _cimple_SalesmanLink_h
#define _cimple_SalesmanLink_h

#include <cimple/cimple.h>
#include "PersonLink.h"
#include "Salesman.h"
#include "Salesman.h"

CIMPLE_NAMESPACE_BEGIN

// SalesmanLink keys:

/*[1204]*/
class SalesmanLink : public Instance
{
public:
    // PersonLink features:
    Salesman* parent;
    Salesman* child;

    // SalesmanLink features:

    CIMPLE_CLASS(SalesmanLink)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_SalesmanLink_h */
