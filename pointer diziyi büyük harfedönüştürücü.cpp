// non-constant pointer to non-constant data
#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr ); // prototype

// function main begins program execution
int main( void ){
	char string [] = "cHaRaCters and $32.98";
	printf( "e string before conversion is: %s\n", string );
	
	convertToUppercase( string );
	printf( "e string after conversion is :%s\n", string );
	
	return 0;
}

void convertToUppercase( char *sPtr ){
	while( *sPtr != '\0' ){
		*sPtr = toupper( *sPtr );
		sPtr = sPtr + 1;
	}
}


