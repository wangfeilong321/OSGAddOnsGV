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

#include "boost/python.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SceneFileHandler.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct SingletonHolder_less__OSG_scope_SceneFileHandlerBase__greater__wrapper : OSG::SingletonHolder< OSG::SceneFileHandlerBase >, bp::wrapper< OSG::SingletonHolder< OSG::SceneFileHandlerBase > > {

    static void init(  ){
        OSG::SingletonHolder< OSG::SceneFileHandlerBase >::init(  );
    }

};

void register_SceneFileHandler_class(){

    { //::OSG::SingletonHolder< OSG::SceneFileHandlerBase >
        typedef bp::class_< SingletonHolder_less__OSG_scope_SceneFileHandlerBase__greater__wrapper, boost::noncopyable > SceneFileHandler_exposer_t;
        SceneFileHandler_exposer_t SceneFileHandler_exposer = SceneFileHandler_exposer_t( "SceneFileHandler", bp::no_init );
        bp::scope SceneFileHandler_scope( SceneFileHandler_exposer );
        { //::OSG::SingletonHolder< OSG::SceneFileHandlerBase >::destroy
        
            typedef OSG::SingletonHolder< OSG::SceneFileHandlerBase > exported_class_t;
            typedef bool ( *destroy_function_type )(  );
            
            SceneFileHandler_exposer.def( 
                "destroy"
                , destroy_function_type( &::OSG::SingletonHolder< OSG::SceneFileHandlerBase >::destroy ) );
        
        }
        { //::OSG::SingletonHolder< OSG::SceneFileHandlerBase >::init
        
            typedef OSG::SingletonHolder< OSG::SceneFileHandlerBase > exported_class_t;
            typedef void ( *init_function_type )(  );
            
            SceneFileHandler_exposer.def( 
                "init"
                , init_function_type( &SingletonHolder_less__OSG_scope_SceneFileHandlerBase__greater__wrapper::init ) );
        
        }
        { //::OSG::SingletonHolder< OSG::SceneFileHandlerBase >::the
        
            typedef OSG::SingletonHolder< OSG::SceneFileHandlerBase > exported_class_t;
            typedef ::OSG::SceneFileHandlerBase * ( *the_function_type )(  );
            
            SceneFileHandler_exposer.def( 
                "the"
                , the_function_type( &::OSG::SingletonHolder< OSG::SceneFileHandlerBase >::the )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        SceneFileHandler_exposer.staticmethod( "destroy" );
        SceneFileHandler_exposer.staticmethod( "init" );
        SceneFileHandler_exposer.staticmethod( "the" );
    }

}
