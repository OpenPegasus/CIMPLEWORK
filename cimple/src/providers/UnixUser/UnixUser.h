/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.0.22
//
//==============================================================================

#ifndef _cimple_UnixUser_h
#define _cimple_UnixUser_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

// UnixUser keys:
//     name

/*[928]*/
class UnixUser : public Instance
{
public:
    // UnixUser features:
    Property<String> name;
    Property<String> password;
    Property<uint32> uid;
    Property<uint32> gid;
    Property<String> fullName;
    Property<String> homeDir;
    Property<String> shellProgram;

    CIMPLE_CLASS(UnixUser)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_UnixUser_h */