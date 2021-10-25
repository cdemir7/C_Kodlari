#include <stdio.h>

int main(){
	int alinacakSayi;
	int alinacakIkinciSayi;
	int carpmaIslemi;
	int bolmeIslemi;
	printf("Bir sayi giriniz:");
	scanf("%d",&alinacakSayi);
	printf("Ikinci bir sayi giriniz:");
	scanf("%d",&alinacakIkinciSayi);
	carpmaIslemi = alinacakSayi*alinacakIkinciSayi;
	printf("Girdiginiz sayilarin carpýmý:%d", carpmaIslemi);
	bolmeIslemi = alinacakSayi/alinacakIkinciSayi;
	printf("\nGirdiginiz sayilarin bolumu:%d", bolmeIslemi);
	
	return 0;
	
}
