/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.1
//
//==============================================================================

#ifndef _cimple_ThingLink_h
#define _cimple_ThingLink_h

#include <cimple/cimple.h>
#include "Thing.h"
#include "Thing.h"

CIMPLE_NAMESPACE_BEGIN

// ThingLink keys:

/*[930]*/
class ThingLink : public Instance
{
public:
    // ThingLink features:
    Thing* left;
    Thing* right;

    CIMPLE_CLASS(ThingLink)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_ThingLink_h */
