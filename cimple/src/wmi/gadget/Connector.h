/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.2.5
//
//==============================================================================

#ifndef _cimple_Connector_h
#define _cimple_Connector_h

#include <cimple/cimple.h>
#include "Gadget.h"
#include "Widget.h"

CIMPLE_NAMESPACE_BEGIN

// Connector keys:

/*[930]*/
class Connector : public Instance
{
public:
    // Connector features:
    Gadget* Left;
    Widget* Right;

    CIMPLE_CLASS(Connector)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_Connector_h */
