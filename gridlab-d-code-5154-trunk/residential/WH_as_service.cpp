#include "WH_as_service.h"


#include <memory>
//#include <staff/utils/Log.h>
//#include <staff/common/logoperators.h>
//#include <staff/common/Exception.h>
//#include <staff/client/ServiceFactory.h>
//#include "controllerservice.h"

#include "WaterHeaterSvc.h"

using namespace std;

//#include "soapwebServiceSoap12BindingProxy.h"
//#include "StdAfx.h"
 //std::auto_ptr< ::WHeater > pWHeater(::staff::ServiceFactory::Inst().GetService< ::WHeater >());

  //  STAFF_ASSERT(pWHeater.get(), "Cannot get client for service WHeater!");


ref class GlobalObjects {
public:
   static WaterHeaterSvc::WHeaterImpl^ proxy = gcnew WaterHeaterSvc::WHeaterImpl();   
}; 

CLASS* WH_as_service::oclass = NULL;

WH_as_service::WH_as_service(MODULE *module)
{
	if (oclass==NULL)
	{
		oclass = gl_register_class(module,"WH_as_service",sizeof(WH_as_service),PC_BOTTOMUP|PC_AUTOLOCK);
		if (oclass==NULL)
			GL_THROW("unable to register object class implemented by %s", __FILE__);

		if (gl_publish_variable(oclass,
				PT_double,"a",PADDR(a),PT_DESCRIPTION, "Total ",
				NULL)<1) 
			GL_THROW("unable to publish properties in %s",__FILE__);
		
		memset(this,0,sizeof(WH_as_service));
	}
}

int WH_as_service::create()
{

	
	return SUCCESS;
}

int WH_as_service::init(OBJECT *parent)
{
	a=9;
	return SUCCESS;
}

int WH_as_service::isa(char *classname)
{
	return strcmp(classname,"WH_as_service")==0;
}

TIMESTAMP WH_as_service::sync(TIMESTAMP t0, TIMESTAMP t1)
{


	int WHsyncResult = GlobalObjects :: proxy -> WHsync(1 , 1 , 4 , 110 , 120 , 3.3 , 0.7 , 20 , 4 );
	printf("         %d", WHsyncResult );
		return TS_NEVER;
}

//////////////////////////////////////////////////////////////////////////
// IMPLEMENTATION OF CORE LINKAGE
//////////////////////////////////////////////////////////////////////////

EXPORT int create_WH_as_service(OBJECT **obj, OBJECT *parent)
{
	try
	{
		*obj = gl_create_object(WH_as_service::oclass);
		if (*obj!=NULL)
		{
			WH_as_service *my = OBJECTDATA(*obj,WH_as_service);
			gl_set_parent(*obj,parent);
			return my->create();
		}
	}
	catch (const char *msg)
	{
		gl_error("create_WH_as_service: %s", msg);
		return 0;
	}
	return 1;
}

EXPORT int init_WH_as_service(OBJECT *obj, OBJECT *parent)
{
	try
	{
		if (obj!=NULL){
			return OBJECTDATA(obj,WH_as_service)->init(parent);
		}
	}
	catch (const char *msg)
	{
		char name[64];
		gl_error("init_WH_as_service(obj=%s): %s", gl_name(obj,name,sizeof(name)), msg);
		return 0;
	}
	return 1;
}

EXPORT int isa_WH_as_service(OBJECT *obj, char *classname)
{
	if(obj != 0 && classname != 0){
		return OBJECTDATA(obj,WH_as_service)->isa(classname);
	} else {
		return 0;
	}
}

EXPORT TIMESTAMP sync_WH_as_service(OBJECT *obj, TIMESTAMP t1, PASSCONFIG pass)
{
	TIMESTAMP t2 = TS_NEVER;
	WH_as_service *my = OBJECTDATA(obj,WH_as_service);
	switch (pass) {
	case PC_BOTTOMUP:
		t2 = my->sync(obj->clock,t1);
		obj->clock = t1;
		break;
	default:
		break;
	}
	return t2;
}