#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	char isim[20];
	char soyIsim[20];
	int secim;
	int sayi;
	int randomSayi=1+rand()%5;
	printf("Sansli cekilis uygulamamiza hosgeldiniz");
	printf("\nLutfen isminizi giriniz:");
	scanf("%s",&isim);
	printf("\nLutfen soyisminizi giriniz:");
	scanf("%s",&soyIsim);
	printf("\nAsagidaki islemlerden birini seciniz:\n[1]-Sansli Cekilisi Dene\n[2]-Kullanici bilgilerini goster");
	printf("\nLutfen birini seciniz:");
	scanf("%d",&secim);
	if(secim==1){
		printf("Su an sansli cekilis uygulamasindasiniz lutfen 1 le 5 arasinda bir sayi giriniz:");
		scanf("%d",&sayi);
	 srand(time(NULL));
    
	   if(sayi==randomSayi){
		printf("Girdiginiz sayi:%d\nCekilisteki sayi:%d", sayi,randomSayi);
		printf("\nTebrikler");
	   }
	   else{
		printf("\nGirdiginiz sayi:%d\nCekilisteki sayi:%d", sayi,randomSayi);
		printf("\nTekrar deneyiniz");
	   }
    } 
	if(secim == 2){
		printf("Kullanici adiniz:%s\nSoyisim:%s",isim ,soyIsim);
	}
	
	return 0; 
}
