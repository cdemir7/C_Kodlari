// Using the & and * pointer operators
#include <stdio.h>
// function main begins program execution
int main( void ){
	
	int a = 5; // a is an integer
	int *aPtr = &a; // aPtr is a pointer to an integer
	
	printf( "The address of a is %p\n", &a );
	printf( "The value of aPtr is %p\n", aPtr );
	
	printf ("The value of a is %d\n", a );
	printf( "The value of *aPtr is:%d\n", *aPtr );
	
	printf( "&*aPtr:%p\n", &*aPtr );
	printf( "*&aPtr:%p\n", *&aPtr );
	
	return 0;
} // end main
