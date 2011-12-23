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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PerfMonitorForeground.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PerfMonitorForeground_class(){

    { //::OSG::PerfMonitorForeground
        typedef bp::class_< OSG::PerfMonitorForeground, bp::bases< OSG::PerfMonitorForegroundBase >, OSG::PerfMonitorForeground::ObjRecPtr, boost::noncopyable > PerfMonitorForeground_exposer_t;
        PerfMonitorForeground_exposer_t PerfMonitorForeground_exposer = PerfMonitorForeground_exposer_t( "PerfMonitorForeground", bp::no_init );
        bp::scope PerfMonitorForeground_scope( PerfMonitorForeground_exposer );
        bp::enum_< OSG::PerfMonitorForeground::Mode>("Mode")
            .value("Text", OSG::PerfMonitorForeground::Text)
            .value("PercentLines", OSG::PerfMonitorForeground::PercentLines)
            .value("PercentTotalLines", OSG::PerfMonitorForeground::PercentTotalLines)
            .value("MaxLines", OSG::PerfMonitorForeground::MaxLines)
            .value("ThreadTiming", OSG::PerfMonitorForeground::ThreadTiming)
            .value("MODE_END", OSG::PerfMonitorForeground::MODE_END)
            .export_values()
            ;
        { //::OSG::PerfMonitorForeground::changed
        
            typedef void ( ::OSG::PerfMonitorForeground::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PerfMonitorForeground_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PerfMonitorForeground::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::PerfMonitorForeground::cycleMode
        
            typedef void ( ::OSG::PerfMonitorForeground::*cycleMode_function_type )( int ) ;
            
            PerfMonitorForeground_exposer.def( 
                "cycleMode"
                , cycleMode_function_type( &::OSG::PerfMonitorForeground::cycleMode )
                , ( bp::arg("increment")=(int)(1) ) );
        
        }
        { //::OSG::PerfMonitorForeground::dump
        
            typedef void ( ::OSG::PerfMonitorForeground::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PerfMonitorForeground_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PerfMonitorForeground::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::PerfMonitorForeground >::execute();
        bp::implicitly_convertible< OSG::PerfMonitorForeground::ObjRecPtr, OSG::PerfMonitorForeground* >();
        bp::implicitly_convertible< OSG::PerfMonitorForeground::ObjRecPtr, OSG::PerfMonitorForeground::ObjCPtr >();
        bp::implicitly_convertible< OSG::PerfMonitorForeground::ObjRecPtr, OSG::Foreground* >();
        bp::implicitly_convertible< OSG::PerfMonitorForeground::ObjRecPtr, OSG::Foreground::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PerfMonitorForeground::ObjRecPtr, OSG::Foreground::ObjCPtr>();
    }

}
