#include <stdio.h>

int main(){
	int yas=0;
	int ort=0;
	int toplam=0;
	int sayac=0;
	
	while(yas>=0){
		toplam=toplam+yas;
		sayac++;
		printf("\nYasinizi giriniz: ");
		scanf("%d",&yas);
	}
	
	sayac--;
	ort =toplam/sayac;
	printf("Yaslarin Ortalamasi: %d",ort);
}
