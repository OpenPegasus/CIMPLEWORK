/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_E_h
#define _cimple_E_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

class CIMPLE_LINKAGE E : public Instance
{
public:
    // E features:
    Instance* e;

    CIMPLE_CLASS(E)
};

class CIMPLE_LINKAGE E_Ref : public Hnd
{
public:

    E_Ref();
    E_Ref(const E_Ref& x);
    E_Ref(E* inst);
    ~E_Ref();
    E_Ref& operator=(const E_Ref& x);
};

class CIMPLE_LINKAGE E_Hnd : public Hnd
{
public:

    E_Hnd();
    E_Hnd(const E_Hnd& x);
    E_Hnd(E* inst);
    ~E_Hnd();
    E_Hnd& operator=(const E_Hnd& x);

    // e:
    Hnd e() const;
    void e(const Hnd& x);
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_E_h */
