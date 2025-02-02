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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "QuadTreeTerrain.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_QuadTreeTerrain_class(){

    { //::OSG::QuadTreeTerrain
        typedef bp::class_< OSG::QuadTreeTerrain, bp::bases< OSG::QuadTreeTerrainBase >, OSG::QuadTreeTerrain::ObjRecPtr, boost::noncopyable > QuadTreeTerrain_exposer_t;
        QuadTreeTerrain_exposer_t QuadTreeTerrain_exposer = QuadTreeTerrain_exposer_t( "QuadTreeTerrain", bp::no_init );
        bp::scope QuadTreeTerrain_scope( QuadTreeTerrain_exposer );
        { //::OSG::QuadTreeTerrain::changed
        
            typedef void ( ::OSG::QuadTreeTerrain::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            QuadTreeTerrain_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::QuadTreeTerrain::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::QuadTreeTerrain::doRenderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::QuadTreeTerrain::*doRenderEnter_function_type )( ::OSG::RenderAction * ) ;
            
            QuadTreeTerrain_exposer.def( 
                "doRenderEnter"
                , doRenderEnter_function_type( &::OSG::QuadTreeTerrain::doRenderEnter )
                , ( bp::arg("ra") ) );
        
        }
        { //::OSG::QuadTreeTerrain::dump
        
            typedef void ( ::OSG::QuadTreeTerrain::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            QuadTreeTerrain_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::QuadTreeTerrain::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::QuadTreeTerrain >::execute();
        bp::implicitly_convertible< OSG::QuadTreeTerrain::ObjRecPtr, OSG::QuadTreeTerrain* >();
        bp::implicitly_convertible< OSG::QuadTreeTerrain::ObjRecPtr, OSG::QuadTreeTerrain::ObjCPtr >();
        bp::implicitly_convertible< OSG::QuadTreeTerrain::ObjRecPtr, OSG::Geometry* >();
        bp::implicitly_convertible< OSG::QuadTreeTerrain::ObjRecPtr, OSG::Geometry::ObjRecPtr >();
        bp::implicitly_convertible<OSG::QuadTreeTerrain::ObjRecPtr, OSG::Geometry::ObjCPtr>();
    }

}
