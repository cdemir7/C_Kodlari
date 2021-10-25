// Cube a variable using pass-by-value
#include <stdio.h>

int cubeByValue( int n ); //prototype

// function main begins program execution
int main( void ){
	int number = 5;
	printf( "The original value of number is %d\n", number );
	
	number = cubeByValue( number );
	printf( "The new value of number is %d\n", number );
	
	return 0;
}

int cubeByValue( int n ){
	return n * n * n;
}
