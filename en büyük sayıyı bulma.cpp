#include <stdio.h>

int main(){
	
	int sayi1;
	int sayi2;
	int sayi3;
	printf("Birinci sayiyi giriniz:");
	scanf("%d", &sayi1);
	printf("Ikinci  sayiyi giriniz:");
	scanf("%d", &sayi2);
	printf("Ucüncü sayiyi giriniz:");
	scanf("%d", &sayi3);
	int maxsayi;
	sayi1=maxsayi;
	if(sayi2>maxsayi){
		maxsayi=sayi2;
	}
	else{
		maxsayi==sayi1;
	}
	if(sayi3>maxsayi){
		maxsayi=sayi3;
	}
	else{
		maxsayi==sayi2;
	}
	printf("en büyük sayi:%d",maxsayi);
	return 0;
	
}
