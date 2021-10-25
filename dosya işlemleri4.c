#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *belge;
	char karakter[50];
	
	belge=fopen("C:\\Users\\Lenovo\\Desktop\\bilgi.txt","r");
	fgets(karakter,50,belge);
	puts(karakter);
	fclose(belge);
	return 0;
}

