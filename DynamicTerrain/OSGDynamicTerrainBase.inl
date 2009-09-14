/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class DynamicTerrain!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DynamicTerrainBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DynamicTerrainBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DynamicTerrainBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DynamicTerrain::_sfLevelSize field.

inline
Int32 &DynamicTerrainBase::editLevelSize(void)
{
    editSField(LevelSizeFieldMask);

    return _sfLevelSize.getValue();
}

//! Get the value of the DynamicTerrain::_sfLevelSize field.
inline
const Int32 DynamicTerrainBase::getLevelSize(void) const
{
    return _sfLevelSize.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Int32               &DynamicTerrainBase::getLevelSize      (void)
{
    return this->editLevelSize      ();
}
#endif

//! Set the value of the DynamicTerrain::_sfLevelSize field.
inline
void DynamicTerrainBase::setLevelSize(const Int32 &value)
{
    editSField(LevelSizeFieldMask);

    _sfLevelSize.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfHeightData field.
inline
Image * DynamicTerrainBase::getHeightData(void) const
{
    return _sfHeightData.getValue();
}

//! Set the value of the DynamicTerrain::_sfHeightData field.
inline
void DynamicTerrainBase::setHeightData(Image * const value)
{
    editSField(HeightDataFieldMask);

    _sfHeightData.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfHeightDataScale field.

inline
Real32 &DynamicTerrainBase::editHeightDataScale(void)
{
    editSField(HeightDataScaleFieldMask);

    return _sfHeightDataScale.getValue();
}

//! Get the value of the DynamicTerrain::_sfHeightDataScale field.
inline
const Real32 DynamicTerrainBase::getHeightDataScale(void) const
{
    return _sfHeightDataScale.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &DynamicTerrainBase::getHeightDataScale(void)
{
    return this->editHeightDataScale();
}
#endif

//! Set the value of the DynamicTerrain::_sfHeightDataScale field.
inline
void DynamicTerrainBase::setHeightDataScale(const Real32 &value)
{
    editSField(HeightDataScaleFieldMask);

    _sfHeightDataScale.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfHeightDataOffset field.

inline
Real32 &DynamicTerrainBase::editHeightDataOffset(void)
{
    editSField(HeightDataOffsetFieldMask);

    return _sfHeightDataOffset.getValue();
}

//! Get the value of the DynamicTerrain::_sfHeightDataOffset field.
inline
const Real32 DynamicTerrainBase::getHeightDataOffset(void) const
{
    return _sfHeightDataOffset.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &DynamicTerrainBase::getHeightDataOffset(void)
{
    return this->editHeightDataOffset();
}
#endif

//! Set the value of the DynamicTerrain::_sfHeightDataOffset field.
inline
void DynamicTerrainBase::setHeightDataOffset(const Real32 &value)
{
    editSField(HeightDataOffsetFieldMask);

    _sfHeightDataOffset.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfSampleDistance field.

inline
Real32 &DynamicTerrainBase::editSampleDistance(void)
{
    editSField(SampleDistanceFieldMask);

    return _sfSampleDistance.getValue();
}

//! Get the value of the DynamicTerrain::_sfSampleDistance field.
inline
const Real32 DynamicTerrainBase::getSampleDistance(void) const
{
    return _sfSampleDistance.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &DynamicTerrainBase::getSampleDistance (void)
{
    return this->editSampleDistance ();
}
#endif

//! Set the value of the DynamicTerrain::_sfSampleDistance field.
inline
void DynamicTerrainBase::setSampleDistance(const Real32 &value)
{
    editSField(SampleDistanceFieldMask);

    _sfSampleDistance.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfTextureData field.
inline
Image * DynamicTerrainBase::getTextureData(void) const
{
    return _sfTextureData.getValue();
}

//! Set the value of the DynamicTerrain::_sfTextureData field.
inline
void DynamicTerrainBase::setTextureData(Image * const value)
{
    editSField(TextureDataFieldMask);

    _sfTextureData.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfHeightColorTexture field.
inline
TextureObjChunk * DynamicTerrainBase::getHeightColorTexture(void) const
{
    return _sfHeightColorTexture.getValue();
}

//! Set the value of the DynamicTerrain::_sfHeightColorTexture field.
inline
void DynamicTerrainBase::setHeightColorTexture(TextureObjChunk * const value)
{
    editSField(HeightColorTextureFieldMask);

    _sfHeightColorTexture.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfSampleUpdateBudget field.

inline
Int32 &DynamicTerrainBase::editSampleUpdateBudget(void)
{
    editSField(SampleUpdateBudgetFieldMask);

    return _sfSampleUpdateBudget.getValue();
}

//! Get the value of the DynamicTerrain::_sfSampleUpdateBudget field.
inline
const Int32 DynamicTerrainBase::getSampleUpdateBudget(void) const
{
    return _sfSampleUpdateBudget.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Int32               &DynamicTerrainBase::getSampleUpdateBudget(void)
{
    return this->editSampleUpdateBudget();
}
#endif

//! Set the value of the DynamicTerrain::_sfSampleUpdateBudget field.
inline
void DynamicTerrainBase::setSampleUpdateBudget(const Int32 &value)
{
    editSField(SampleUpdateBudgetFieldMask);

    _sfSampleUpdateBudget.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfEnableFrustumCulling field.

inline
bool &DynamicTerrainBase::editEnableFrustumCulling(void)
{
    editSField(EnableFrustumCullingFieldMask);

    return _sfEnableFrustumCulling.getValue();
}

//! Get the value of the DynamicTerrain::_sfEnableFrustumCulling field.
inline
const bool DynamicTerrainBase::getEnableFrustumCulling(void) const
{
    return _sfEnableFrustumCulling.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DynamicTerrainBase::getEnableFrustumCulling(void)
{
    return this->editEnableFrustumCulling();
}
#endif

//! Set the value of the DynamicTerrain::_sfEnableFrustumCulling field.
inline
void DynamicTerrainBase::setEnableFrustumCulling(const bool &value)
{
    editSField(EnableFrustumCullingFieldMask);

    _sfEnableFrustumCulling.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfUseGpuRenderer field.

inline
bool &DynamicTerrainBase::editUseGpuRenderer(void)
{
    editSField(UseGpuRendererFieldMask);

    return _sfUseGpuRenderer.getValue();
}

//! Get the value of the DynamicTerrain::_sfUseGpuRenderer field.
inline
const bool DynamicTerrainBase::getUseGpuRenderer(void) const
{
    return _sfUseGpuRenderer.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DynamicTerrainBase::getUseGpuRenderer (void)
{
    return this->editUseGpuRenderer ();
}
#endif

//! Set the value of the DynamicTerrain::_sfUseGpuRenderer field.
inline
void DynamicTerrainBase::setUseGpuRenderer(const bool &value)
{
    editSField(UseGpuRendererFieldMask);

    _sfUseGpuRenderer.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfUseVboExtension field.

inline
bool &DynamicTerrainBase::editUseVboExtension(void)
{
    editSField(UseVboExtensionFieldMask);

    return _sfUseVboExtension.getValue();
}

//! Get the value of the DynamicTerrain::_sfUseVboExtension field.
inline
const bool DynamicTerrainBase::getUseVboExtension(void) const
{
    return _sfUseVboExtension.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DynamicTerrainBase::getUseVboExtension(void)
{
    return this->editUseVboExtension();
}
#endif

//! Set the value of the DynamicTerrain::_sfUseVboExtension field.
inline
void DynamicTerrainBase::setUseVboExtension(const bool &value)
{
    editSField(UseVboExtensionFieldMask);

    _sfUseVboExtension.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfEnableSmoothTransition field.

inline
bool &DynamicTerrainBase::editEnableSmoothTransition(void)
{
    editSField(EnableSmoothTransitionFieldMask);

    return _sfEnableSmoothTransition.getValue();
}

//! Get the value of the DynamicTerrain::_sfEnableSmoothTransition field.
inline
const bool DynamicTerrainBase::getEnableSmoothTransition(void) const
{
    return _sfEnableSmoothTransition.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DynamicTerrainBase::getEnableSmoothTransition(void)
{
    return this->editEnableSmoothTransition();
}
#endif

//! Set the value of the DynamicTerrain::_sfEnableSmoothTransition field.
inline
void DynamicTerrainBase::setEnableSmoothTransition(const bool &value)
{
    editSField(EnableSmoothTransitionFieldMask);

    _sfEnableSmoothTransition.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfShowBoundingBoxes field.

inline
bool &DynamicTerrainBase::editShowBoundingBoxes(void)
{
    editSField(ShowBoundingBoxesFieldMask);

    return _sfShowBoundingBoxes.getValue();
}

//! Get the value of the DynamicTerrain::_sfShowBoundingBoxes field.
inline
const bool DynamicTerrainBase::getShowBoundingBoxes(void) const
{
    return _sfShowBoundingBoxes.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DynamicTerrainBase::getShowBoundingBoxes(void)
{
    return this->editShowBoundingBoxes();
}
#endif

//! Set the value of the DynamicTerrain::_sfShowBoundingBoxes field.
inline
void DynamicTerrainBase::setShowBoundingBoxes(const bool &value)
{
    editSField(ShowBoundingBoxesFieldMask);

    _sfShowBoundingBoxes.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfShowTransitionRegions field.

inline
bool &DynamicTerrainBase::editShowTransitionRegions(void)
{
    editSField(ShowTransitionRegionsFieldMask);

    return _sfShowTransitionRegions.getValue();
}

//! Get the value of the DynamicTerrain::_sfShowTransitionRegions field.
inline
const bool DynamicTerrainBase::getShowTransitionRegions(void) const
{
    return _sfShowTransitionRegions.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DynamicTerrainBase::getShowTransitionRegions(void)
{
    return this->editShowTransitionRegions();
}
#endif

//! Set the value of the DynamicTerrain::_sfShowTransitionRegions field.
inline
void DynamicTerrainBase::setShowTransitionRegions(const bool &value)
{
    editSField(ShowTransitionRegionsFieldMask);

    _sfShowTransitionRegions.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfDisableUpdate field.

inline
bool &DynamicTerrainBase::editDisableUpdate(void)
{
    editSField(DisableUpdateFieldMask);

    return _sfDisableUpdate.getValue();
}

//! Get the value of the DynamicTerrain::_sfDisableUpdate field.
inline
const bool DynamicTerrainBase::getDisableUpdate(void) const
{
    return _sfDisableUpdate.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DynamicTerrainBase::getDisableUpdate  (void)
{
    return this->editDisableUpdate  ();
}
#endif

//! Set the value of the DynamicTerrain::_sfDisableUpdate field.
inline
void DynamicTerrainBase::setDisableUpdate(const bool &value)
{
    editSField(DisableUpdateFieldMask);

    _sfDisableUpdate.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfCpuVertexProgram field.

inline
std::string &DynamicTerrainBase::editCpuVertexProgram(void)
{
    editSField(CpuVertexProgramFieldMask);

    return _sfCpuVertexProgram.getValue();
}

//! Get the value of the DynamicTerrain::_sfCpuVertexProgram field.
inline
const std::string DynamicTerrainBase::getCpuVertexProgram(void) const
{
    return _sfCpuVertexProgram.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
std::string         &DynamicTerrainBase::getCpuVertexProgram(void)
{
    return this->editCpuVertexProgram();
}
#endif

//! Set the value of the DynamicTerrain::_sfCpuVertexProgram field.
inline
void DynamicTerrainBase::setCpuVertexProgram(const std::string &value)
{
    editSField(CpuVertexProgramFieldMask);

    _sfCpuVertexProgram.setValue(value);
}
//! Get the value of the DynamicTerrain::_sfCpuFragmentProgram field.

inline
std::string &DynamicTerrainBase::editCpuFragmentProgram(void)
{
    editSField(CpuFragmentProgramFieldMask);

    return _sfCpuFragmentProgram.getValue();
}

//! Get the value of the DynamicTerrain::_sfCpuFragmentProgram field.
inline
const std::string DynamicTerrainBase::getCpuFragmentProgram(void) const
{
    return _sfCpuFragmentProgram.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
std::string         &DynamicTerrainBase::getCpuFragmentProgram(void)
{
    return this->editCpuFragmentProgram();
}
#endif

//! Set the value of the DynamicTerrain::_sfCpuFragmentProgram field.
inline
void DynamicTerrainBase::setCpuFragmentProgram(const std::string &value)
{
    editSField(CpuFragmentProgramFieldMask);

    _sfCpuFragmentProgram.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DynamicTerrainBase::execSync (      DynamicTerrainBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (LevelSizeFieldMask & whichField))
        _sfLevelSize.syncWith(pFrom->_sfLevelSize);

    if(FieldBits::NoField != (HeightDataFieldMask & whichField))
        _sfHeightData.syncWith(pFrom->_sfHeightData);

    if(FieldBits::NoField != (HeightDataScaleFieldMask & whichField))
        _sfHeightDataScale.syncWith(pFrom->_sfHeightDataScale);

    if(FieldBits::NoField != (HeightDataOffsetFieldMask & whichField))
        _sfHeightDataOffset.syncWith(pFrom->_sfHeightDataOffset);

    if(FieldBits::NoField != (SampleDistanceFieldMask & whichField))
        _sfSampleDistance.syncWith(pFrom->_sfSampleDistance);

    if(FieldBits::NoField != (TextureDataFieldMask & whichField))
        _sfTextureData.syncWith(pFrom->_sfTextureData);

    if(FieldBits::NoField != (HeightColorTextureFieldMask & whichField))
        _sfHeightColorTexture.syncWith(pFrom->_sfHeightColorTexture);

    if(FieldBits::NoField != (SampleUpdateBudgetFieldMask & whichField))
        _sfSampleUpdateBudget.syncWith(pFrom->_sfSampleUpdateBudget);

    if(FieldBits::NoField != (EnableFrustumCullingFieldMask & whichField))
        _sfEnableFrustumCulling.syncWith(pFrom->_sfEnableFrustumCulling);

    if(FieldBits::NoField != (UseGpuRendererFieldMask & whichField))
        _sfUseGpuRenderer.syncWith(pFrom->_sfUseGpuRenderer);

    if(FieldBits::NoField != (UseVboExtensionFieldMask & whichField))
        _sfUseVboExtension.syncWith(pFrom->_sfUseVboExtension);

    if(FieldBits::NoField != (EnableSmoothTransitionFieldMask & whichField))
        _sfEnableSmoothTransition.syncWith(pFrom->_sfEnableSmoothTransition);

    if(FieldBits::NoField != (ShowBoundingBoxesFieldMask & whichField))
        _sfShowBoundingBoxes.syncWith(pFrom->_sfShowBoundingBoxes);

    if(FieldBits::NoField != (ShowTransitionRegionsFieldMask & whichField))
        _sfShowTransitionRegions.syncWith(pFrom->_sfShowTransitionRegions);

    if(FieldBits::NoField != (DisableUpdateFieldMask & whichField))
        _sfDisableUpdate.syncWith(pFrom->_sfDisableUpdate);

    if(FieldBits::NoField != (CpuVertexProgramFieldMask & whichField))
        _sfCpuVertexProgram.syncWith(pFrom->_sfCpuVertexProgram);

    if(FieldBits::NoField != (CpuFragmentProgramFieldMask & whichField))
        _sfCpuFragmentProgram.syncWith(pFrom->_sfCpuFragmentProgram);
}
#endif


inline
Char8 *DynamicTerrainBase::getClassname(void)
{
    return "DynamicTerrain";
}
OSG_GEN_CONTAINERPTR(DynamicTerrain);

OSG_END_NAMESPACE

