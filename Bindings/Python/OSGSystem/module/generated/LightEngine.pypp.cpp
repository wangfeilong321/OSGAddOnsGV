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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "LightEngine.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_LightEngine_class(){

    { //::OSG::LightEngine
        typedef bp::class_< OSG::LightEngine, bp::bases< OSG::LightEngineBase >, boost::noncopyable > LightEngine_exposer_t;
        LightEngine_exposer_t LightEngine_exposer = LightEngine_exposer_t( "LightEngine", bp::no_init );
        bp::scope LightEngine_scope( LightEngine_exposer );
        bp::enum_< OSG::LightEngine::LightTypeE>("LightTypeE")
            .value("Directional", OSG::LightEngine::Directional)
            .value("Point", OSG::LightEngine::Point)
            .value("Spot", OSG::LightEngine::Spot)
            .export_values()
            ;
        { //::OSG::LightEngine::changed
        
            typedef void ( ::OSG::LightEngine::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            LightEngine_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::LightEngine::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::LightEngine::dump
        
            typedef void ( ::OSG::LightEngine::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            LightEngine_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::LightEngine::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::LightEngine::runOnEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::LightEngine::*runOnEnter_function_type )( ::OSG::Light *,::OSG::LightEngine::LightTypeE,::OSG::RenderAction * ) ;
            
            LightEngine_exposer.def( 
                "runOnEnter"
                , runOnEnter_function_type( &::OSG::LightEngine::runOnEnter )
                , ( bp::arg("pLight"), bp::arg("eType"), bp::arg("pAction") ) );
        
        }
        { //::OSG::LightEngine::runOnLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::LightEngine::*runOnLeave_function_type )( ::OSG::Light *,::OSG::LightEngine::LightTypeE,::OSG::RenderAction * ) ;
            
            LightEngine_exposer.def( 
                "runOnLeave"
                , runOnLeave_function_type( &::OSG::LightEngine::runOnLeave )
                , ( bp::arg("pLight"), bp::arg("eType"), bp::arg("pAction") ) );
        
        }
        pyopensg::register_transit< OSG::LightEngine >::execute();
        bp::register_ptr_to_python< OSG::LightEngine::ObjRecPtr >();
        bp::implicitly_convertible< OSG::LightEngine::ObjRecPtr, OSG::LightEngine* >();
        bp::implicitly_convertible< OSG::LightEngine::ObjRecPtr, OSG::LightEngine::ObjCPtr >();
        bp::implicitly_convertible< OSG::LightEngine::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::LightEngine::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::LightEngine::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
    }

}
