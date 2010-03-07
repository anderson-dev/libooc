#ifndef _OOC_H_
#define _OOC_H_
#endif

typedef struct ooc_class
{
	struct ooc_class *isa ;
	
//	Class super_class ;
	const char *name ;
//	long version ;
//	long info ;
//	long instance_size ;
//	struct ooc_ivar_list *ivars ;
//	struct ooc_method_list **methodLists ;
//	struct ooc_cache *cache ;
//	struct ooc_protocol_list *protocols ;
} *Class ;

typedef struct ooc_object
{
	Class isa ;
} *id ;

struct ooc_class rootClass = {&rootClass, "rootClass"} ;
//typedef struct ooc_method *Method ;
//typedef struct ooc_ivar *Ivar ;
//typedef struct ooc_category *Category ;
//typedef struct ooc_property *ooc_property_t ;
