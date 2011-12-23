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
#include "SkyBackground.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SkyBackground_class(){

    { //::OSG::SkyBackground
        typedef bp::class_< OSG::SkyBackground, bp::bases< OSG::SkyBackgroundBase >, OSG::SkyBackground::ObjRecPtr, boost::noncopyable > SkyBackground_exposer_t;
        SkyBackground_exposer_t SkyBackground_exposer = SkyBackground_exposer_t( "SkyBackground", bp::no_init );
        bp::scope SkyBackground_scope( SkyBackground_exposer );
        { //::OSG::SkyBackground::changed
        
            typedef void ( ::OSG::SkyBackground::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SkyBackground_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SkyBackground::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::SkyBackground::clear
        
            typedef void ( ::OSG::SkyBackground::*clear_function_type )( ::OSG::DrawEnv * ) ;
            
            SkyBackground_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::SkyBackground::clear )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::SkyBackground::dump
        
            typedef void ( ::OSG::SkyBackground::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SkyBackground_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SkyBackground::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::SkyBackground >::execute();
        bp::implicitly_convertible< OSG::SkyBackground::ObjRecPtr, OSG::SkyBackground* >();
        bp::implicitly_convertible< OSG::SkyBackground::ObjRecPtr, OSG::SkyBackground::ObjCPtr >();
        bp::implicitly_convertible< OSG::SkyBackground::ObjRecPtr, OSG::Background* >();
        bp::implicitly_convertible< OSG::SkyBackground::ObjRecPtr, OSG::Background::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SkyBackground::ObjRecPtr, OSG::Background::ObjCPtr>();
    }

}
