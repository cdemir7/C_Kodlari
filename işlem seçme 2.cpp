#include <stdio.h>

int main(){
	
	int alinacakSayi1;
	int alinacakSayi2;
	int secim;
	printf("Birinci sayiyi giriniz:");
	scanf("%d",&alinacakSayi1);
	printf("Ikinici sayiyi giriniz:");
	scanf("%d",&alinacakSayi2);
	
	
	printf("Dort islemden birini seciniz:\n[1]-Toplamaiþlemi\n[2]-Cikarma islemi\n[3]-Carpma islemi\n[4]-Bolme islemi");
	printf("\nLutfen bir secim yapiniz:");
	scanf("%d",&secim);
	
	if(secim == 1){
		printf("Toplama islemi yaptiniz:%d", alinacakSayi1+alinacakSayi2);
	}
	else if(secim == 2){
		printf("Cikarma islemi yaptiniz:%d", alinacakSayi1-alinacakSayi2);
	}
	else if(secim == 3){
		printf("Carpma islemi yaptiniz:%d", alinacakSayi1*alinacakSayi2);
	}
	else if(secim == 4){
		printf("Bolme islemi yaptiniz:%d", alinacakSayi1/alinacakSayi2);
	}
	else{
		printf("Hatali sayi girdiniz.\nProgrami tekrar calistiriniz.");
	}
	return 0;
	
}
