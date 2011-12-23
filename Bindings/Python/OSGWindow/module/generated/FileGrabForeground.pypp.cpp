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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FileGrabForeground.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FileGrabForeground_class(){

    { //::OSG::FileGrabForeground
        typedef bp::class_< OSG::FileGrabForeground, bp::bases< OSG::FileGrabForegroundBase >, OSG::FileGrabForeground::ObjRecPtr, boost::noncopyable > FileGrabForeground_exposer_t;
        FileGrabForeground_exposer_t FileGrabForeground_exposer = FileGrabForeground_exposer_t( "FileGrabForeground", bp::no_init );
        bp::scope FileGrabForeground_scope( FileGrabForeground_exposer );
        { //::OSG::FileGrabForeground::changed
        
            typedef void ( ::OSG::FileGrabForeground::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            FileGrabForeground_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::FileGrabForeground::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::FileGrabForeground::dump
        
            typedef void ( ::OSG::FileGrabForeground::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            FileGrabForeground_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::FileGrabForeground::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::FileGrabForeground >::execute();
        bp::implicitly_convertible< OSG::FileGrabForeground::ObjRecPtr, OSG::FileGrabForeground* >();
        bp::implicitly_convertible< OSG::FileGrabForeground::ObjRecPtr, OSG::FileGrabForeground::ObjCPtr >();
        bp::implicitly_convertible< OSG::FileGrabForeground::ObjRecPtr, OSG::GrabForeground* >();
        bp::implicitly_convertible< OSG::FileGrabForeground::ObjRecPtr, OSG::GrabForeground::ObjRecPtr >();
        bp::implicitly_convertible<OSG::FileGrabForeground::ObjRecPtr, OSG::GrabForeground::ObjCPtr>();
    }

}
