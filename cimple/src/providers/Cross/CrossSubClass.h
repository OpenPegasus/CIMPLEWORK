/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.5
//
//==============================================================================

#ifndef _cimple_CrossSubClass_h
#define _cimple_CrossSubClass_h

#include <cimple/cimple.h>
#include "Cross.h"

CIMPLE_NAMESPACE_BEGIN

// CrossSubClass keys:

/*[930]*/
class CrossSubClass : public Instance
{
public:
    // Cross features:
    Left* left;
    Right* right;

    // CrossSubClass features:
    Property<String> addedProperty;

    CIMPLE_CLASS(CrossSubClass)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CrossSubClass_h */
