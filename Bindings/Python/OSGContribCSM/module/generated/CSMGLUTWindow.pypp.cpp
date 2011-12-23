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
#include "CSMGLUTWindow.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CSMGLUTWindow_class(){

    { //::OSG::CSMGLUTWindow
        typedef bp::class_< OSG::CSMGLUTWindow, bp::bases< OSG::CSMGLUTWindowBase >, OSG::CSMGLUTWindow::ObjRecPtr, boost::noncopyable > CSMGLUTWindow_exposer_t;
        CSMGLUTWindow_exposer_t CSMGLUTWindow_exposer = CSMGLUTWindow_exposer_t( "CSMGLUTWindow", bp::no_init );
        bp::scope CSMGLUTWindow_scope( CSMGLUTWindow_exposer );
        { //::OSG::CSMGLUTWindow::changed
        
            typedef void ( ::OSG::CSMGLUTWindow::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CSMGLUTWindow_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CSMGLUTWindow::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CSMGLUTWindow::dump
        
            typedef void ( ::OSG::CSMGLUTWindow::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CSMGLUTWindow_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CSMGLUTWindow::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CSMGLUTWindow::init
        
            typedef bool ( ::OSG::CSMGLUTWindow::*init_function_type )(  ) ;
            
            CSMGLUTWindow_exposer.def( 
                "init"
                , init_function_type( &::OSG::CSMGLUTWindow::init ) );
        
        }
        pyopensg::register_transit< OSG::CSMGLUTWindow >::execute();
        bp::implicitly_convertible< OSG::CSMGLUTWindow::ObjRecPtr, OSG::CSMGLUTWindow* >();
        bp::implicitly_convertible< OSG::CSMGLUTWindow::ObjRecPtr, OSG::CSMGLUTWindow::ObjCPtr >();
        bp::implicitly_convertible< OSG::CSMGLUTWindow::ObjRecPtr, OSG::CSMWindow* >();
        bp::implicitly_convertible< OSG::CSMGLUTWindow::ObjRecPtr, OSG::CSMWindow::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CSMGLUTWindow::ObjRecPtr, OSG::CSMWindow::ObjCPtr>();
    }

}
