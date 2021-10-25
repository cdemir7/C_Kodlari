#include<stdio.h>

main(){
	
	float sayi1;
	float sayi2;
	float sayi3;
	float aritmetikOrtalama;
	printf("Bir sayi giriniz:");
	scanf("%f", &sayi1);
	printf("Ikinci sayiyi giriniz:");
	scanf("%f", &sayi2);
	printf("Ucuncu sayiyi giriniz:");
	scanf("%f", &sayi3);
	aritmetikOrtalama = (sayi1+sayi2+sayi3)/3;
	printf("Girilen 3 sayinin aritmetik ortalamasi:%f", aritmetikOrtalama);
	
	return 0;
	
	
	
}
