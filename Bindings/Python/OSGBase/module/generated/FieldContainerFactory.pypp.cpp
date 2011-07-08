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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FieldContainerFactory.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct SingletonHolder_less__OSG_scope_FieldContainerFactoryBase__greater__wrapper : OSG::SingletonHolder< OSG::FieldContainerFactoryBase >, bp::wrapper< OSG::SingletonHolder< OSG::FieldContainerFactoryBase > > {

    static void init(  ){
        OSG::SingletonHolder< OSG::FieldContainerFactoryBase >::init(  );
    }

};

void register_FieldContainerFactory_class(){

    { //::OSG::SingletonHolder< OSG::FieldContainerFactoryBase >
        typedef bp::class_< SingletonHolder_less__OSG_scope_FieldContainerFactoryBase__greater__wrapper, boost::noncopyable > FieldContainerFactory_exposer_t;
        FieldContainerFactory_exposer_t FieldContainerFactory_exposer = FieldContainerFactory_exposer_t( "FieldContainerFactory", bp::no_init );
        bp::scope FieldContainerFactory_scope( FieldContainerFactory_exposer );
        { //::OSG::SingletonHolder< OSG::FieldContainerFactoryBase >::destroy
        
            typedef OSG::SingletonHolder< OSG::FieldContainerFactoryBase > exported_class_t;
            typedef bool ( *destroy_function_type )(  );
            
            FieldContainerFactory_exposer.def( 
                "destroy"
                , destroy_function_type( &::OSG::SingletonHolder< OSG::FieldContainerFactoryBase >::destroy ) );
        
        }
        { //::OSG::SingletonHolder< OSG::FieldContainerFactoryBase >::init
        
            typedef OSG::SingletonHolder< OSG::FieldContainerFactoryBase > exported_class_t;
            typedef void ( *init_function_type )(  );
            
            FieldContainerFactory_exposer.def( 
                "init"
                , init_function_type( &SingletonHolder_less__OSG_scope_FieldContainerFactoryBase__greater__wrapper::init ) );
        
        }
        { //::OSG::SingletonHolder< OSG::FieldContainerFactoryBase >::the
        
            typedef OSG::SingletonHolder< OSG::FieldContainerFactoryBase > exported_class_t;
            typedef ::OSG::FieldContainerFactoryBase * ( *the_function_type )(  );
            
            FieldContainerFactory_exposer.def( 
                "the"
                , the_function_type( &::OSG::SingletonHolder< OSG::FieldContainerFactoryBase >::the )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        FieldContainerFactory_exposer.staticmethod( "destroy" );
        FieldContainerFactory_exposer.staticmethod( "init" );
        FieldContainerFactory_exposer.staticmethod( "the" );
    }

}
