/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_X_h
#define _cimple_X_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

class CIMPLE_LINKAGE X : public Instance
{
public:
    // X features:
    Property<uint32> Key; // KEY
    Property<Array_String> Names;

    CIMPLE_CLASS(X)
};

class CIMPLE_LINKAGE X_Ref : public Hnd
{
public:

    X_Ref();
    X_Ref(const X_Ref& x);
    X_Ref(X* inst);
    ~X_Ref();
    X_Ref& operator=(const X_Ref& x);

    // Key:
    const uint32& Key() const;
    void Key(const uint32& x);
    bool Key_null() const;
    void Key_null(bool x);
};

class CIMPLE_LINKAGE X_Hnd : public Hnd
{
public:

    X_Hnd();
    X_Hnd(const X_Hnd& x);
    X_Hnd(X* inst);
    ~X_Hnd();
    X_Hnd& operator=(const X_Hnd& x);

    // Key:
    const uint32& Key() const;
    void Key(const uint32& x);
    bool Key_null() const;
    void Key_null(bool x);

    // Names:
    const Array<String>& Names() const;
    void Names(const Array<String>& x);
    bool Names_null() const;
    void Names_null(bool x);
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_X_h */