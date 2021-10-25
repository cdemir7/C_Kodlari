#include <stdio.h>
#include <string.h>

void kullaniciBilgileri(char isim[20]){
	
	printf("Kullanici adiniz:%s",isim);
	
}

main(){
	
	char isim[20];
	printf("Lutfen kullanici adinizi giriniz:");
	scanf("%s",&isim);
	
	kullaniciBilgileri(isim);
	
	return 0;



 	
}
