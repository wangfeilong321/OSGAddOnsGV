/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGRTINFOATTACHMENTFIELDS_H_
#define _OSGRTINFOATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribRRTDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RTInfoAttachment;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! RTInfoAttachmentPtr

OSG_GEN_CONTAINERPTR(RTInfoAttachment);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpContribRRTFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<RTInfoAttachmentPtr> :
    public FieldTraitsFCPtrBase<RTInfoAttachmentPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RTInfoAttachmentPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBRRT_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRTInfoAttachmentPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRTInfoAttachmentPtr"; }
};

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRTInfoAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRTInfoAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRTInfoAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRTInfoAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRTInfoAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRTInfoAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRTInfoAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTInfoAttachmentPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRTInfoAttachmentPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<RTInfoAttachmentPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribRRTFieldSingle */

typedef PointerSField<RTInfoAttachmentPtr,
                      RecordedRefCountPolicy  > SFRecRTInfoAttachmentPtr;
typedef PointerSField<RTInfoAttachmentPtr,
                      UnrecordedRefCountPolicy> SFUnrecRTInfoAttachmentPtr;
typedef PointerSField<RTInfoAttachmentPtr,
                      WeakRefCountPolicy      > SFWeakRTInfoAttachmentPtr;
typedef PointerSField<RTInfoAttachmentPtr,
                      NoRefCountPolicy        > SFUncountedRTInfoAttachmentPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribRRTFieldMulti */

typedef PointerMField<RTInfoAttachmentPtr,
                      RecordedRefCountPolicy  > MFRecRTInfoAttachmentPtr;
typedef PointerMField<RTInfoAttachmentPtr,
                      UnrecordedRefCountPolicy> MFUnrecRTInfoAttachmentPtr;
typedef PointerMField<RTInfoAttachmentPtr,
                      WeakRefCountPolicy      > MFWeakRTInfoAttachmentPtr;
typedef PointerMField<RTInfoAttachmentPtr,
                      NoRefCountPolicy        > MFUncountedRTInfoAttachmentPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGRTINFOATTACHMENTFIELDS_H_ */
