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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleTextForeground.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SimpleTextForeground_class(){

    { //::OSG::SimpleTextForeground
        typedef bp::class_< OSG::SimpleTextForeground, bp::bases< OSG::SimpleTextForegroundBase >, OSG::SimpleTextForeground::ObjRecPtr, boost::noncopyable > SimpleTextForeground_exposer_t;
        SimpleTextForeground_exposer_t SimpleTextForeground_exposer = SimpleTextForeground_exposer_t( "SimpleTextForeground", bp::no_init );
        bp::scope SimpleTextForeground_scope( SimpleTextForeground_exposer );
        bp::enum_< OSG::SimpleTextForeground::HorizontalAlignE>("HorizontalAlignE")
            .value("Left", OSG::SimpleTextForeground::Left)
            .value("Middle", OSG::SimpleTextForeground::Middle)
            .value("Right", OSG::SimpleTextForeground::Right)
            .export_values()
            ;
        bp::enum_< OSG::SimpleTextForeground::VerticalAlignE>("VerticalAlignE")
            .value("Top", OSG::SimpleTextForeground::Top)
            .value("Center", OSG::SimpleTextForeground::Center)
            .value("Bottom", OSG::SimpleTextForeground::Bottom)
            .export_values()
            ;
        { //::OSG::SimpleTextForeground::addLine
        
            typedef void ( ::OSG::SimpleTextForeground::*addLine_function_type )( ::std::string const & ) ;
            
            SimpleTextForeground_exposer.def( 
                "addLine"
                , addLine_function_type( &::OSG::SimpleTextForeground::addLine )
                , ( bp::arg("szText") ) );
        
        }
        { //::OSG::SimpleTextForeground::changed
        
            typedef void ( ::OSG::SimpleTextForeground::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SimpleTextForeground_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SimpleTextForeground::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::SimpleTextForeground::clear
        
            typedef void ( ::OSG::SimpleTextForeground::*clear_function_type )(  ) ;
            
            SimpleTextForeground_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::SimpleTextForeground::clear ) );
        
        }
        { //::OSG::SimpleTextForeground::dump
        
            typedef void ( ::OSG::SimpleTextForeground::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SimpleTextForeground_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SimpleTextForeground::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::SimpleTextForeground >::execute();
        bp::implicitly_convertible< OSG::SimpleTextForeground::ObjRecPtr, OSG::SimpleTextForeground* >();
        bp::implicitly_convertible< OSG::SimpleTextForeground::ObjRecPtr, OSG::SimpleTextForeground::ObjCPtr >();
        bp::implicitly_convertible< OSG::SimpleTextForeground::ObjRecPtr, OSG::Foreground* >();
        bp::implicitly_convertible< OSG::SimpleTextForeground::ObjRecPtr, OSG::Foreground::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SimpleTextForeground::ObjRecPtr, OSG::Foreground::ObjCPtr>();
    }

}
