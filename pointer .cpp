// Using subscripting and pointer notations with arrays.
#include <stdio.h>
#define ARRAY_SIZE 4

int main( void ){
	
	int b [] = { 10, 20, 30, 40 };
	int *bPtr = b;
	
	size_t i;
	size_t oset;
	
	for( i = 0; i < ARRAY_SIZE; i++ ){
		printf( "b[ %u ] = %d\n", i, b[ i ] );
		
		for( oset = 0; oset < ARRAY_SIZE; oset++ ){
			printf( "*( b + %u ) = %d\n", oset, *( b + oset ) );
			
			for( i = 0; i < ARRAY_SIZE; i ++ ){
				printf( "bPtr[ %u ] = %d\n", i, bPtr[ i ] );
				
				for( oset = 0; oset < ARRAY_SIZE; oset++ ){
					printf( "*( bPtr + %u ) = %d\n", oset, *( bPtr + oset ) );
					
				}
			}
		}
	}
	
	return 0;
	
	
}
