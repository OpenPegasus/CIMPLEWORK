//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENHND.
//
//==============================================================================

#ifndef _cimple_Successor_Hnd
#define _cimple_Successor_Hnd

#include <cimple/cimple.h>
#include "Successor.h"
#include "President_Hnd.h"

CIMPLE_NAMESPACE_BEGIN

class Successor_Ref : public Instance_Ref
{
public:
    typedef Successor Class;
    Successor_Ref();
    Successor_Ref(const Successor_Ref& x);
    Successor_Ref(Successor* inst);
    explicit Successor_Ref(const Instance_Ref& x);
    ~Successor_Ref();
    Successor_Ref& operator=(const Successor_Ref& x);
    static bool is_a(const Instance_Ref& x);

    // Prev:
    President_Ref Prev_value() const;
    void Prev_value(const President_Ref& x);
    bool Prev_null() const;
    void Prev_clear();

    // Next:
    President_Ref Next_value() const;
    void Next_value(const President_Ref& x);
    bool Next_null() const;
    void Next_clear();

protected:
    Successor_Ref(const Meta_Class* mc);
    Successor_Ref(const Meta_Class* mc, const Instance_Ref& x);
};

class Successor_Hnd : public Instance_Hnd
{
public:
    typedef Successor Class;
    Successor_Hnd();
    Successor_Hnd(const Successor_Hnd& x);
    Successor_Hnd(Successor* inst);
    explicit Successor_Hnd(const Instance_Hnd& x);
    ~Successor_Hnd();
    Successor_Hnd& operator=(const Successor_Hnd& x);
    static bool is_a(const Instance_Hnd& x);
    Successor_Ref reference() const;

    // Prev:
    President_Ref Prev_value() const;
    void Prev_value(const President_Ref& x);
    bool Prev_null() const;
    void Prev_clear();

    // Next:
    President_Ref Next_value() const;
    void Next_value(const President_Ref& x);
    bool Next_null() const;
    void Next_clear();

protected:
    Successor_Hnd(const Meta_Class* mc);
    Successor_Hnd(const Meta_Class* mc, const Instance_Hnd& x);
};

inline Successor_Ref::Successor_Ref() :
    Instance_Ref(&Successor::static_meta_class)
{
}

inline Successor_Ref::Successor_Ref(const Successor_Ref& x) :
    Instance_Ref(x)
{
}

inline Successor_Ref::Successor_Ref(Successor* inst) :
    Instance_Ref((Instance*)inst)
{
}

inline Successor_Ref::Successor_Ref(const Instance_Ref& x) : 
    Instance_Ref(&Successor::static_meta_class, x)
{
}

inline Successor_Ref::Successor_Ref(const Meta_Class* mc) : Instance_Ref(mc)
{
}

inline Successor_Ref::Successor_Ref(const Meta_Class* mc, const Instance_Ref& x) : Instance_Ref(mc, x)
{
}

inline Successor_Ref::~Successor_Ref()
{
}

inline Successor_Ref& Successor_Ref::operator=(const Successor_Ref& x)
{
    Instance_Ref::operator=(x);
    return *this;
}

inline bool Successor_Ref::is_a(const Instance_Ref& x)
{
    return is_subclass(&Successor::static_meta_class, x.meta_class());
}

inline President_Ref Successor_Ref::Prev_value() const
{
    if (!((Class*)_inst)->Prev)
        _throw_null_access("Prev");
    ref(((Class*)_inst)->Prev);
    return President_Ref(((Class*)_inst)->Prev);
}

inline void Successor_Ref::Prev_value(const President_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->Prev);
    ref(((Class*)_inst)->Prev = (President*)x.instance());
}

inline bool Successor_Ref::Prev_null() const
{
    return ((Class*)_inst)->Prev == 0;
}

inline void Successor_Ref::Prev_clear()
{
    _cow();
    unref(((Class*)_inst)->Prev);
    ((Class*)_inst)->Prev = 0;
}

inline President_Ref Successor_Ref::Next_value() const
{
    if (!((Class*)_inst)->Next)
        _throw_null_access("Next");
    ref(((Class*)_inst)->Next);
    return President_Ref(((Class*)_inst)->Next);
}

inline void Successor_Ref::Next_value(const President_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->Next);
    ref(((Class*)_inst)->Next = (President*)x.instance());
}

inline bool Successor_Ref::Next_null() const
{
    return ((Class*)_inst)->Next == 0;
}

inline void Successor_Ref::Next_clear()
{
    _cow();
    unref(((Class*)_inst)->Next);
    ((Class*)_inst)->Next = 0;
}

inline Successor_Hnd::Successor_Hnd() :
    Instance_Hnd(&Successor::static_meta_class)
{
}

inline Successor_Hnd::Successor_Hnd(const Successor_Hnd& x) :
    Instance_Hnd(x)
{
}

inline Successor_Hnd::Successor_Hnd(Successor* inst) :
    Instance_Hnd((Instance*)inst)
{
}

inline Successor_Hnd::Successor_Hnd(const Instance_Hnd& x) : 
    Instance_Hnd(&Successor::static_meta_class, x)
{
}

inline Successor_Hnd::Successor_Hnd(const Meta_Class* mc) : Instance_Hnd(mc)
{
}

inline Successor_Hnd::Successor_Hnd(const Meta_Class* mc, const Instance_Hnd& x) : Instance_Hnd(mc, x)
{
}

inline Successor_Hnd::~Successor_Hnd()
{
}

inline Successor_Hnd& Successor_Hnd::operator=(const Successor_Hnd& x)
{
    Instance_Hnd::operator=(x);
    return *this;
}

inline bool Successor_Hnd::is_a(const Instance_Hnd& x)
{
    return is_subclass(&Successor::static_meta_class, x.meta_class());
}

inline Successor_Ref Successor_Hnd::reference() const
{
    return Successor_Ref((Successor*)key_clone(_inst));
}

inline President_Ref Successor_Hnd::Prev_value() const
{
    if (!((Class*)_inst)->Prev)
        _throw_null_access("Prev");
    ref(((Class*)_inst)->Prev);
    return President_Ref(((Class*)_inst)->Prev);
}

inline void Successor_Hnd::Prev_value(const President_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->Prev);
    ref(((Class*)_inst)->Prev = (President*)x.instance());
}

inline bool Successor_Hnd::Prev_null() const
{
    return ((Class*)_inst)->Prev == 0;
}

inline void Successor_Hnd::Prev_clear()
{
    _cow();
    unref(((Class*)_inst)->Prev);
    ((Class*)_inst)->Prev = 0;
}

inline President_Ref Successor_Hnd::Next_value() const
{
    if (!((Class*)_inst)->Next)
        _throw_null_access("Next");
    ref(((Class*)_inst)->Next);
    return President_Ref(((Class*)_inst)->Next);
}

inline void Successor_Hnd::Next_value(const President_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->Next);
    ref(((Class*)_inst)->Next = (President*)x.instance());
}

inline bool Successor_Hnd::Next_null() const
{
    return ((Class*)_inst)->Next == 0;
}

inline void Successor_Hnd::Next_clear()
{
    _cow();
    unref(((Class*)_inst)->Next);
    ((Class*)_inst)->Next = 0;
}

CIMPLE_NAMESPACE_END

#endif /* _cimple_Successor_Hnd_h */
