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
#include "HDRStage.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_HDRStage_class(){

    { //::OSG::HDRStage
        typedef bp::class_< OSG::HDRStage, bp::bases< OSG::HDRStageBase >, OSG::HDRStage::ObjRecPtr, boost::noncopyable > HDRStage_exposer_t;
        HDRStage_exposer_t HDRStage_exposer = HDRStage_exposer_t( "HDRStage", bp::no_init );
        bp::scope HDRStage_scope( HDRStage_exposer );
        { //::OSG::HDRStage::changed
        
            typedef void ( ::OSG::HDRStage::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            HDRStage_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::HDRStage::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::HDRStage::dump
        
            typedef void ( ::OSG::HDRStage::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            HDRStage_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::HDRStage::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::HDRStage::initData
        
            typedef void ( ::OSG::HDRStage::*initData_function_type )( ::OSG::RenderAction *,::OSG::Int32,::OSG::Int32 ) ;
            
            HDRStage_exposer.def( 
                "initData"
                , initData_function_type( &::OSG::HDRStage::initData )
                , ( bp::arg("pAction"), bp::arg("iVPWidth"), bp::arg("iVPHeight") ) );
        
        }
        { //::OSG::HDRStage::postProcess
        
            typedef void ( ::OSG::HDRStage::*postProcess_function_type )( ::OSG::DrawEnv * ) ;
            
            HDRStage_exposer.def( 
                "postProcess"
                , postProcess_function_type( &::OSG::HDRStage::postProcess )
                , ( bp::arg("arg0") ) );
        
        }
        { //::OSG::HDRStage::updateData
        
            typedef void ( ::OSG::HDRStage::*updateData_function_type )( ::OSG::RenderAction *,::OSG::Int32,::OSG::Int32 ) ;
            
            HDRStage_exposer.def( 
                "updateData"
                , updateData_function_type( &::OSG::HDRStage::updateData )
                , ( bp::arg("pAction"), bp::arg("iVPWidth"), bp::arg("iVPHeight") ) );
        
        }
        pyopensg::register_transit< OSG::HDRStage >::execute();
        bp::implicitly_convertible< OSG::HDRStage::ObjRecPtr, OSG::HDRStage* >();
        bp::implicitly_convertible< OSG::HDRStage::ObjRecPtr, OSG::HDRStage::ObjCPtr >();
        bp::implicitly_convertible< OSG::HDRStage::ObjRecPtr, OSG::Stage* >();
        bp::implicitly_convertible< OSG::HDRStage::ObjRecPtr, OSG::Stage::ObjRecPtr >();
        bp::implicitly_convertible<OSG::HDRStage::ObjRecPtr, OSG::Stage::ObjCPtr>();
    }

}
