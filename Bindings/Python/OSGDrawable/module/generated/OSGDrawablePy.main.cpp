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
#pragma GCC diagnostic warning "-Wunused-local-typedefs"
#pragma GCC diagnostic warning "-Wnon-virtual-dtor"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif


#include "boost/python.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "OSGDrawable_mainheader.h"

#include "OsgPtrHelpers.h"

#include "boost/python/suite/indexing/map_indexing_suite.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "generated/ContainerMixinHeadStageDrawableDesc.pypp.hpp"

#include "generated/FatBorderChunk.pypp.hpp"

#include "generated/FatBorderChunkBase.pypp.hpp"

#include "generated/FresnelMaterial.pypp.hpp"

#include "generated/FresnelMaterialBase.pypp.hpp"

#include "generated/GeoColor3fProperty.pypp.hpp"

#include "generated/GeoColor4fProperty.pypp.hpp"

#include "generated/GeoInstancer.pypp.hpp"

#include "generated/GeoInstancerBase.pypp.hpp"

#include "generated/GeoIntegralBufferProperty.pypp.hpp"

#include "generated/GeoIntegralBufferPropertyBase.pypp.hpp"

#include "generated/GeoIntegralBufferRefProperty.pypp.hpp"

#include "generated/GeoIntegralBufferRefPropertyBase.pypp.hpp"

#include "generated/GeoIntegralProperty.pypp.hpp"

#include "generated/GeoIntegralPropertyBase.pypp.hpp"

#include "generated/GeoMultiProperty.pypp.hpp"

#include "generated/GeoMultiPropertyBase.pypp.hpp"

#include "generated/GeoMultiPropertyData.pypp.hpp"

#include "generated/GeoMultiPropertyDataBase.pypp.hpp"

#include "generated/GeoPnt2dProperty.pypp.hpp"

#include "generated/GeoPnt2fProperty.pypp.hpp"

#include "generated/GeoPnt3dProperty.pypp.hpp"

#include "generated/GeoPnt3fProperty.pypp.hpp"

#include "generated/GeoPnt4dProperty.pypp.hpp"

#include "generated/GeoPnt4fProperty.pypp.hpp"

#include "generated/GeoUInt16Property.pypp.hpp"

#include "generated/GeoUInt32Property.pypp.hpp"

#include "generated/GeoUInt8Property.pypp.hpp"

#include "generated/GeoVec2dProperty.pypp.hpp"

#include "generated/GeoVec2fProperty.pypp.hpp"

#include "generated/GeoVec3dProperty.pypp.hpp"

#include "generated/GeoVec3fProperty.pypp.hpp"

#include "generated/GeoVec4dProperty.pypp.hpp"

#include "generated/GeoVec4fProperty.pypp.hpp"

#include "generated/GeoVectorBufferProperty.pypp.hpp"

#include "generated/GeoVectorBufferPropertyBase.pypp.hpp"

#include "generated/GeoVectorBufferRefProperty.pypp.hpp"

#include "generated/GeoVectorBufferRefPropertyBase.pypp.hpp"

#include "generated/Geometry.pypp.hpp"

#include "generated/GeometryBase.pypp.hpp"

#include "generated/KDTreeIntersectProxyAttachment.pypp.hpp"

#include "generated/KDTreeIntersectProxyAttachmentBase.pypp.hpp"

#include "generated/OSGDrawablePy_free_functions.pypp.hpp"

#include "generated/Particles.pypp.hpp"

#include "generated/ParticlesBase.pypp.hpp"

#include "generated/QuadTreeTerrain.pypp.hpp"

#include "generated/QuadTreeTerrainBase.pypp.hpp"

#include "generated/SimpleTexturedMaterial.pypp.hpp"

#include "generated/SimpleTexturedMaterialBase.pypp.hpp"

#include "generated/StageDrawable.pypp.hpp"

#include "generated/StageDrawableBase.pypp.hpp"

#include "generated/StageDrawableParent.pypp.hpp"

#include "generated/Surface.pypp.hpp"

#include "generated/SurfaceBase.pypp.hpp"

#include "generated/TiledQuadTreeTerrain.pypp.hpp"

#include "generated/TiledQuadTreeTerrainBase.pypp.hpp"

#include "generated/vector_less__OSG_scope_Point_less_float_comma__2u_greater___greater_.pypp.hpp"

#include "generated/vector_less__OSG_scope_Point_less_float_comma__3u_greater___greater_.pypp.hpp"

#include "generated/vector_less__double__greater_.pypp.hpp"

using namespace std;

namespace bp = boost::python;

BOOST_PYTHON_MODULE(OSGDrawablePy){
    register_vector_less__double__greater__class();

    register_vector_less__OSG_scope_Point_less_float_comma__3u_greater___greater__class();

    register_vector_less__OSG_scope_Point_less_float_comma__2u_greater___greater__class();

    register_ContainerMixinHeadStageDrawableDesc_class();

    register_FatBorderChunkBase_class();

    register_FatBorderChunk_class();

    register_FresnelMaterialBase_class();

    register_FresnelMaterial_class();

    register_GeoInstancerBase_class();

    register_GeoInstancer_class();

    register_GeoIntegralPropertyBase_class();

    register_GeoIntegralProperty_class();

    register_GeoIntegralBufferPropertyBase_class();

    register_GeoIntegralBufferProperty_class();

    register_GeoIntegralBufferRefPropertyBase_class();

    register_GeoIntegralBufferRefProperty_class();

    register_GeoMultiPropertyBase_class();

    register_GeoMultiProperty_class();

    register_GeoMultiPropertyDataBase_class();

    register_GeoMultiPropertyData_class();

    register_GeoVectorBufferPropertyBase_class();

    register_GeoVectorBufferProperty_class();

    register_GeoVectorBufferRefPropertyBase_class();

    register_GeoVectorBufferRefProperty_class();

    register_GeometryBase_class();

    register_Geometry_class();

    register_KDTreeIntersectProxyAttachmentBase_class();

    register_KDTreeIntersectProxyAttachment_class();

    register_ParticlesBase_class();

    register_Particles_class();

    register_QuadTreeTerrainBase_class();

    register_QuadTreeTerrain_class();

    register_SimpleTexturedMaterialBase_class();

    register_SimpleTexturedMaterial_class();

    register_StageDrawableParent_class();

    register_StageDrawableBase_class();

    register_StageDrawable_class();

    register_SurfaceBase_class();

    register_Surface_class();

    register_TiledQuadTreeTerrainBase_class();

    register_TiledQuadTreeTerrain_class();

    register_GeoUInt16Property_class();

    register_GeoUInt32Property_class();

    register_GeoUInt8Property_class();

    register_GeoColor3fProperty_class();

    register_GeoColor4fProperty_class();

    register_GeoPnt2dProperty_class();

    register_GeoPnt2fProperty_class();

    register_GeoPnt3dProperty_class();

    register_GeoPnt3fProperty_class();

    register_GeoPnt4dProperty_class();

    register_GeoPnt4fProperty_class();

    register_GeoVec2dProperty_class();

    register_GeoVec2fProperty_class();

    register_GeoVec3dProperty_class();

    register_GeoVec3fProperty_class();

    register_GeoVec4dProperty_class();

    register_GeoVec4fProperty_class();

    /** Helpers for OSG::SimpleTexturedMaterial */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::SimpleTexturedMaterial, OSG::SimpleTexturedMaterial::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::SimpleTexturedMaterial::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Particles */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Particles, OSG::Particles::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Particles::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::QuadTreeTerrain */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::QuadTreeTerrain, OSG::QuadTreeTerrain::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::QuadTreeTerrain::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoMultiProperty */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoMultiProperty, OSG::GeoMultiProperty::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoMultiProperty::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoVectorBufferRefProperty */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoVectorBufferRefProperty, OSG::GeoVectorBufferRefProperty::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoVectorBufferRefProperty::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Geometry */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Geometry, OSG::Geometry::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Geometry::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoIntegralBufferRefProperty */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoIntegralBufferRefProperty, OSG::GeoIntegralBufferRefProperty::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoIntegralBufferRefProperty::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Surface */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Surface, OSG::Surface::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Surface::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoIntegralBufferProperty */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoIntegralBufferProperty, OSG::GeoIntegralBufferProperty::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoIntegralBufferProperty::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoVectorBufferProperty */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoVectorBufferProperty, OSG::GeoVectorBufferProperty::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoVectorBufferProperty::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TiledQuadTreeTerrain */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TiledQuadTreeTerrain, OSG::TiledQuadTreeTerrain::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TiledQuadTreeTerrain::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoInstancer */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoInstancer, OSG::GeoInstancer::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoInstancer::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::FresnelMaterial */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::FresnelMaterial, OSG::FresnelMaterial::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::FresnelMaterial::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::KDTreeIntersectProxyAttachment */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::KDTreeIntersectProxyAttachment, OSG::KDTreeIntersectProxyAttachment::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::KDTreeIntersectProxyAttachment::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoMultiPropertyData */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoMultiPropertyData, OSG::GeoMultiPropertyData::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoMultiPropertyData::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GeoIntegralProperty */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GeoIntegralProperty, OSG::GeoIntegralProperty::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GeoIntegralProperty::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::FatBorderChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::FatBorderChunk, OSG::FatBorderChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::FatBorderChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::StageDrawable */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::StageDrawable, OSG::StageDrawable::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::StageDrawable::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoVec2fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec2fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoVec2fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec2fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoPnt2fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt2fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoPnt2fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt2fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoVec3fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec3fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoVec3fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec3fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoPnt4fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt4fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoPnt4fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt4fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoVec2dPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec2dPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoVec2dPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec2dPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoPnt2dPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt2dPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoPnt2dPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt2dPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoVec3dPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec3dPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoVec3dPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec3dPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoPnt3dPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt3dPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoPnt3dPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt3dPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoVec4dPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec4dPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoVec4dPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoVec4dPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoPnt4dPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoColor3fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoColor3fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoColor3fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoColor3fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoVectorProperty<OSG::GeoColor4fPropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoVectorProperty<OSG::GeoColor4fPropertyDesc>, OSG::TypedGeoVectorProperty<OSG::GeoColor4fPropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoVectorProperty<OSG::GeoColor4fPropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>, OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoIntegralProperty<OSG::GeoUInt16PropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoIntegralProperty<OSG::GeoUInt16PropertyDesc>, OSG::TypedGeoIntegralProperty<OSG::GeoUInt16PropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoIntegralProperty<OSG::GeoUInt16PropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TypedGeoIntegralProperty<OSG::GeoUInt32PropertyDesc> */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TypedGeoIntegralProperty<OSG::GeoUInt32PropertyDesc>, OSG::TypedGeoIntegralProperty<OSG::GeoUInt32PropertyDesc>::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TypedGeoIntegralProperty<OSG::GeoUInt32PropertyDesc>::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    register_free_functions();
}

