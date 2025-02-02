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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "HDRStageBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_HDRStageBase_class(){

    { //::OSG::HDRStageBase
        typedef bp::class_< OSG::HDRStageBase, bp::bases< ::OSG::Stage >, boost::noncopyable > HDRStageBase_exposer_t;
        HDRStageBase_exposer_t HDRStageBase_exposer = HDRStageBase_exposer_t( "HDRStageBase", bp::no_init );
        bp::scope HDRStageBase_scope( HDRStageBase_exposer );
        bp::scope().attr("ExposureFieldId") = (int)OSG::HDRStageBase::ExposureFieldId;
        bp::scope().attr("BlurWidthFieldId") = (int)OSG::HDRStageBase::BlurWidthFieldId;
        bp::scope().attr("BlurAmountFieldId") = (int)OSG::HDRStageBase::BlurAmountFieldId;
        bp::scope().attr("EffectAmountFieldId") = (int)OSG::HDRStageBase::EffectAmountFieldId;
        bp::scope().attr("GammaFieldId") = (int)OSG::HDRStageBase::GammaFieldId;
        bp::scope().attr("BufferFormatFieldId") = (int)OSG::HDRStageBase::BufferFormatFieldId;
        bp::scope().attr("CombineBlendFieldId") = (int)OSG::HDRStageBase::CombineBlendFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::HDRStageBase::NextFieldId;
        { //::OSG::HDRStageBase::copyFromBin
        
            typedef void ( ::OSG::HDRStageBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            HDRStageBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::HDRStageBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::HDRStageBase::copyToBin
        
            typedef void ( ::OSG::HDRStageBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            HDRStageBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::HDRStageBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::HDRStageBase::create
        
            typedef ::OSG::HDRStageTransitPtr ( *create_function_type )(  );
            
            HDRStageBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::HDRStageBase::create ) );
        
        }
        { //::OSG::HDRStageBase::createDependent
        
            typedef ::OSG::HDRStageTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            HDRStageBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::HDRStageBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::HDRStageBase::createLocal
        
            typedef ::OSG::HDRStageTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            HDRStageBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::HDRStageBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::HDRStageBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::HDRStageBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            HDRStageBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::HDRStageBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::HDRStageBase::getBlurAmount
        
            typedef ::OSG::Real32 ( ::OSG::HDRStageBase::*getBlurAmount_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getBlurAmount"
                , getBlurAmount_function_type( &::OSG::HDRStageBase::getBlurAmount ) );
        
        }
        { //::OSG::HDRStageBase::getBlurWidth
        
            typedef ::OSG::Real32 ( ::OSG::HDRStageBase::*getBlurWidth_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getBlurWidth"
                , getBlurWidth_function_type( &::OSG::HDRStageBase::getBlurWidth ) );
        
        }
        { //::OSG::HDRStageBase::getBufferFormat
        
            typedef ::GLenum const & ( ::OSG::HDRStageBase::*getBufferFormat_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getBufferFormat"
                , getBufferFormat_function_type( &::OSG::HDRStageBase::getBufferFormat )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::HDRStageBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            HDRStageBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::HDRStageBase::getClassGroupId ) );
        
        }
        { //::OSG::HDRStageBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            HDRStageBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::HDRStageBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::HDRStageBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            HDRStageBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::HDRStageBase::getClassTypeId ) );
        
        }
        { //::OSG::HDRStageBase::getCombineBlend
        
            typedef bool ( ::OSG::HDRStageBase::*getCombineBlend_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getCombineBlend"
                , getCombineBlend_function_type( &::OSG::HDRStageBase::getCombineBlend ) );
        
        }
        { //::OSG::HDRStageBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::HDRStageBase::*getContainerSize_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::HDRStageBase::getContainerSize ) );
        
        }
        { //::OSG::HDRStageBase::getEffectAmount
        
            typedef ::OSG::Real32 ( ::OSG::HDRStageBase::*getEffectAmount_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getEffectAmount"
                , getEffectAmount_function_type( &::OSG::HDRStageBase::getEffectAmount ) );
        
        }
        { //::OSG::HDRStageBase::getExposure
        
            typedef ::OSG::Real32 ( ::OSG::HDRStageBase::*getExposure_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getExposure"
                , getExposure_function_type( &::OSG::HDRStageBase::getExposure ) );
        
        }
        { //::OSG::HDRStageBase::getGamma
        
            typedef ::OSG::Real32 ( ::OSG::HDRStageBase::*getGamma_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getGamma"
                , getGamma_function_type( &::OSG::HDRStageBase::getGamma ) );
        
        }
        { //::OSG::HDRStageBase::getSFBlurAmount
        
            typedef ::OSG::SFReal32 const * ( ::OSG::HDRStageBase::*getSFBlurAmount_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getSFBlurAmount"
                , getSFBlurAmount_function_type( &::OSG::HDRStageBase::getSFBlurAmount )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getSFBlurWidth
        
            typedef ::OSG::SFReal32 const * ( ::OSG::HDRStageBase::*getSFBlurWidth_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getSFBlurWidth"
                , getSFBlurWidth_function_type( &::OSG::HDRStageBase::getSFBlurWidth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getSFBufferFormat
        
            typedef ::OSG::SFGLenum const * ( ::OSG::HDRStageBase::*getSFBufferFormat_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getSFBufferFormat"
                , getSFBufferFormat_function_type( &::OSG::HDRStageBase::getSFBufferFormat )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getSFCombineBlend
        
            typedef ::OSG::SFBool const * ( ::OSG::HDRStageBase::*getSFCombineBlend_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getSFCombineBlend"
                , getSFCombineBlend_function_type( &::OSG::HDRStageBase::getSFCombineBlend )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getSFEffectAmount
        
            typedef ::OSG::SFReal32 const * ( ::OSG::HDRStageBase::*getSFEffectAmount_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getSFEffectAmount"
                , getSFEffectAmount_function_type( &::OSG::HDRStageBase::getSFEffectAmount )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getSFExposure
        
            typedef ::OSG::SFReal32 const * ( ::OSG::HDRStageBase::*getSFExposure_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getSFExposure"
                , getSFExposure_function_type( &::OSG::HDRStageBase::getSFExposure )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getSFGamma
        
            typedef ::OSG::SFReal32 const * ( ::OSG::HDRStageBase::*getSFGamma_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getSFGamma"
                , getSFGamma_function_type( &::OSG::HDRStageBase::getSFGamma )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::HDRStageBase::*getType_function_type )(  ) ;
            
            HDRStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::HDRStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::HDRStageBase::*getType_function_type )(  ) const;
            
            HDRStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::HDRStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::HDRStageBase::setBlurAmount
        
            typedef void ( ::OSG::HDRStageBase::*setBlurAmount_function_type )( ::OSG::Real32 const ) ;
            
            HDRStageBase_exposer.def( 
                "setBlurAmount"
                , setBlurAmount_function_type( &::OSG::HDRStageBase::setBlurAmount )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::HDRStageBase::setBlurWidth
        
            typedef void ( ::OSG::HDRStageBase::*setBlurWidth_function_type )( ::OSG::Real32 const ) ;
            
            HDRStageBase_exposer.def( 
                "setBlurWidth"
                , setBlurWidth_function_type( &::OSG::HDRStageBase::setBlurWidth )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::HDRStageBase::setBufferFormat
        
            typedef void ( ::OSG::HDRStageBase::*setBufferFormat_function_type )( ::GLenum const & ) ;
            
            HDRStageBase_exposer.def( 
                "setBufferFormat"
                , setBufferFormat_function_type( &::OSG::HDRStageBase::setBufferFormat )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::HDRStageBase::setCombineBlend
        
            typedef void ( ::OSG::HDRStageBase::*setCombineBlend_function_type )( bool const ) ;
            
            HDRStageBase_exposer.def( 
                "setCombineBlend"
                , setCombineBlend_function_type( &::OSG::HDRStageBase::setCombineBlend )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::HDRStageBase::setEffectAmount
        
            typedef void ( ::OSG::HDRStageBase::*setEffectAmount_function_type )( ::OSG::Real32 const ) ;
            
            HDRStageBase_exposer.def( 
                "setEffectAmount"
                , setEffectAmount_function_type( &::OSG::HDRStageBase::setEffectAmount )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::HDRStageBase::setExposure
        
            typedef void ( ::OSG::HDRStageBase::*setExposure_function_type )( ::OSG::Real32 const ) ;
            
            HDRStageBase_exposer.def( 
                "setExposure"
                , setExposure_function_type( &::OSG::HDRStageBase::setExposure )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::HDRStageBase::setGamma
        
            typedef void ( ::OSG::HDRStageBase::*setGamma_function_type )( ::OSG::Real32 const ) ;
            
            HDRStageBase_exposer.def( 
                "setGamma"
                , setGamma_function_type( &::OSG::HDRStageBase::setGamma )
                , ( bp::arg("value") ) );
        
        }
        HDRStageBase_exposer.staticmethod( "create" );
        HDRStageBase_exposer.staticmethod( "createDependent" );
        HDRStageBase_exposer.staticmethod( "createLocal" );
        HDRStageBase_exposer.staticmethod( "getClassGroupId" );
        HDRStageBase_exposer.staticmethod( "getClassType" );
        HDRStageBase_exposer.staticmethod( "getClassTypeId" );
    }

}
