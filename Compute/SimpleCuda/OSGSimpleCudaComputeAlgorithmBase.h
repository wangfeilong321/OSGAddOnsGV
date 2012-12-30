/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class SimpleCudaComputeAlgorithm
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSIMPLECUDACOMPUTEALGORITHMBASE_H_
#define _OSGSIMPLECUDACOMPUTEALGORITHMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribComputeDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComputeAlgorithm.h" // Parent

#include "OSGSysFields.h"               // Mode type
#include "OSGGeometryFields.h"          // Target type

#include "OSGSimpleCudaComputeAlgorithmFields.h"

OSG_BEGIN_NAMESPACE


class SimpleCudaComputeAlgorithm;

//! \brief SimpleCudaComputeAlgorithm Base Class.

class OSG_CONTRIBCOMPUTE_DLLMAPPING SimpleCudaComputeAlgorithmBase : public ComputeAlgorithm
{
  public:

    typedef ComputeAlgorithm Inherited;
    typedef ComputeAlgorithm ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SimpleCudaComputeAlgorithm);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ModeFieldId = Inherited::NextFieldId,
        IntensityFieldId = ModeFieldId + 1,
        ScaleFieldId = IntensityFieldId + 1,
        ScaleStepFieldId = ScaleFieldId + 1,
        ScaleMaxFieldId = ScaleStepFieldId + 1,
        TargetFieldId = ScaleMaxFieldId + 1,
        NextFieldId = TargetFieldId + 1
    };

    static const OSG::BitVector ModeFieldMask =
        (TypeTraits<BitVector>::One << ModeFieldId);
    static const OSG::BitVector IntensityFieldMask =
        (TypeTraits<BitVector>::One << IntensityFieldId);
    static const OSG::BitVector ScaleFieldMask =
        (TypeTraits<BitVector>::One << ScaleFieldId);
    static const OSG::BitVector ScaleStepFieldMask =
        (TypeTraits<BitVector>::One << ScaleStepFieldId);
    static const OSG::BitVector ScaleMaxFieldMask =
        (TypeTraits<BitVector>::One << ScaleMaxFieldId);
    static const OSG::BitVector TargetFieldMask =
        (TypeTraits<BitVector>::One << TargetFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFModeType;
    typedef SFReal32          SFIntensityType;
    typedef SFReal32          SFScaleType;
    typedef SFReal32          SFScaleStepType;
    typedef SFReal32          SFScaleMaxType;
    typedef SFUnrecGeometryPtr SFTargetType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFMode           (void);
            const SFUInt32            *getSFMode            (void) const;

                  SFReal32            *editSFIntensity      (void);
            const SFReal32            *getSFIntensity       (void) const;

                  SFReal32            *editSFScale          (void);
            const SFReal32            *getSFScale           (void) const;

                  SFReal32            *editSFScaleStep      (void);
            const SFReal32            *getSFScaleStep       (void) const;

                  SFReal32            *editSFScaleMax       (void);
            const SFReal32            *getSFScaleMax        (void) const;
            const SFUnrecGeometryPtr  *getSFTarget         (void) const;
                  SFUnrecGeometryPtr  *editSFTarget         (void);


                  UInt32              &editMode           (void);
                  UInt32               getMode            (void) const;

                  Real32              &editIntensity      (void);
                  Real32               getIntensity       (void) const;

                  Real32              &editScale          (void);
                  Real32               getScale           (void) const;

                  Real32              &editScaleStep      (void);
                  Real32               getScaleStep       (void) const;

                  Real32              &editScaleMax       (void);
                  Real32               getScaleMax        (void) const;

                  Geometry * getTarget         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setMode           (const UInt32 value);
            void setIntensity      (const Real32 value);
            void setScale          (const Real32 value);
            void setScaleStep      (const Real32 value);
            void setScaleMax       (const Real32 value);
            void setTarget         (Geometry * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SimpleCudaComputeAlgorithmTransitPtr  create          (void);
    static  SimpleCudaComputeAlgorithm           *createEmpty     (void);

    static  SimpleCudaComputeAlgorithmTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SimpleCudaComputeAlgorithm            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SimpleCudaComputeAlgorithmTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32          _sfMode;
    SFReal32          _sfIntensity;
    SFReal32          _sfScale;
    SFReal32          _sfScaleStep;
    SFReal32          _sfScaleMax;
    SFUnrecGeometryPtr _sfTarget;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleCudaComputeAlgorithmBase(void);
    SimpleCudaComputeAlgorithmBase(const SimpleCudaComputeAlgorithmBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SimpleCudaComputeAlgorithmBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SimpleCudaComputeAlgorithm *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleMode            (void) const;
    EditFieldHandlePtr editHandleMode           (void);
    GetFieldHandlePtr  getHandleIntensity       (void) const;
    EditFieldHandlePtr editHandleIntensity      (void);
    GetFieldHandlePtr  getHandleScale           (void) const;
    EditFieldHandlePtr editHandleScale          (void);
    GetFieldHandlePtr  getHandleScaleStep       (void) const;
    EditFieldHandlePtr editHandleScaleStep      (void);
    GetFieldHandlePtr  getHandleScaleMax        (void) const;
    EditFieldHandlePtr editHandleScaleMax       (void);
    GetFieldHandlePtr  getHandleTarget          (void) const;
    EditFieldHandlePtr editHandleTarget         (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SimpleCudaComputeAlgorithmBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SimpleCudaComputeAlgorithmBase &source);
};

typedef SimpleCudaComputeAlgorithmBase *SimpleCudaComputeAlgorithmBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSIMPLECUDACOMPUTEALGORITHMBASE_H_ */
