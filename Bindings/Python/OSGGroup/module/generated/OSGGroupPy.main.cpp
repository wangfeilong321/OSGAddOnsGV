// This file has been generated by Py++.

// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif


#include "boost/python.hpp"

#include "OSGGroup_mainheader.h"

#include "OsgPtrHelpers.h"

#include "boost/python/suite/indexing/map_indexing_suite.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "generated/Algorithm.pypp.hpp"

#include "generated/AlgorithmBase.pypp.hpp"

#include "generated/AlgorithmStage.pypp.hpp"

#include "generated/AlgorithmStageBase.pypp.hpp"

#include "generated/Billboard.pypp.hpp"

#include "generated/BillboardBase.pypp.hpp"

#include "generated/CallbackAlgorithm.pypp.hpp"

#include "generated/CallbackAlgorithmBase.pypp.hpp"

#include "generated/ComponentTransform.pypp.hpp"

#include "generated/ComponentTransformBase.pypp.hpp"

#include "generated/CubeMapGenerator.pypp.hpp"

#include "generated/CubeMapGeneratorBase.pypp.hpp"

#include "generated/CubeMapGeneratorStageData.pypp.hpp"

#include "generated/CubeMapGeneratorStageDataBase.pypp.hpp"

#include "generated/DirectionalLight.pypp.hpp"

#include "generated/DirectionalLightBase.pypp.hpp"

#include "generated/DistanceLOD.pypp.hpp"

#include "generated/DistanceLODBase.pypp.hpp"

#include "generated/DoubleTransform.pypp.hpp"

#include "generated/DoubleTransformBase.pypp.hpp"

#include "generated/DynamicStateGenerator.pypp.hpp"

#include "generated/DynamicStateGeneratorBase.pypp.hpp"

#include "generated/DynamicStateGeneratorStageData.pypp.hpp"

#include "generated/DynamicStateGeneratorStageDataBase.pypp.hpp"

#include "generated/GroupingStage.pypp.hpp"

#include "generated/GroupingStageBase.pypp.hpp"

#include "generated/Inline.pypp.hpp"

#include "generated/InlineBase.pypp.hpp"

#include "generated/InverseTransform.pypp.hpp"

#include "generated/InverseTransformBase.pypp.hpp"

#include "generated/LookAtTransformationElement.pypp.hpp"

#include "generated/LookAtTransformationElementBase.pypp.hpp"

#include "generated/MaterialChunkOverrideGroup.pypp.hpp"

#include "generated/MaterialChunkOverrideGroupBase.pypp.hpp"

#include "generated/MatrixTransformationElement.pypp.hpp"

#include "generated/MatrixTransformationElementBase.pypp.hpp"

#include "generated/MultiSwitch.pypp.hpp"

#include "generated/MultiSwitchBase.pypp.hpp"

#include "generated/PointLight.pypp.hpp"

#include "generated/PointLightBase.pypp.hpp"

#include "generated/ProxyGroup.pypp.hpp"

#include "generated/ProxyGroupBase.pypp.hpp"

#include "generated/RangeLOD.pypp.hpp"

#include "generated/RangeLODBase.pypp.hpp"

#include "generated/RenderCallbackStage.pypp.hpp"

#include "generated/RenderCallbackStageBase.pypp.hpp"

#include "generated/ReplicateTransform.pypp.hpp"

#include "generated/ReplicateTransformBase.pypp.hpp"

#include "generated/RotationTransformationElement.pypp.hpp"

#include "generated/RotationTransformationElementBase.pypp.hpp"

#include "generated/ScaleTransformationElement.pypp.hpp"

#include "generated/ScaleTransformationElementBase.pypp.hpp"

#include "generated/ScreenGroup.pypp.hpp"

#include "generated/ScreenGroupBase.pypp.hpp"

#include "generated/ScreenLOD.pypp.hpp"

#include "generated/ScreenLODBase.pypp.hpp"

#include "generated/ScreenTransform.pypp.hpp"

#include "generated/ScreenTransformBase.pypp.hpp"

#include "generated/ShaderShadowMapEngine.pypp.hpp"

#include "generated/ShaderShadowMapEngineBase.pypp.hpp"

#include "generated/ShaderShadowMapEngineData.pypp.hpp"

#include "generated/ShaderShadowMapEngineDataBase.pypp.hpp"

#include "generated/SimpleShadowMapEngineData.pypp.hpp"

#include "generated/SimpleShadowMapEngineDataBase.pypp.hpp"

#include "generated/SimpleStage.pypp.hpp"

#include "generated/SimpleStageBase.pypp.hpp"

#include "generated/SkewTransformationElement.pypp.hpp"

#include "generated/SkewTransformationElementBase.pypp.hpp"

#include "generated/SpotLight.pypp.hpp"

#include "generated/SpotLightBase.pypp.hpp"

#include "generated/StackedTransform.pypp.hpp"

#include "generated/StackedTransformBase.pypp.hpp"

#include "generated/Stage.pypp.hpp"

#include "generated/StageBase.pypp.hpp"

#include "generated/StageContainerParent.pypp.hpp"

#include "generated/StageData.pypp.hpp"

#include "generated/StageDataBase.pypp.hpp"

#include "generated/StageParent.pypp.hpp"

#include "generated/StageParentBase.pypp.hpp"

#include "generated/Switch.pypp.hpp"

#include "generated/SwitchBase.pypp.hpp"

#include "generated/Transform.pypp.hpp"

#include "generated/TransformBase.pypp.hpp"

#include "generated/TransformationElement.pypp.hpp"

#include "generated/TransformationElementBase.pypp.hpp"

#include "generated/TranslationTransformationElement.pypp.hpp"

#include "generated/TranslationTransformationElementBase.pypp.hpp"

#include "generated/VisitSubTree.pypp.hpp"

#include "generated/VisitSubTreeBase.pypp.hpp"

using namespace std;

namespace bp = boost::python;

BOOST_PYTHON_MODULE(OSGGroupPy){
    register_AlgorithmBase_class();

    register_Algorithm_class();

    register_StageContainerParent_class();

    register_StageParentBase_class();

    register_StageParent_class();

    register_StageBase_class();

    register_Stage_class();

    register_AlgorithmStageBase_class();

    register_AlgorithmStage_class();

    register_BillboardBase_class();

    register_Billboard_class();

    register_CallbackAlgorithmBase_class();

    register_CallbackAlgorithm_class();

    register_TransformBase_class();

    register_Transform_class();

    register_ComponentTransformBase_class();

    register_ComponentTransform_class();

    register_DynamicStateGeneratorBase_class();

    register_DynamicStateGenerator_class();

    register_CubeMapGeneratorBase_class();

    register_CubeMapGenerator_class();

    register_StageDataBase_class();

    register_StageData_class();

    register_DynamicStateGeneratorStageDataBase_class();

    register_DynamicStateGeneratorStageData_class();

    register_CubeMapGeneratorStageDataBase_class();

    register_CubeMapGeneratorStageData_class();

    register_DirectionalLightBase_class();

    register_DirectionalLight_class();

    register_DistanceLODBase_class();

    register_DistanceLOD_class();

    register_DoubleTransformBase_class();

    register_DoubleTransform_class();

    register_RenderCallbackStageBase_class();

    register_RenderCallbackStage_class();

    register_GroupingStageBase_class();

    register_GroupingStage_class();

    register_InlineBase_class();

    register_Inline_class();

    register_InverseTransformBase_class();

    register_InverseTransform_class();

    register_TransformationElementBase_class();

    register_TransformationElement_class();

    register_LookAtTransformationElementBase_class();

    register_LookAtTransformationElement_class();

    register_MaterialChunkOverrideGroupBase_class();

    register_MaterialChunkOverrideGroup_class();

    register_MatrixTransformationElementBase_class();

    register_MatrixTransformationElement_class();

    register_MultiSwitchBase_class();

    register_MultiSwitch_class();

    register_PointLightBase_class();

    register_PointLight_class();

    register_ProxyGroupBase_class();

    register_ProxyGroup_class();

    register_RangeLODBase_class();

    register_RangeLOD_class();

    register_ReplicateTransformBase_class();

    register_ReplicateTransform_class();

    register_RotationTransformationElementBase_class();

    register_RotationTransformationElement_class();

    register_ScaleTransformationElementBase_class();

    register_ScaleTransformationElement_class();

    register_ScreenGroupBase_class();

    register_ScreenGroup_class();

    register_ScreenLODBase_class();

    register_ScreenLOD_class();

    register_ScreenTransformBase_class();

    register_ScreenTransform_class();

    register_ShaderShadowMapEngineBase_class();

    register_ShaderShadowMapEngine_class();

    register_ShaderShadowMapEngineDataBase_class();

    register_ShaderShadowMapEngineData_class();

    register_SimpleShadowMapEngineDataBase_class();

    register_SimpleShadowMapEngineData_class();

    register_SimpleStageBase_class();

    register_SimpleStage_class();

    register_SkewTransformationElementBase_class();

    register_SkewTransformationElement_class();

    register_SpotLightBase_class();

    register_SpotLight_class();

    register_StackedTransformBase_class();

    register_StackedTransform_class();

    register_SwitchBase_class();

    register_Switch_class();

    register_TranslationTransformationElementBase_class();

    register_TranslationTransformationElement_class();

    register_VisitSubTreeBase_class();

    /** Helpers for OSG::MaterialChunkOverrideGroup */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::MaterialChunkOverrideGroup, OSG::MaterialChunkOverrideGroup::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::MaterialChunkOverrideGroup::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Transform */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Transform, OSG::Transform::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Transform::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::MultiSwitch */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::MultiSwitch, OSG::MultiSwitch::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::MultiSwitch::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Billboard */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Billboard, OSG::Billboard::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Billboard::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ComponentTransform */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ComponentTransform, OSG::ComponentTransform::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ComponentTransform::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TransformationElement */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TransformationElement, OSG::TransformationElement::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TransformationElement::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::DoubleTransform */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::DoubleTransform, OSG::DoubleTransform::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::DoubleTransform::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ScreenTransform */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ScreenTransform, OSG::ScreenTransform::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ScreenTransform::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::CubeMapGenerator */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::CubeMapGenerator, OSG::CubeMapGenerator::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::CubeMapGenerator::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::StackedTransform */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::StackedTransform, OSG::StackedTransform::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::StackedTransform::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::AlgorithmStage */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::AlgorithmStage, OSG::AlgorithmStage::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::AlgorithmStage::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::SimpleShadowMapEngineData */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::SimpleShadowMapEngineData, OSG::SimpleShadowMapEngineData::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::SimpleShadowMapEngineData::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Stage */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Stage, OSG::Stage::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Stage::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ShaderShadowMapEngine */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ShaderShadowMapEngine, OSG::ShaderShadowMapEngine::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ShaderShadowMapEngine::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::CubeMapGeneratorStageData */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::CubeMapGeneratorStageData, OSG::CubeMapGeneratorStageData::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::CubeMapGeneratorStageData::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Algorithm */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Algorithm, OSG::Algorithm::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Algorithm::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ScreenLOD */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ScreenLOD, OSG::ScreenLOD::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ScreenLOD::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::CallbackAlgorithm */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::CallbackAlgorithm, OSG::CallbackAlgorithm::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::CallbackAlgorithm::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GroupingStage */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GroupingStage, OSG::GroupingStage::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GroupingStage::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::DynamicStateGeneratorStageData */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::DynamicStateGeneratorStageData, OSG::DynamicStateGeneratorStageData::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::DynamicStateGeneratorStageData::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::LookAtTransformationElement */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::LookAtTransformationElement, OSG::LookAtTransformationElement::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::LookAtTransformationElement::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::DistanceLOD */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::DistanceLOD, OSG::DistanceLOD::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::DistanceLOD::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Switch */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Switch, OSG::Switch::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Switch::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::StageData */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::StageData, OSG::StageData::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::StageData::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::PointLight */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::PointLight, OSG::PointLight::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::PointLight::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::RotationTransformationElement */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::RotationTransformationElement, OSG::RotationTransformationElement::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::RotationTransformationElement::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::DirectionalLight */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::DirectionalLight, OSG::DirectionalLight::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::DirectionalLight::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Inline */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Inline, OSG::Inline::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Inline::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::RenderCallbackStage */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::RenderCallbackStage, OSG::RenderCallbackStage::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::RenderCallbackStage::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::DynamicStateGenerator */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::DynamicStateGenerator, OSG::DynamicStateGenerator::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::DynamicStateGenerator::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ScaleTransformationElement */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ScaleTransformationElement, OSG::ScaleTransformationElement::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ScaleTransformationElement::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::VisitSubTree */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::VisitSubTree, OSG::VisitSubTree::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::VisitSubTree::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::RangeLOD */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::RangeLOD, OSG::RangeLOD::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::RangeLOD::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ReplicateTransform */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ReplicateTransform, OSG::ReplicateTransform::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ReplicateTransform::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TranslationTransformationElement */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TranslationTransformationElement, OSG::TranslationTransformationElement::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TranslationTransformationElement::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::MatrixTransformationElement */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::MatrixTransformationElement, OSG::MatrixTransformationElement::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::MatrixTransformationElement::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ShaderShadowMapEngineData */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ShaderShadowMapEngineData, OSG::ShaderShadowMapEngineData::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ShaderShadowMapEngineData::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ScreenGroup */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ScreenGroup, OSG::ScreenGroup::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ScreenGroup::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::SimpleStage */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::SimpleStage, OSG::SimpleStage::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::SimpleStage::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::InverseTransform */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::InverseTransform, OSG::InverseTransform::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::InverseTransform::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ProxyGroup */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ProxyGroup, OSG::ProxyGroup::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ProxyGroup::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::SpotLight */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::SpotLight, OSG::SpotLight::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::SpotLight::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::SkewTransformationElement */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::SkewTransformationElement, OSG::SkewTransformationElement::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::SkewTransformationElement::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    register_VisitSubTree_class();
}

