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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimKeyFrameTemplateBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct AnimKeyFrameTemplateBase_wrapper : OSG::AnimKeyFrameTemplateBase, bp::wrapper< OSG::AnimKeyFrameTemplateBase > {



};

void register_AnimKeyFrameTemplateBase_class(){

    { //::OSG::AnimKeyFrameTemplateBase
        typedef bp::class_< AnimKeyFrameTemplateBase_wrapper, bp::bases< OSG::AnimTemplate >, boost::noncopyable > AnimKeyFrameTemplateBase_exposer_t;
        AnimKeyFrameTemplateBase_exposer_t AnimKeyFrameTemplateBase_exposer = AnimKeyFrameTemplateBase_exposer_t( "AnimKeyFrameTemplateBase", bp::no_init );
        bp::scope AnimKeyFrameTemplateBase_scope( AnimKeyFrameTemplateBase_exposer );
        { //::OSG::AnimKeyFrameTemplateBase::copyFromBin
        
            typedef void ( ::OSG::AnimKeyFrameTemplateBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::AnimKeyFrameTemplateBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::copyToBin
        
            typedef void ( ::OSG::AnimKeyFrameTemplateBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::AnimKeyFrameTemplateBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::create
        
            typedef ::OSG::AnimKeyFrameTemplateTransitPtr ( *create_function_type )(  );
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::AnimKeyFrameTemplateBase::create ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::createDependent
        
            typedef ::OSG::AnimKeyFrameTemplateTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::AnimKeyFrameTemplateBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::createLocal
        
            typedef ::OSG::AnimKeyFrameTemplateTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::AnimKeyFrameTemplateBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::AnimKeyFrameTemplateBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::AnimKeyFrameTemplateBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::AnimKeyFrameTemplateBase::getClassGroupId ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::AnimKeyFrameTemplateBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::AnimKeyFrameTemplateBase::getClassTypeId ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::AnimKeyFrameTemplateBase::*getContainerSize_function_type )(  ) const;
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::AnimKeyFrameTemplateBase::getContainerSize ) );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::AnimKeyFrameTemplateBase::*getType_function_type )(  ) ;
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimKeyFrameTemplateBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimKeyFrameTemplateBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::AnimKeyFrameTemplateBase::*getType_function_type )(  ) const;
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimKeyFrameTemplateBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTemplate::instantiate
        
            typedef ::OSG::AnimationTransitPtr ( ::OSG::AnimTemplate::*instantiate_function_type )( ::OSG::Node * ) ;
            
            AnimKeyFrameTemplateBase_exposer.def( 
                "instantiate"
                , instantiate_function_type( &::OSG::AnimTemplate::instantiate )
                , ( bp::arg("rootNode") ) );
        
        }
        AnimKeyFrameTemplateBase_exposer.staticmethod( "create" );
        AnimKeyFrameTemplateBase_exposer.staticmethod( "createDependent" );
        AnimKeyFrameTemplateBase_exposer.staticmethod( "createLocal" );
        AnimKeyFrameTemplateBase_exposer.staticmethod( "getClassGroupId" );
        AnimKeyFrameTemplateBase_exposer.staticmethod( "getClassType" );
        AnimKeyFrameTemplateBase_exposer.staticmethod( "getClassTypeId" );
    }

}
