#include <stdio.h>

int main(){
	char isim[20];
	printf("Lutfen isminizi giriniz:");
	scanf("%s", &isim);
	char soyisim[20];
	printf("\nLutfen soyisminizi giriniz:");
	scanf("%s", &soyisim);
	int yas;
	printf("\nLutfen yasinizi giriniz:");
	scanf("%d", &yas);
	if(yas>= 18){
		printf("Ehliyet alabilirsiniz");
	}
	else{
		printf("Ehliyet alamazsiniz");
	}
	
	return 0;
	
	
	
	
}
