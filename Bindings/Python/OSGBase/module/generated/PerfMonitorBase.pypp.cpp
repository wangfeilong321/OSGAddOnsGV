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
#include "__call_policies.pypp.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PerfMonitorBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

static void updateFrame_77309227c6b2effa215fc7192911c215( ::OSG::PerfMonitorBase & inst ){
    PyThreadState* _save;
    _save = PyEval_SaveThread();
    try
    {
    inst.updateFrame();
        PyEval_RestoreThread(_save);
    }
    catch(...)
    {
        PyEval_RestoreThread(_save);
        throw;
    }
}

void register_PerfMonitorBase_class(){

    { //::OSG::PerfMonitorBase
        typedef bp::class_< OSG::PerfMonitorBase, boost::noncopyable > PerfMonitorBase_exposer_t;
        PerfMonitorBase_exposer_t PerfMonitorBase_exposer = PerfMonitorBase_exposer_t( "PerfMonitorBase", bp::no_init );
        bp::scope PerfMonitorBase_scope( PerfMonitorBase_exposer );
        bp::enum_< OSG::PerfMonitorBase::SampleType>("SampleType")
            .value("ENTER", OSG::PerfMonitorBase::ENTER)
            .value("EXIT", OSG::PerfMonitorBase::EXIT)
            .value("MARK", OSG::PerfMonitorBase::MARK)
            .value("METRIC", OSG::PerfMonitorBase::METRIC)
            .value("FRAME", OSG::PerfMonitorBase::FRAME)
            .value("LAST", OSG::PerfMonitorBase::LAST)
            .export_values()
            ;
        bp::class_< OSG::PerfMonitorBase::SampleData >( "SampleData", bp::init< >() )    
            .def( bp::init< OSG::UInt64, OSG::Real64, OSG::PerfMonitorBase::SampleType, std::string const &, bp::optional< OSG::Real32, std::string const & > >(( bp::arg("tid"), bp::arg("timestamp"), bp::arg("type"), bp::arg("name"), bp::arg("metricValue")=0.0, bp::arg("desc")="" )) )    
            .def( bp::self == bp::self )    
            .def_readwrite( "desc", &OSG::PerfMonitorBase::SampleData::desc )    
            .def_readwrite( "metric_value", &OSG::PerfMonitorBase::SampleData::metric_value )    
            .def_readwrite( "name", &OSG::PerfMonitorBase::SampleData::name )    
            .def_readwrite( "thread_id", &OSG::PerfMonitorBase::SampleData::thread_id )    
            .def_readwrite( "timestamp", &OSG::PerfMonitorBase::SampleData::timestamp )    
            .def_readwrite( "type", &OSG::PerfMonitorBase::SampleData::type );
        { //::OSG::PerfMonitorBase::enable
        
            typedef void ( ::OSG::PerfMonitorBase::*enable_function_type )( bool ) ;
            
            PerfMonitorBase_exposer.def( 
                "enable"
                , enable_function_type( &::OSG::PerfMonitorBase::enable )
                , ( bp::arg("val")=(bool)(true) ) );
        
        }
        { //::OSG::PerfMonitorBase::flushOutput
        
            typedef void ( ::OSG::PerfMonitorBase::*flushOutput_function_type )(  ) ;
            
            PerfMonitorBase_exposer.def( 
                "flushOutput"
                , flushOutput_function_type( &::OSG::PerfMonitorBase::flushOutput ) );
        
        }
        { //::OSG::PerfMonitorBase::getEnabled
        
            typedef bool ( ::OSG::PerfMonitorBase::*getEnabled_function_type )(  ) const;
            
            PerfMonitorBase_exposer.def( 
                "getEnabled"
                , getEnabled_function_type( &::OSG::PerfMonitorBase::getEnabled ) );
        
        }
        { //::OSG::PerfMonitorBase::getThreadId
        
            typedef ::OSG::UInt64 ( ::OSG::PerfMonitorBase::*getThreadId_function_type )(  ) const;
            
            PerfMonitorBase_exposer.def( 
                "getThreadId"
                , getThreadId_function_type( &::OSG::PerfMonitorBase::getThreadId ) );
        
        }
        { //::OSG::PerfMonitorBase::getTimeStampMs
        
            typedef ::OSG::Real64 ( ::OSG::PerfMonitorBase::*getTimeStampMs_function_type )(  ) ;
            
            PerfMonitorBase_exposer.def( 
                "getTimeStampMs"
                , getTimeStampMs_function_type( &::OSG::PerfMonitorBase::getTimeStampMs ) );
        
        }
        { //::OSG::PerfMonitorBase::printSamples
        
            typedef void ( ::OSG::PerfMonitorBase::*printSamples_function_type )(  ) ;
            
            PerfMonitorBase_exposer.def( 
                "printSamples"
                , printSamples_function_type( &::OSG::PerfMonitorBase::printSamples ) );
        
        }
        { //::OSG::PerfMonitorBase::reset
        
            typedef void ( ::OSG::PerfMonitorBase::*reset_function_type )(  ) ;
            
            PerfMonitorBase_exposer.def( 
                "reset"
                , reset_function_type( &::OSG::PerfMonitorBase::reset ) );
        
        }
        { //::OSG::PerfMonitorBase::sample
        
            typedef void ( ::OSG::PerfMonitorBase::*sample_function_type )( ::OSG::PerfMonitorBase::SampleType,::std::string const &,::OSG::Real32,::std::string const & ) ;
            
            PerfMonitorBase_exposer.def( 
                "sample"
                , sample_function_type( &::OSG::PerfMonitorBase::sample )
                , ( bp::arg("sampleType"), bp::arg("name"), bp::arg("metricValue")=0.0, bp::arg("desc")="" ) );
        
        }
        { //::OSG::PerfMonitorBase::setOutputFile
        
            typedef void ( ::OSG::PerfMonitorBase::*setOutputFile_function_type )( ::std::string const & ) ;
            
            PerfMonitorBase_exposer.def( 
                "setOutputFile"
                , setOutputFile_function_type( &::OSG::PerfMonitorBase::setOutputFile )
                , ( bp::arg("filename") ) );
        
        }
        { //::OSG::PerfMonitorBase::setOutputFlushRate
        
            typedef void ( ::OSG::PerfMonitorBase::*setOutputFlushRate_function_type )( ::OSG::UInt64 ) ;
            
            PerfMonitorBase_exposer.def( 
                "setOutputFlushRate"
                , setOutputFlushRate_function_type( &::OSG::PerfMonitorBase::setOutputFlushRate )
                , ( bp::arg("rate") ) );
        
        }
        { //::OSG::PerfMonitorBase::updateFrame
        
            typedef void ( *updateFrame_function_type )( ::OSG::PerfMonitorBase & );
            
            PerfMonitorBase_exposer.def( 
                "updateFrame"
                , updateFrame_function_type( &updateFrame_77309227c6b2effa215fc7192911c215 ) );
        
        }
        PerfMonitorBase_exposer.def_readwrite( "mCurrentFrameNum", &OSG::PerfMonitorBase::mCurrentFrameNum );
        PerfMonitorBase_exposer.def_readwrite( "mDataLock", &OSG::PerfMonitorBase::mDataLock );
        PerfMonitorBase_exposer.def_readwrite( "mEnabled", &OSG::PerfMonitorBase::mEnabled );
        PerfMonitorBase_exposer.def_readwrite( "mFlushingRate", &OSG::PerfMonitorBase::mFlushingRate );
        PerfMonitorBase_exposer.def_readwrite( "mSamples", &OSG::PerfMonitorBase::mSamples );
        PerfMonitorBase_exposer.def_readwrite( "mStartTimeMs", &OSG::PerfMonitorBase::mStartTimeMs );
    }

}
