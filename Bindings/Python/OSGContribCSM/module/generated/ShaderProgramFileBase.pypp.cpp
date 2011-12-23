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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderProgramFileBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderProgramFileBase_class(){

    { //::OSG::ShaderProgramFileBase
        typedef bp::class_< OSG::ShaderProgramFileBase, bp::bases< ::OSG::ShaderProgram >, boost::noncopyable > ShaderProgramFileBase_exposer_t;
        ShaderProgramFileBase_exposer_t ShaderProgramFileBase_exposer = ShaderProgramFileBase_exposer_t( "ShaderProgramFileBase", bp::no_init );
        bp::scope ShaderProgramFileBase_scope( ShaderProgramFileBase_exposer );
        bp::scope().attr("ProgramUrlFieldId") = (int)OSG::ShaderProgramFileBase::ProgramUrlFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderProgramFileBase::NextFieldId;
        { //::OSG::ShaderProgramFileBase::copyFromBin
        
            typedef void ( ::OSG::ShaderProgramFileBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderProgramFileBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderProgramFileBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProgramFileBase::copyToBin
        
            typedef void ( ::OSG::ShaderProgramFileBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderProgramFileBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderProgramFileBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProgramFileBase::create
        
            typedef ::OSG::ShaderProgramFileTransitPtr ( *create_function_type )(  );
            
            ShaderProgramFileBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderProgramFileBase::create ) );
        
        }
        { //::OSG::ShaderProgramFileBase::createDependent
        
            typedef ::OSG::ShaderProgramFileTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderProgramFileBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderProgramFileBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderProgramFileBase::createLocal
        
            typedef ::OSG::ShaderProgramFileTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderProgramFileBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderProgramFileBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderProgramFileBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderProgramFileBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderProgramFileBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderProgramFileBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProgramFileBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderProgramFileBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderProgramFileBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderProgramFileBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderProgramFileBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderProgramFileBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderProgramFileBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderProgramFileBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderProgramFileBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderProgramFileBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderProgramFileBase::*getContainerSize_function_type )(  ) const;
            
            ShaderProgramFileBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderProgramFileBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderProgramFileBase::getProgramUrl
        
            typedef ::std::string const & ( ::OSG::ShaderProgramFileBase::*getProgramUrl_function_type )(  ) const;
            
            ShaderProgramFileBase_exposer.def( 
                "getProgramUrl"
                , getProgramUrl_function_type( &::OSG::ShaderProgramFileBase::getProgramUrl )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ShaderProgramFileBase::getSFProgramUrl
        
            typedef ::OSG::SFString const * ( ::OSG::ShaderProgramFileBase::*getSFProgramUrl_function_type )(  ) const;
            
            ShaderProgramFileBase_exposer.def( 
                "getSFProgramUrl"
                , getSFProgramUrl_function_type( &::OSG::ShaderProgramFileBase::getSFProgramUrl )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramFileBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderProgramFileBase::*getType_function_type )(  ) ;
            
            ShaderProgramFileBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderProgramFileBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramFileBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderProgramFileBase::*getType_function_type )(  ) const;
            
            ShaderProgramFileBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderProgramFileBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramFileBase::setProgramUrl
        
            typedef void ( ::OSG::ShaderProgramFileBase::*setProgramUrl_function_type )( ::std::string const & ) ;
            
            ShaderProgramFileBase_exposer.def( 
                "setProgramUrl"
                , setProgramUrl_function_type( &::OSG::ShaderProgramFileBase::setProgramUrl )
                , ( bp::arg("value") ) );
        
        }
        ShaderProgramFileBase_exposer.staticmethod( "create" );
        ShaderProgramFileBase_exposer.staticmethod( "createDependent" );
        ShaderProgramFileBase_exposer.staticmethod( "createLocal" );
        ShaderProgramFileBase_exposer.staticmethod( "getClassGroupId" );
        ShaderProgramFileBase_exposer.staticmethod( "getClassType" );
        ShaderProgramFileBase_exposer.staticmethod( "getClassTypeId" );
    }

}
