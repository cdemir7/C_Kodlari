#include <stdio.h>

int main(){
	int sayi,birler,onlar,yuzler,toplam=0;
	
	printf("Bir 3 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	birler = sayi % 10;
	onlar = (sayi/10) % 10;
	yuzler = sayi / 100;
	
	toplam= birler + onlar + yuzler;
	printf("Girilen sayinin basamaklari toplami: %d",toplam); 
}
