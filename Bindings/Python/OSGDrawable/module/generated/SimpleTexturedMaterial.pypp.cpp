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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleTexturedMaterial.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SimpleTexturedMaterial_class(){

    { //::OSG::SimpleTexturedMaterial
        typedef bp::class_< OSG::SimpleTexturedMaterial, bp::bases< OSG::SimpleTexturedMaterialBase >, OSG::SimpleTexturedMaterial::ObjRecPtr, boost::noncopyable > SimpleTexturedMaterial_exposer_t;
        SimpleTexturedMaterial_exposer_t SimpleTexturedMaterial_exposer = SimpleTexturedMaterial_exposer_t( "SimpleTexturedMaterial", bp::no_init );
        bp::scope SimpleTexturedMaterial_scope( SimpleTexturedMaterial_exposer );
        { //::OSG::SimpleTexturedMaterial::changed
        
            typedef void ( ::OSG::SimpleTexturedMaterial::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SimpleTexturedMaterial_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SimpleTexturedMaterial::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::SimpleTexturedMaterial::dump
        
            typedef void ( ::OSG::SimpleTexturedMaterial::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SimpleTexturedMaterial_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SimpleTexturedMaterial::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::SimpleTexturedMaterial::imageChanged
        
            typedef void ( ::OSG::SimpleTexturedMaterial::*imageChanged_function_type )(  ) ;
            
            SimpleTexturedMaterial_exposer.def( 
                "imageChanged"
                , imageChanged_function_type( &::OSG::SimpleTexturedMaterial::imageChanged ) );
        
        }
        { //::OSG::SimpleTexturedMaterial::isTransparent
        
            typedef bool ( ::OSG::SimpleTexturedMaterial::*isTransparent_function_type )(  ) const;
            
            SimpleTexturedMaterial_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::SimpleTexturedMaterial::isTransparent ) );
        
        }
        { //::OSG::SimpleTexturedMaterial::rebuildState
        
            typedef void ( ::OSG::SimpleTexturedMaterial::*rebuildState_function_type )(  ) ;
            
            SimpleTexturedMaterial_exposer.def( 
                "rebuildState"
                , rebuildState_function_type( &::OSG::SimpleTexturedMaterial::rebuildState ) );
        
        }
        pyopensg::register_transit< OSG::SimpleTexturedMaterial >::execute();
        bp::implicitly_convertible< OSG::SimpleTexturedMaterial::ObjRecPtr, OSG::SimpleTexturedMaterial* >();
        bp::implicitly_convertible< OSG::SimpleTexturedMaterial::ObjRecPtr, OSG::SimpleTexturedMaterial::ObjCPtr >();
        bp::implicitly_convertible< OSG::SimpleTexturedMaterial::ObjRecPtr, OSG::SimpleMaterial* >();
        bp::implicitly_convertible< OSG::SimpleTexturedMaterial::ObjRecPtr, OSG::SimpleMaterial::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SimpleTexturedMaterial::ObjRecPtr, OSG::SimpleMaterial::ObjCPtr>();
    }

}
