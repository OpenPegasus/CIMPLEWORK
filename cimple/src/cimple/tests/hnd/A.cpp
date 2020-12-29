/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "A.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_6827E083506B1A56883F566A87E0489F;

static const Meta_Qualifier*
_A_Left_MQA[] =
{
};

extern const Meta_Reference
_A_Left;

const Meta_Reference
_A_Left =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "Left",
    _A_Left_MQA,
    CIMPLE_ARRAY_SIZE(_A_Left_MQA),
    0, /* subscript */
    &Y::static_meta_class,
    CIMPLE_OFF(A,Left)
};

static const Meta_Qualifier*
_A_Right_MQA[] =
{
};

extern const Meta_Reference
_A_Right;

const Meta_Reference
_A_Right =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "Right",
    _A_Right_MQA,
    CIMPLE_ARRAY_SIZE(_A_Right_MQA),
    0, /* subscript */
    &Y::static_meta_class,
    CIMPLE_OFF(A,Right)
};

static Meta_Feature* _A_MFA[] =
{
    (Meta_Feature*)(void*)&_A_Left,
    (Meta_Feature*)(void*)&_A_Right,
};

static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

static const Meta_Qualifier*
_A_MQA[] =
{
};

const Meta_Class A::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_ASSOCIATION,
    "A",
    _A_MQA,
    CIMPLE_ARRAY_SIZE(_A_MQA),
    _A_MFA,
    CIMPLE_ARRAY_SIZE(_A_MFA),
    sizeof(A),
    _locals,
    0, /* super_class */ 
    2, /* num_keys */
    0x533F8FDF, /* crc */
    &__meta_repository_6827E083506B1A56883F566A87E0489F,
};

A_Ref::A_Ref()
{
    _inst = A::create(true);
    __create_refs(_inst);
    _ref = true;
}

A_Ref::A_Ref(const A_Ref& x) : Hnd(x)
{
}

A_Ref::A_Ref(A* inst)
{
    _inst = inst;
    __create_refs(_inst);
    _ref = true;
}

A_Ref::~A_Ref()
{
}

A_Ref& A_Ref::operator=(const A_Ref& x)
{
    Hnd::operator=(x);
    return *this;
}

Y_Ref A_Ref::Left() const
{
    ref(((A*)_inst)->Left);
    return Y_Ref(((A*)_inst)->Left);
}

void A_Ref::Left(const Y_Ref& x)
{
    _cow();
    unref(((A*)_inst)->Left);
    ref(((A*)_inst)->Left = (Y*)x.instance());
}

Y_Ref A_Ref::Right() const
{
    ref(((A*)_inst)->Right);
    return Y_Ref(((A*)_inst)->Right);
}

void A_Ref::Right(const Y_Ref& x)
{
    _cow();
    unref(((A*)_inst)->Right);
    ref(((A*)_inst)->Right = (Y*)x.instance());
}

A_Hnd::A_Hnd()
{
    _inst = A::create(true);
    __create_refs(_inst);
    _ref = false;
}

A_Hnd::A_Hnd(const A_Hnd& x) : Hnd(x)
{
}

A_Hnd::A_Hnd(A* inst)
{
    _inst = inst;
    __create_refs(_inst);
    _ref = false;
}

A_Hnd::~A_Hnd()
{
}

A_Hnd& A_Hnd::operator=(const A_Hnd& x)
{
    Hnd::operator=(x);
    return *this;
}

Y_Ref A_Hnd::Left() const
{
    ref(((A*)_inst)->Left);
    return Y_Ref(((A*)_inst)->Left);
}

void A_Hnd::Left(const Y_Ref& x)
{
    _cow();
    unref(((A*)_inst)->Left);
    ref(((A*)_inst)->Left = (Y*)x.instance());
}

Y_Ref A_Hnd::Right() const
{
    ref(((A*)_inst)->Right);
    return Y_Ref(((A*)_inst)->Right);
}

void A_Hnd::Right(const Y_Ref& x)
{
    _cow();
    unref(((A*)_inst)->Right);
    ref(((A*)_inst)->Right = (Y*)x.instance());
}

CIMPLE_NAMESPACE_END
