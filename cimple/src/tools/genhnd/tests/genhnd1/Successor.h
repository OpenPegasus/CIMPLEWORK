/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.0.22
//
//==============================================================================

#ifndef _cimple_Successor_h
#define _cimple_Successor_h

#include <cimple/cimple.h>
#include "President.h"
#include "President.h"

CIMPLE_NAMESPACE_BEGIN

// Successor keys:

/*[928]*/
class Successor : public Instance
{
public:
    // Successor features:
    President* Prev;
    President* Next;

    CIMPLE_CLASS(Successor)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_Successor_h */
