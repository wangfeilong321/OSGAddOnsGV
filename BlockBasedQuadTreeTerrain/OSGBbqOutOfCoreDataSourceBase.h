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
 **     class BbqOutOfCoreDataSource
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBBQOUTOFCOREDATASOURCEBASE_H_
#define _OSGBBQOUTOFCOREDATASOURCEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGAddOnsConfig.h"
#include "OSGContribBbqTerrainDef.h"

//#include "OSGBaseTypes.h"

#include "OSGBbqDataSource.h" // Parent

#include "OSGBaseFields.h"              // Filename type
#include "OSGSysFields.h"               // HeightScale type

#include "OSGBbqOutOfCoreDataSourceFields.h"

OSG_BEGIN_NAMESPACE


class BbqOutOfCoreDataSource;

//! \brief BbqOutOfCoreDataSource Base Class.

class OSG_CONTRIBBBQTERRAIN_DLLMAPPING BbqOutOfCoreDataSourceBase : public BbqDataSource
{
  public:

    typedef BbqDataSource Inherited;
    typedef BbqDataSource ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(BbqOutOfCoreDataSource);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FilenameFieldId = Inherited::NextFieldId,
        HeightScaleFieldId = FilenameFieldId + 1,
        HeightOffsetFieldId = HeightScaleFieldId + 1,
        SampleSpacingFieldId = HeightOffsetFieldId + 1,
        NextFieldId = SampleSpacingFieldId + 1
    };

    static const OSG::BitVector FilenameFieldMask =
        (TypeTraits<BitVector>::One << FilenameFieldId);
    static const OSG::BitVector HeightScaleFieldMask =
        (TypeTraits<BitVector>::One << HeightScaleFieldId);
    static const OSG::BitVector HeightOffsetFieldMask =
        (TypeTraits<BitVector>::One << HeightOffsetFieldId);
    static const OSG::BitVector SampleSpacingFieldMask =
        (TypeTraits<BitVector>::One << SampleSpacingFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFString          SFFilenameType;
    typedef SFReal32          SFHeightScaleType;
    typedef SFReal32          SFHeightOffsetType;
    typedef SFReal32          SFSampleSpacingType;

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


                  SFString            *editSFFilename       (void);
            const SFString            *getSFFilename        (void) const;

                  SFReal32            *editSFHeightScale    (void);
            const SFReal32            *getSFHeightScale     (void) const;

                  SFReal32            *editSFHeightOffset   (void);
            const SFReal32            *getSFHeightOffset    (void) const;

                  SFReal32            *editSFSampleSpacing  (void);
            const SFReal32            *getSFSampleSpacing   (void) const;


                  std::string         &editFilename       (void);
            const std::string         &getFilename        (void) const;

                  Real32              &editHeightScale    (void);
                  Real32               getHeightScale     (void) const;

                  Real32              &editHeightOffset   (void);
                  Real32               getHeightOffset    (void) const;

                  Real32              &editSampleSpacing  (void);
                  Real32               getSampleSpacing   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFilename       (const std::string &value);
            void setHeightScale    (const Real32 value);
            void setHeightOffset   (const Real32 value);
            void setSampleSpacing  (const Real32 value);

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

    static  BbqOutOfCoreDataSourceTransitPtr  create          (void);
    static  BbqOutOfCoreDataSource           *createEmpty     (void);

    static  BbqOutOfCoreDataSourceTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  BbqOutOfCoreDataSource            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  BbqOutOfCoreDataSourceTransitPtr  createDependent  (BitVector bFlags);

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

    SFString          _sfFilename;
    SFReal32          _sfHeightScale;
    SFReal32          _sfHeightOffset;
    SFReal32          _sfSampleSpacing;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BbqOutOfCoreDataSourceBase(void);
    BbqOutOfCoreDataSourceBase(const BbqOutOfCoreDataSourceBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BbqOutOfCoreDataSourceBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleFilename        (void) const;
     EditFieldHandlePtr editHandleFilename       (void);
     GetFieldHandlePtr  getHandleHeightScale     (void) const;
     EditFieldHandlePtr editHandleHeightScale    (void);
     GetFieldHandlePtr  getHandleHeightOffset    (void) const;
     EditFieldHandlePtr editHandleHeightOffset   (void);
     GetFieldHandlePtr  getHandleSampleSpacing   (void) const;
     EditFieldHandlePtr editHandleSampleSpacing  (void);

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

            void execSync (      BbqOutOfCoreDataSourceBase *pFrom,
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
    void operator =(const BbqOutOfCoreDataSourceBase &source);
};

typedef BbqOutOfCoreDataSourceBase *BbqOutOfCoreDataSourceBaseP;

OSG_END_NAMESPACE

#endif /* _OSGBBQOUTOFCOREDATASOURCEBASE_H_ */
