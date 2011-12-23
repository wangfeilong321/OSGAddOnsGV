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
#include "OSGCluster_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MultiDisplayWindow.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_MultiDisplayWindow_class(){

    { //::OSG::MultiDisplayWindow
        typedef bp::class_< OSG::MultiDisplayWindow, bp::bases< OSG::MultiDisplayWindowBase >, OSG::MultiDisplayWindow::ObjRecPtr, boost::noncopyable > MultiDisplayWindow_exposer_t;
        MultiDisplayWindow_exposer_t MultiDisplayWindow_exposer = MultiDisplayWindow_exposer_t( "MultiDisplayWindow", bp::no_init );
        bp::scope MultiDisplayWindow_scope( MultiDisplayWindow_exposer );
        { //::OSG::MultiDisplayWindow::changed
        
            typedef void ( ::OSG::MultiDisplayWindow::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            MultiDisplayWindow_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::MultiDisplayWindow::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::MultiDisplayWindow::dump
        
            typedef void ( ::OSG::MultiDisplayWindow::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            MultiDisplayWindow_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::MultiDisplayWindow::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::MultiDisplayWindow >::execute();
        bp::implicitly_convertible< OSG::MultiDisplayWindow::ObjRecPtr, OSG::MultiDisplayWindow* >();
        bp::implicitly_convertible< OSG::MultiDisplayWindow::ObjRecPtr, OSG::MultiDisplayWindow::ObjCPtr >();
        bp::implicitly_convertible< OSG::MultiDisplayWindow::ObjRecPtr, OSG::ClusterWindow* >();
        bp::implicitly_convertible< OSG::MultiDisplayWindow::ObjRecPtr, OSG::ClusterWindow::ObjRecPtr >();
        bp::implicitly_convertible<OSG::MultiDisplayWindow::ObjRecPtr, OSG::ClusterWindow::ObjCPtr>();
    }

}
