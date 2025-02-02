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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PolygonChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct PolygonChunkBase_wrapper : OSG::PolygonChunkBase, bp::wrapper< OSG::PolygonChunkBase > {



};

boost::python::list PolygonChunkBase_getMFStipple(OSG::PolygonChunkBase *self)
{
   boost::python::list result;
   OSG::MFInt32 const * mf_data = self->getMFStipple();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_PolygonChunkBase_class(){

    { //::OSG::PolygonChunkBase
        typedef bp::class_< PolygonChunkBase_wrapper, bp::bases< OSG::StateChunk >, boost::noncopyable > PolygonChunkBase_exposer_t;
        PolygonChunkBase_exposer_t PolygonChunkBase_exposer = PolygonChunkBase_exposer_t( "PolygonChunkBase", bp::no_init );
        bp::scope PolygonChunkBase_scope( PolygonChunkBase_exposer );
        bp::scope().attr("CullFaceFieldId") = (int)OSG::PolygonChunkBase::CullFaceFieldId;
        bp::scope().attr("FrontFaceFieldId") = (int)OSG::PolygonChunkBase::FrontFaceFieldId;
        bp::scope().attr("FrontModeFieldId") = (int)OSG::PolygonChunkBase::FrontModeFieldId;
        bp::scope().attr("BackModeFieldId") = (int)OSG::PolygonChunkBase::BackModeFieldId;
        bp::scope().attr("SmoothFieldId") = (int)OSG::PolygonChunkBase::SmoothFieldId;
        bp::scope().attr("OffsetFactorFieldId") = (int)OSG::PolygonChunkBase::OffsetFactorFieldId;
        bp::scope().attr("OffsetBiasFieldId") = (int)OSG::PolygonChunkBase::OffsetBiasFieldId;
        bp::scope().attr("OffsetPointFieldId") = (int)OSG::PolygonChunkBase::OffsetPointFieldId;
        bp::scope().attr("OffsetLineFieldId") = (int)OSG::PolygonChunkBase::OffsetLineFieldId;
        bp::scope().attr("OffsetFillFieldId") = (int)OSG::PolygonChunkBase::OffsetFillFieldId;
        bp::scope().attr("StippleFieldId") = (int)OSG::PolygonChunkBase::StippleFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::PolygonChunkBase::NextFieldId;
        { //::OSG::PolygonChunkBase::copyFromBin
        
            typedef void ( ::OSG::PolygonChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PolygonChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PolygonChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PolygonChunkBase::copyToBin
        
            typedef void ( ::OSG::PolygonChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PolygonChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PolygonChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PolygonChunkBase::create
        
            typedef ::OSG::PolygonChunkTransitPtr ( *create_function_type )(  );
            
            PolygonChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PolygonChunkBase::create ) );
        
        }
        { //::OSG::PolygonChunkBase::createDependent
        
            typedef ::OSG::PolygonChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PolygonChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PolygonChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PolygonChunkBase::createLocal
        
            typedef ::OSG::PolygonChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PolygonChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PolygonChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PolygonChunkBase::getBackMode
        
            typedef ::GLenum const & ( ::OSG::PolygonChunkBase::*getBackMode_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getBackMode"
                , getBackMode_function_type( &::OSG::PolygonChunkBase::getBackMode )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::PolygonChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PolygonChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PolygonChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PolygonChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PolygonChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PolygonChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PolygonChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::PolygonChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PolygonChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PolygonChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PolygonChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PolygonChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PolygonChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::PolygonChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PolygonChunkBase::*getContainerSize_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PolygonChunkBase::getContainerSize ) );
        
        }
        { //::OSG::PolygonChunkBase::getCullFace
        
            typedef ::GLenum const & ( ::OSG::PolygonChunkBase::*getCullFace_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getCullFace"
                , getCullFace_function_type( &::OSG::PolygonChunkBase::getCullFace )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::PolygonChunkBase::getFrontFace
        
            typedef ::GLenum const & ( ::OSG::PolygonChunkBase::*getFrontFace_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getFrontFace"
                , getFrontFace_function_type( &::OSG::PolygonChunkBase::getFrontFace )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::PolygonChunkBase::getFrontMode
        
            typedef ::GLenum const & ( ::OSG::PolygonChunkBase::*getFrontMode_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getFrontMode"
                , getFrontMode_function_type( &::OSG::PolygonChunkBase::getFrontMode )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::PolygonChunkBase::getOffsetBias
        
            typedef ::OSG::Real32 ( ::OSG::PolygonChunkBase::*getOffsetBias_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getOffsetBias"
                , getOffsetBias_function_type( &::OSG::PolygonChunkBase::getOffsetBias ) );
        
        }
        { //::OSG::PolygonChunkBase::getOffsetFactor
        
            typedef ::OSG::Real32 ( ::OSG::PolygonChunkBase::*getOffsetFactor_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getOffsetFactor"
                , getOffsetFactor_function_type( &::OSG::PolygonChunkBase::getOffsetFactor ) );
        
        }
        { //::OSG::PolygonChunkBase::getOffsetFill
        
            typedef bool ( ::OSG::PolygonChunkBase::*getOffsetFill_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getOffsetFill"
                , getOffsetFill_function_type( &::OSG::PolygonChunkBase::getOffsetFill ) );
        
        }
        { //::OSG::PolygonChunkBase::getOffsetLine
        
            typedef bool ( ::OSG::PolygonChunkBase::*getOffsetLine_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getOffsetLine"
                , getOffsetLine_function_type( &::OSG::PolygonChunkBase::getOffsetLine ) );
        
        }
        { //::OSG::PolygonChunkBase::getOffsetPoint
        
            typedef bool ( ::OSG::PolygonChunkBase::*getOffsetPoint_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getOffsetPoint"
                , getOffsetPoint_function_type( &::OSG::PolygonChunkBase::getOffsetPoint ) );
        
        }
        { //::OSG::PolygonChunkBase::getSFBackMode
        
            typedef ::OSG::SFGLenum const * ( ::OSG::PolygonChunkBase::*getSFBackMode_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFBackMode"
                , getSFBackMode_function_type( &::OSG::PolygonChunkBase::getSFBackMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFCullFace
        
            typedef ::OSG::SFGLenum const * ( ::OSG::PolygonChunkBase::*getSFCullFace_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFCullFace"
                , getSFCullFace_function_type( &::OSG::PolygonChunkBase::getSFCullFace )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFFrontFace
        
            typedef ::OSG::SFGLenum const * ( ::OSG::PolygonChunkBase::*getSFFrontFace_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFFrontFace"
                , getSFFrontFace_function_type( &::OSG::PolygonChunkBase::getSFFrontFace )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFFrontMode
        
            typedef ::OSG::SFGLenum const * ( ::OSG::PolygonChunkBase::*getSFFrontMode_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFFrontMode"
                , getSFFrontMode_function_type( &::OSG::PolygonChunkBase::getSFFrontMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFOffsetBias
        
            typedef ::OSG::SFReal32 const * ( ::OSG::PolygonChunkBase::*getSFOffsetBias_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFOffsetBias"
                , getSFOffsetBias_function_type( &::OSG::PolygonChunkBase::getSFOffsetBias )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFOffsetFactor
        
            typedef ::OSG::SFReal32 const * ( ::OSG::PolygonChunkBase::*getSFOffsetFactor_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFOffsetFactor"
                , getSFOffsetFactor_function_type( &::OSG::PolygonChunkBase::getSFOffsetFactor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFOffsetFill
        
            typedef ::OSG::SFBool const * ( ::OSG::PolygonChunkBase::*getSFOffsetFill_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFOffsetFill"
                , getSFOffsetFill_function_type( &::OSG::PolygonChunkBase::getSFOffsetFill )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFOffsetLine
        
            typedef ::OSG::SFBool const * ( ::OSG::PolygonChunkBase::*getSFOffsetLine_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFOffsetLine"
                , getSFOffsetLine_function_type( &::OSG::PolygonChunkBase::getSFOffsetLine )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFOffsetPoint
        
            typedef ::OSG::SFBool const * ( ::OSG::PolygonChunkBase::*getSFOffsetPoint_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFOffsetPoint"
                , getSFOffsetPoint_function_type( &::OSG::PolygonChunkBase::getSFOffsetPoint )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSFSmooth
        
            typedef ::OSG::SFBool const * ( ::OSG::PolygonChunkBase::*getSFSmooth_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSFSmooth"
                , getSFSmooth_function_type( &::OSG::PolygonChunkBase::getSFSmooth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getSmooth
        
            typedef bool ( ::OSG::PolygonChunkBase::*getSmooth_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getSmooth"
                , getSmooth_function_type( &::OSG::PolygonChunkBase::getSmooth ) );
        
        }
        { //::OSG::PolygonChunkBase::getStipple
        
            typedef ::OSG::Int32 ( ::OSG::PolygonChunkBase::*getStipple_function_type )( ::OSG::UInt32 const ) const;
            
            PolygonChunkBase_exposer.def( 
                "getStipple"
                , getStipple_function_type( &::OSG::PolygonChunkBase::getStipple )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::PolygonChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PolygonChunkBase::*getType_function_type )(  ) ;
            
            PolygonChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PolygonChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PolygonChunkBase::*getType_function_type )(  ) const;
            
            PolygonChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PolygonChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PolygonChunkBase::setBackMode
        
            typedef void ( ::OSG::PolygonChunkBase::*setBackMode_function_type )( ::GLenum const & ) ;
            
            PolygonChunkBase_exposer.def( 
                "setBackMode"
                , setBackMode_function_type( &::OSG::PolygonChunkBase::setBackMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setCullFace
        
            typedef void ( ::OSG::PolygonChunkBase::*setCullFace_function_type )( ::GLenum const & ) ;
            
            PolygonChunkBase_exposer.def( 
                "setCullFace"
                , setCullFace_function_type( &::OSG::PolygonChunkBase::setCullFace )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setFrontFace
        
            typedef void ( ::OSG::PolygonChunkBase::*setFrontFace_function_type )( ::GLenum const & ) ;
            
            PolygonChunkBase_exposer.def( 
                "setFrontFace"
                , setFrontFace_function_type( &::OSG::PolygonChunkBase::setFrontFace )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setFrontMode
        
            typedef void ( ::OSG::PolygonChunkBase::*setFrontMode_function_type )( ::GLenum const & ) ;
            
            PolygonChunkBase_exposer.def( 
                "setFrontMode"
                , setFrontMode_function_type( &::OSG::PolygonChunkBase::setFrontMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setOffsetBias
        
            typedef void ( ::OSG::PolygonChunkBase::*setOffsetBias_function_type )( ::OSG::Real32 const ) ;
            
            PolygonChunkBase_exposer.def( 
                "setOffsetBias"
                , setOffsetBias_function_type( &::OSG::PolygonChunkBase::setOffsetBias )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setOffsetFactor
        
            typedef void ( ::OSG::PolygonChunkBase::*setOffsetFactor_function_type )( ::OSG::Real32 const ) ;
            
            PolygonChunkBase_exposer.def( 
                "setOffsetFactor"
                , setOffsetFactor_function_type( &::OSG::PolygonChunkBase::setOffsetFactor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setOffsetFill
        
            typedef void ( ::OSG::PolygonChunkBase::*setOffsetFill_function_type )( bool const ) ;
            
            PolygonChunkBase_exposer.def( 
                "setOffsetFill"
                , setOffsetFill_function_type( &::OSG::PolygonChunkBase::setOffsetFill )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setOffsetLine
        
            typedef void ( ::OSG::PolygonChunkBase::*setOffsetLine_function_type )( bool const ) ;
            
            PolygonChunkBase_exposer.def( 
                "setOffsetLine"
                , setOffsetLine_function_type( &::OSG::PolygonChunkBase::setOffsetLine )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setOffsetPoint
        
            typedef void ( ::OSG::PolygonChunkBase::*setOffsetPoint_function_type )( bool const ) ;
            
            PolygonChunkBase_exposer.def( 
                "setOffsetPoint"
                , setOffsetPoint_function_type( &::OSG::PolygonChunkBase::setOffsetPoint )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PolygonChunkBase::setSmooth
        
            typedef void ( ::OSG::PolygonChunkBase::*setSmooth_function_type )( bool const ) ;
            
            PolygonChunkBase_exposer.def( 
                "setSmooth"
                , setSmooth_function_type( &::OSG::PolygonChunkBase::setSmooth )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StateChunk::activate
        
            typedef void ( ::OSG::StateChunk::*activate_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            PolygonChunkBase_exposer.def( 
                "activate"
                , activate_function_type( &::OSG::StateChunk::activate )
                , ( bp::arg("pEnv"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::StateChunk::changeFrom
        
            typedef void ( ::OSG::StateChunk::*changeFrom_function_type )( ::OSG::DrawEnv *,::OSG::StateChunk *,::OSG::UInt32 ) ;
            
            PolygonChunkBase_exposer.def( 
                "changeFrom"
                , changeFrom_function_type( &::OSG::StateChunk::changeFrom )
                , ( bp::arg("pEnv"), bp::arg("pOld"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::StateChunk::deactivate
        
            typedef void ( ::OSG::StateChunk::*deactivate_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            PolygonChunkBase_exposer.def( 
                "deactivate"
                , deactivate_function_type( &::OSG::StateChunk::deactivate )
                , ( bp::arg("pEnv"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        PolygonChunkBase_exposer.staticmethod( "create" );
        PolygonChunkBase_exposer.staticmethod( "createDependent" );
        PolygonChunkBase_exposer.staticmethod( "createLocal" );
        PolygonChunkBase_exposer.staticmethod( "getClassGroupId" );
        PolygonChunkBase_exposer.staticmethod( "getClassType" );
        PolygonChunkBase_exposer.staticmethod( "getClassTypeId" );
        PolygonChunkBase_exposer.def("getMFStipple",PolygonChunkBase_getMFStipple);
    }

}
