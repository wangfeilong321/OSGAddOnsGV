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
#include "DisplayFilterStage.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DisplayFilterStage_class(){

    { //::OSG::DisplayFilterStage
        typedef bp::class_< OSG::DisplayFilterStage, bp::bases< OSG::DisplayFilterStageBase >, OSG::DisplayFilterStage::ObjRecPtr, boost::noncopyable > DisplayFilterStage_exposer_t;
        DisplayFilterStage_exposer_t DisplayFilterStage_exposer = DisplayFilterStage_exposer_t( "DisplayFilterStage", bp::no_init );
        bp::scope DisplayFilterStage_scope( DisplayFilterStage_exposer );
        { //::OSG::DisplayFilterStage::adjustVolume
        
            typedef void ( ::OSG::DisplayFilterStage::*adjustVolume_function_type )( ::OSG::Volume & ) ;
            
            DisplayFilterStage_exposer.def( 
                "adjustVolume"
                , adjustVolume_function_type( &::OSG::DisplayFilterStage::adjustVolume )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::DisplayFilterStage::changed
        
            typedef void ( ::OSG::DisplayFilterStage::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DisplayFilterStage_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DisplayFilterStage::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DisplayFilterStage::dump
        
            typedef void ( ::OSG::DisplayFilterStage::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DisplayFilterStage_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DisplayFilterStage::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::DisplayFilterStage >::execute();
        bp::implicitly_convertible< OSG::DisplayFilterStage::ObjRecPtr, OSG::DisplayFilterStage* >();
        bp::implicitly_convertible< OSG::DisplayFilterStage::ObjRecPtr, OSG::DisplayFilterStage::ObjCPtr >();
        bp::implicitly_convertible< OSG::DisplayFilterStage::ObjRecPtr, OSG::Stage* >();
        bp::implicitly_convertible< OSG::DisplayFilterStage::ObjRecPtr, OSG::Stage::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DisplayFilterStage::ObjRecPtr, OSG::Stage::ObjCPtr>();
    }

}
