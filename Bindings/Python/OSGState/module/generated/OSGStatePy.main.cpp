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
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif


#include "boost/python.hpp"

#include "OSGState_mainheader.h"

#include "OsgPtrHelpers.h"

#include "boost/python/suite/indexing/map_indexing_suite.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "generated/ClipPlaneChunk.pypp.hpp"

#include "generated/ClipPlaneChunkBase.pypp.hpp"

#include "generated/CubeTextureObjChunk.pypp.hpp"

#include "generated/CubeTextureObjChunkBase.pypp.hpp"

#include "generated/FogChunk.pypp.hpp"

#include "generated/FogChunkBase.pypp.hpp"

#include "generated/FragmentProgramChunk.pypp.hpp"

#include "generated/FragmentProgramChunkBase.pypp.hpp"

#include "generated/LightModelChunk.pypp.hpp"

#include "generated/LightModelChunkBase.pypp.hpp"

#include "generated/LineChunk.pypp.hpp"

#include "generated/LineChunkBase.pypp.hpp"

#include "generated/LogicOpChunk.pypp.hpp"

#include "generated/LogicOpChunkBase.pypp.hpp"

#include "generated/PointChunk.pypp.hpp"

#include "generated/PointChunkBase.pypp.hpp"

#include "generated/ProgramChunk.pypp.hpp"

#include "generated/ProgramChunkBase.pypp.hpp"

#include "generated/RegisterCombinersChunk.pypp.hpp"

#include "generated/RegisterCombinersChunkBase.pypp.hpp"

#include "generated/ShadeModelChunk.pypp.hpp"

#include "generated/ShadeModelChunkBase.pypp.hpp"

#include "generated/StencilChunk.pypp.hpp"

#include "generated/StencilChunkBase.pypp.hpp"

#include "generated/TexGenChunk.pypp.hpp"

#include "generated/TexGenChunkBase.pypp.hpp"

#include "generated/TextureEnvChunk.pypp.hpp"

#include "generated/TextureEnvChunkBase.pypp.hpp"

#include "generated/TextureImageChunk.pypp.hpp"

#include "generated/TextureImageChunkBase.pypp.hpp"

#include "generated/TextureObjRefChunk.pypp.hpp"

#include "generated/TextureObjRefChunkBase.pypp.hpp"

#include "generated/TextureSelectChunk.pypp.hpp"

#include "generated/TextureSelectChunkBase.pypp.hpp"

#include "generated/TextureTransformChunk.pypp.hpp"

#include "generated/TextureTransformChunkBase.pypp.hpp"

#include "generated/TransformChunk.pypp.hpp"

#include "generated/TransformChunkBase.pypp.hpp"

#include "generated/TwoSidedLightingChunk.pypp.hpp"

#include "generated/TwoSidedLightingChunkBase.pypp.hpp"

#include "generated/VertexProgramChunk.pypp.hpp"

#include "generated/VertexProgramChunkBase.pypp.hpp"

using namespace std;

namespace bp = boost::python;

BOOST_PYTHON_MODULE(OSGStatePy){
    register_ClipPlaneChunkBase_class();

    register_ClipPlaneChunk_class();

    register_CubeTextureObjChunkBase_class();

    register_CubeTextureObjChunk_class();

    register_FogChunkBase_class();

    register_FogChunk_class();

    register_ProgramChunkBase_class();

    register_ProgramChunk_class();

    register_FragmentProgramChunkBase_class();

    register_FragmentProgramChunk_class();

    register_LightModelChunkBase_class();

    register_LightModelChunk_class();

    register_LineChunkBase_class();

    register_LineChunk_class();

    register_LogicOpChunkBase_class();

    register_LogicOpChunk_class();

    register_PointChunkBase_class();

    register_PointChunk_class();

    register_RegisterCombinersChunkBase_class();

    register_RegisterCombinersChunk_class();

    register_ShadeModelChunkBase_class();

    register_ShadeModelChunk_class();

    register_StencilChunkBase_class();

    register_StencilChunk_class();

    register_TexGenChunkBase_class();

    register_TexGenChunk_class();

    register_TextureEnvChunkBase_class();

    register_TextureEnvChunk_class();

    register_TextureImageChunkBase_class();

    register_TextureImageChunk_class();

    register_TextureObjRefChunkBase_class();

    register_TextureObjRefChunk_class();

    register_TextureSelectChunkBase_class();

    register_TextureSelectChunk_class();

    register_TransformChunkBase_class();

    register_TransformChunk_class();

    register_TextureTransformChunkBase_class();

    register_TextureTransformChunk_class();

    register_TwoSidedLightingChunkBase_class();

    register_TwoSidedLightingChunk_class();

    register_VertexProgramChunkBase_class();

    /** Helpers for OSG::TwoSidedLightingChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TwoSidedLightingChunk, OSG::TwoSidedLightingChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TwoSidedLightingChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TextureTransformChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TextureTransformChunk, OSG::TextureTransformChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TextureTransformChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TransformChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TransformChunk, OSG::TransformChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TransformChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TextureEnvChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TextureEnvChunk, OSG::TextureEnvChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TextureEnvChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::StencilChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::StencilChunk, OSG::StencilChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::StencilChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::CubeTextureObjChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::CubeTextureObjChunk, OSG::CubeTextureObjChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::CubeTextureObjChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TextureSelectChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TextureSelectChunk, OSG::TextureSelectChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TextureSelectChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ProgramChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ProgramChunk, OSG::ProgramChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ProgramChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::LineChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::LineChunk, OSG::LineChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::LineChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::LogicOpChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::LogicOpChunk, OSG::LogicOpChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::LogicOpChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::FragmentProgramChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::FragmentProgramChunk, OSG::FragmentProgramChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::FragmentProgramChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TexGenChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TexGenChunk, OSG::TexGenChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TexGenChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::PointChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::PointChunk, OSG::PointChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::PointChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ShadeModelChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ShadeModelChunk, OSG::ShadeModelChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ShadeModelChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::FogChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::FogChunk, OSG::FogChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::FogChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::RegisterCombinersChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::RegisterCombinersChunk, OSG::RegisterCombinersChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::RegisterCombinersChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ClipPlaneChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ClipPlaneChunk, OSG::ClipPlaneChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ClipPlaneChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::VertexProgramChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::VertexProgramChunk, OSG::VertexProgramChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::VertexProgramChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TextureObjRefChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TextureObjRefChunk, OSG::TextureObjRefChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TextureObjRefChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::LightModelChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::LightModelChunk, OSG::LightModelChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::LightModelChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::TextureImageChunk */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::TextureImageChunk, OSG::TextureImageChunk::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::TextureImageChunk::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    register_VertexProgramChunk_class();
}

