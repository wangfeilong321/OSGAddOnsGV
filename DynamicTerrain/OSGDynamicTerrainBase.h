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
 **     Do not change this file, changes should be done in the derived      **
 **     class DynamicTerrain
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDYNAMICTERRAINBASE_H_
#define _OSGDYNAMICTERRAINBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGBaseTypes.h"

#include "OSGMaterialDrawable.h" // Parent

#include "OSGInt32Fields.h" // LevelSize type
#include "OSGImageFields.h" // HeightData type
#include "OSGReal32Fields.h" // HeightDataScale type
#include "OSGReal32Fields.h" // HeightDataOffset type
#include "OSGReal32Fields.h" // SampleDistance type
#include "OSGImageFields.h" // TextureData type
#include "OSGTextureObjChunkFields.h" // HeightColorTexture type
#include "OSGInt32Fields.h" // SampleUpdateBudget type
#include "OSGBoolFields.h" // EnableFrustumCulling type
#include "OSGBoolFields.h" // UseGpuRenderer type
#include "OSGBoolFields.h" // UseVboExtension type
#include "OSGBoolFields.h" // EnableSmoothTransition type
#include "OSGBoolFields.h" // ShowBoundingBoxes type
#include "OSGBoolFields.h" // ShowTransitionRegions type
#include "OSGBoolFields.h" // DisableUpdate type
#include "OSGStringFields.h" // CpuVertexProgram type
#include "OSGStringFields.h" // CpuFragmentProgram type

#include "OSGDynamicTerrainFields.h"

OSG_BEGIN_NAMESPACE

class DynamicTerrain;

//! \brief DynamicTerrain Base Class.

class OSG_DRAWABLE_DLLMAPPING DynamicTerrainBase : public MaterialDrawable
{
  public:

    typedef MaterialDrawable Inherited;
    typedef MaterialDrawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DynamicTerrain);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        LevelSizeFieldId = Inherited::NextFieldId,
        HeightDataFieldId = LevelSizeFieldId + 1,
        HeightDataScaleFieldId = HeightDataFieldId + 1,
        HeightDataOffsetFieldId = HeightDataScaleFieldId + 1,
        SampleDistanceFieldId = HeightDataOffsetFieldId + 1,
        TextureDataFieldId = SampleDistanceFieldId + 1,
        HeightColorTextureFieldId = TextureDataFieldId + 1,
        SampleUpdateBudgetFieldId = HeightColorTextureFieldId + 1,
        EnableFrustumCullingFieldId = SampleUpdateBudgetFieldId + 1,
        UseGpuRendererFieldId = EnableFrustumCullingFieldId + 1,
        UseVboExtensionFieldId = UseGpuRendererFieldId + 1,
        EnableSmoothTransitionFieldId = UseVboExtensionFieldId + 1,
        ShowBoundingBoxesFieldId = EnableSmoothTransitionFieldId + 1,
        ShowTransitionRegionsFieldId = ShowBoundingBoxesFieldId + 1,
        DisableUpdateFieldId = ShowTransitionRegionsFieldId + 1,
        CpuVertexProgramFieldId = DisableUpdateFieldId + 1,
        CpuFragmentProgramFieldId = CpuVertexProgramFieldId + 1,
        NextFieldId = CpuFragmentProgramFieldId + 1
    };

    static const OSG::BitVector LevelSizeFieldMask =
        (TypeTraits<BitVector>::One << LevelSizeFieldId);
    static const OSG::BitVector HeightDataFieldMask =
        (TypeTraits<BitVector>::One << HeightDataFieldId);
    static const OSG::BitVector HeightDataScaleFieldMask =
        (TypeTraits<BitVector>::One << HeightDataScaleFieldId);
    static const OSG::BitVector HeightDataOffsetFieldMask =
        (TypeTraits<BitVector>::One << HeightDataOffsetFieldId);
    static const OSG::BitVector SampleDistanceFieldMask =
        (TypeTraits<BitVector>::One << SampleDistanceFieldId);
    static const OSG::BitVector TextureDataFieldMask =
        (TypeTraits<BitVector>::One << TextureDataFieldId);
    static const OSG::BitVector HeightColorTextureFieldMask =
        (TypeTraits<BitVector>::One << HeightColorTextureFieldId);
    static const OSG::BitVector SampleUpdateBudgetFieldMask =
        (TypeTraits<BitVector>::One << SampleUpdateBudgetFieldId);
    static const OSG::BitVector EnableFrustumCullingFieldMask =
        (TypeTraits<BitVector>::One << EnableFrustumCullingFieldId);
    static const OSG::BitVector UseGpuRendererFieldMask =
        (TypeTraits<BitVector>::One << UseGpuRendererFieldId);
    static const OSG::BitVector UseVboExtensionFieldMask =
        (TypeTraits<BitVector>::One << UseVboExtensionFieldId);
    static const OSG::BitVector EnableSmoothTransitionFieldMask =
        (TypeTraits<BitVector>::One << EnableSmoothTransitionFieldId);
    static const OSG::BitVector ShowBoundingBoxesFieldMask =
        (TypeTraits<BitVector>::One << ShowBoundingBoxesFieldId);
    static const OSG::BitVector ShowTransitionRegionsFieldMask =
        (TypeTraits<BitVector>::One << ShowTransitionRegionsFieldId);
    static const OSG::BitVector DisableUpdateFieldMask =
        (TypeTraits<BitVector>::One << DisableUpdateFieldId);
    static const OSG::BitVector CpuVertexProgramFieldMask =
        (TypeTraits<BitVector>::One << CpuVertexProgramFieldId);
    static const OSG::BitVector CpuFragmentProgramFieldMask =
        (TypeTraits<BitVector>::One << CpuFragmentProgramFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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


#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFLevelSize       (void);
#endif
                  SFInt32             *editSFLevelSize      (void);
            const SFInt32             *getSFLevelSize       (void) const;
            const SFUnrecImagePtr     *getSFHeightData      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFHeightDataScale (void);
#endif
                  SFReal32            *editSFHeightDataScale(void);
            const SFReal32            *getSFHeightDataScale (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFHeightDataOffset (void);
#endif
                  SFReal32            *editSFHeightDataOffset(void);
            const SFReal32            *getSFHeightDataOffset (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFSampleDistance  (void);
#endif
                  SFReal32            *editSFSampleDistance (void);
            const SFReal32            *getSFSampleDistance  (void) const;
            const SFUnrecImagePtr     *getSFTextureData     (void) const;
            const SFUnrecTextureObjChunkPtr *getSFHeightColorTexture (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFSampleUpdateBudget (void);
#endif
                  SFInt32             *editSFSampleUpdateBudget(void);
            const SFInt32             *getSFSampleUpdateBudget (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFEnableFrustumCulling (void);
#endif
                  SFBool              *editSFEnableFrustumCulling(void);
            const SFBool              *getSFEnableFrustumCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFUseGpuRenderer  (void);
#endif
                  SFBool              *editSFUseGpuRenderer (void);
            const SFBool              *getSFUseGpuRenderer  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFUseVboExtension (void);
#endif
                  SFBool              *editSFUseVboExtension(void);
            const SFBool              *getSFUseVboExtension (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFEnableSmoothTransition (void);
#endif
                  SFBool              *editSFEnableSmoothTransition(void);
            const SFBool              *getSFEnableSmoothTransition (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFShowBoundingBoxes (void);
#endif
                  SFBool              *editSFShowBoundingBoxes(void);
            const SFBool              *getSFShowBoundingBoxes (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFShowTransitionRegions (void);
#endif
                  SFBool              *editSFShowTransitionRegions(void);
            const SFBool              *getSFShowTransitionRegions (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFDisableUpdate   (void);
#endif
                  SFBool              *editSFDisableUpdate  (void);
            const SFBool              *getSFDisableUpdate   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFCpuVertexProgram (void);
#endif
                  SFString            *editSFCpuVertexProgram(void);
            const SFString            *getSFCpuVertexProgram (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFCpuFragmentProgram (void);
#endif
                  SFString            *editSFCpuFragmentProgram(void);
            const SFString            *getSFCpuFragmentProgram (void) const;


#ifdef OSG_1_GET_COMPAT
                  Int32               &getLevelSize       (void);
#endif
                  Int32               &editLevelSize      (void);
            const Int32               &getLevelSize       (void) const;

                  ImagePtr getHeightData     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getHeightDataScale (void);
#endif
                  Real32              &editHeightDataScale(void);
            const Real32              &getHeightDataScale (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getHeightDataOffset (void);
#endif
                  Real32              &editHeightDataOffset(void);
            const Real32              &getHeightDataOffset (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getSampleDistance  (void);
#endif
                  Real32              &editSampleDistance (void);
            const Real32              &getSampleDistance  (void) const;

                  ImagePtr getTextureData    (void) const;

                  TextureObjChunkPtr getHeightColorTexture(void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getSampleUpdateBudget (void);
#endif
                  Int32               &editSampleUpdateBudget(void);
            const Int32               &getSampleUpdateBudget (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getEnableFrustumCulling (void);
#endif
                  bool                &editEnableFrustumCulling(void);
            const bool                &getEnableFrustumCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getUseGpuRenderer  (void);
#endif
                  bool                &editUseGpuRenderer (void);
            const bool                &getUseGpuRenderer  (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getUseVboExtension (void);
#endif
                  bool                &editUseVboExtension(void);
            const bool                &getUseVboExtension (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getEnableSmoothTransition (void);
#endif
                  bool                &editEnableSmoothTransition(void);
            const bool                &getEnableSmoothTransition (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getShowBoundingBoxes (void);
#endif
                  bool                &editShowBoundingBoxes(void);
            const bool                &getShowBoundingBoxes (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getShowTransitionRegions (void);
#endif
                  bool                &editShowTransitionRegions(void);
            const bool                &getShowTransitionRegions (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getDisableUpdate   (void);
#endif
                  bool                &editDisableUpdate  (void);
            const bool                &getDisableUpdate   (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getCpuVertexProgram (void);
#endif
                  std::string         &editCpuVertexProgram(void);
            const std::string         &getCpuVertexProgram (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getCpuFragmentProgram (void);
#endif
                  std::string         &editCpuFragmentProgram(void);
            const std::string         &getCpuFragmentProgram (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLevelSize      (const Int32 &value);
            void setHeightData     (const ImagePtr value);
            void setHeightDataScale(const Real32 &value);
            void setHeightDataOffset(const Real32 &value);
            void setSampleDistance (const Real32 &value);
            void setTextureData    (const ImagePtr value);
            void setHeightColorTexture(const TextureObjChunkPtr value);
            void setSampleUpdateBudget(const Int32 &value);
            void setEnableFrustumCulling(const bool &value);
            void setUseGpuRenderer (const bool &value);
            void setUseVboExtension(const bool &value);
            void setEnableSmoothTransition(const bool &value);
            void setShowBoundingBoxes(const bool &value);
            void setShowTransitionRegions(const bool &value);
            void setDisableUpdate  (const bool &value);
            void setCpuVertexProgram(const std::string &value);
            void setCpuFragmentProgram(const std::string &value);

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

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  DynamicTerrainTransitPtr create          (void);
    static  DynamicTerrainPtr        createEmpty     (void);

    static  DynamicTerrainTransitPtr createLocal     (
                                              BitVector bFlags = FCLocal::All);

    static  DynamicTerrainPtr        createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFInt32           _sfLevelSize;
    SFUnrecImagePtr   _sfHeightData;
    SFReal32          _sfHeightDataScale;
    SFReal32          _sfHeightDataOffset;
    SFReal32          _sfSampleDistance;
    SFUnrecImagePtr   _sfTextureData;
    SFUnrecTextureObjChunkPtr _sfHeightColorTexture;
    SFInt32           _sfSampleUpdateBudget;
    SFBool            _sfEnableFrustumCulling;
    SFBool            _sfUseGpuRenderer;
    SFBool            _sfUseVboExtension;
    SFBool            _sfEnableSmoothTransition;
    SFBool            _sfShowBoundingBoxes;
    SFBool            _sfShowTransitionRegions;
    SFBool            _sfDisableUpdate;
    SFString          _sfCpuVertexProgram;
    SFString          _sfCpuFragmentProgram;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DynamicTerrainBase(void);
    DynamicTerrainBase(const DynamicTerrainBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DynamicTerrainBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const DynamicTerrain *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleLevelSize       (void) const;
    EditFieldHandlePtr editHandleLevelSize      (void);
    GetFieldHandlePtr  getHandleHeightData      (void) const;
    EditFieldHandlePtr editHandleHeightData     (void);
    GetFieldHandlePtr  getHandleHeightDataScale (void) const;
    EditFieldHandlePtr editHandleHeightDataScale(void);
    GetFieldHandlePtr  getHandleHeightDataOffset (void) const;
    EditFieldHandlePtr editHandleHeightDataOffset(void);
    GetFieldHandlePtr  getHandleSampleDistance  (void) const;
    EditFieldHandlePtr editHandleSampleDistance (void);
    GetFieldHandlePtr  getHandleTextureData     (void) const;
    EditFieldHandlePtr editHandleTextureData    (void);
    GetFieldHandlePtr  getHandleHeightColorTexture (void) const;
    EditFieldHandlePtr editHandleHeightColorTexture(void);
    GetFieldHandlePtr  getHandleSampleUpdateBudget (void) const;
    EditFieldHandlePtr editHandleSampleUpdateBudget(void);
    GetFieldHandlePtr  getHandleEnableFrustumCulling (void) const;
    EditFieldHandlePtr editHandleEnableFrustumCulling(void);
    GetFieldHandlePtr  getHandleUseGpuRenderer  (void) const;
    EditFieldHandlePtr editHandleUseGpuRenderer (void);
    GetFieldHandlePtr  getHandleUseVboExtension (void) const;
    EditFieldHandlePtr editHandleUseVboExtension(void);
    GetFieldHandlePtr  getHandleEnableSmoothTransition (void) const;
    EditFieldHandlePtr editHandleEnableSmoothTransition(void);
    GetFieldHandlePtr  getHandleShowBoundingBoxes (void) const;
    EditFieldHandlePtr editHandleShowBoundingBoxes(void);
    GetFieldHandlePtr  getHandleShowTransitionRegions (void) const;
    EditFieldHandlePtr editHandleShowTransitionRegions(void);
    GetFieldHandlePtr  getHandleDisableUpdate   (void) const;
    EditFieldHandlePtr editHandleDisableUpdate  (void);
    GetFieldHandlePtr  getHandleCpuVertexProgram (void) const;
    EditFieldHandlePtr editHandleCpuVertexProgram(void);
    GetFieldHandlePtr  getHandleCpuFragmentProgram (void) const;
    EditFieldHandlePtr editHandleCpuFragmentProgram(void);

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

            void execSync (      DynamicTerrainBase *pFrom,
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
    virtual FieldContainerPtr createAspectCopy(void) const;
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
    void operator =(const DynamicTerrainBase &source);
};

typedef DynamicTerrainBase *DynamicTerrainBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDYNAMICTERRAINBASE_H_ */
