#include <stdio.h>
#include "ooc.h"

int main ( int argc, char * argv[] )
{
	id myObject = malloc( sizeof( id ) ) ;
	myObject->isa = &rootClass ;
	printf( "myObject->isa->name = %s\n", myObject->isa->name ) ;
	
	return 0 ;
}