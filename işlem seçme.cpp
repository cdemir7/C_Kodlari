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
	switch(secim){
		case 1:printf("Birinci islemi sectiniz\nToplama isleminin sonucu:%d",alinacakSayi1+alinacakSayi2); break;
		case 2:printf("Ikinci islemi sectiniz\nCikarma isleminin sonucu:%d",alinacakSayi1-alinacakSayi2); break;
		case 3:printf("Ucuncu islemi sectiniz\nCarpma isleminin sonucu:%d",alinacakSayi1*alinacakSayi2); break;
		case 4:printf("Dorduncu islemi sectiniz\nBolme isleminin sonucu:%d",alinacakSayi1/alinacakSayi2); break;
		default:printf("Hatali sayi girdiniz\nProgrami yeniden calistiriniz."); break;
	}
	
	
	return 0;
	
}
