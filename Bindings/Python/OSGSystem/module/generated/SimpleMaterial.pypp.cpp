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
#include "SimpleMaterial.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SimpleMaterial_class(){

    { //::OSG::SimpleMaterial
        typedef bp::class_< OSG::SimpleMaterial, bp::bases< OSG::SimpleMaterialBase >, OSG::SimpleMaterial::ObjRecPtr, boost::noncopyable > SimpleMaterial_exposer_t;
        SimpleMaterial_exposer_t SimpleMaterial_exposer = SimpleMaterial_exposer_t( "SimpleMaterial", bp::no_init );
        bp::scope SimpleMaterial_scope( SimpleMaterial_exposer );
        { //::OSG::SimpleMaterial::changed
        
            typedef void ( ::OSG::SimpleMaterial::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SimpleMaterial_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SimpleMaterial::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::SimpleMaterial::dump
        
            typedef void ( ::OSG::SimpleMaterial::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SimpleMaterial_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SimpleMaterial::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::SimpleMaterial::fill
        
            typedef void ( ::OSG::SimpleMaterial::*fill_function_type )( ::OSG::ChunkBlock * ) ;
            
            SimpleMaterial_exposer.def( 
                "fill"
                , fill_function_type( &::OSG::SimpleMaterial::fill )
                , ( bp::arg("pBlock") ) );
        
        }
        { //::OSG::SimpleMaterial::isTransparent
        
            typedef bool ( ::OSG::SimpleMaterial::*isTransparent_function_type )(  ) const;
            
            SimpleMaterial_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::SimpleMaterial::isTransparent ) );
        
        }
        { //::OSG::SimpleMaterial::rebuildState
        
            typedef void ( ::OSG::SimpleMaterial::*rebuildState_function_type )(  ) ;
            
            SimpleMaterial_exposer.def( 
                "rebuildState"
                , rebuildState_function_type( &::OSG::SimpleMaterial::rebuildState ) );
        
        }
        pyopensg::register_transit< OSG::SimpleMaterial >::execute();
        bp::implicitly_convertible< OSG::SimpleMaterial::ObjRecPtr, OSG::SimpleMaterial* >();
        bp::implicitly_convertible< OSG::SimpleMaterial::ObjRecPtr, OSG::SimpleMaterial::ObjCPtr >();
        bp::implicitly_convertible< OSG::SimpleMaterial::ObjRecPtr, OSG::ChunkMaterial* >();
        bp::implicitly_convertible< OSG::SimpleMaterial::ObjRecPtr, OSG::ChunkMaterial::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SimpleMaterial::ObjRecPtr, OSG::ChunkMaterial::ObjCPtr>();
    }

}
