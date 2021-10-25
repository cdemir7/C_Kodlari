#include <stdio.h>

void printCharacters( char *sPtr);

int main( void ){
	
	char string [] = "print characters of a string";
	puts( "e string is:" );
	printCharacters( string );
	puts( "" );
	
	return 0;
}

void printCharacters( char *sPtr ){
	for( ; *sPtr != '\0'; ++sPtr ){
		printf( "%c", *sPtr );
	}
}
