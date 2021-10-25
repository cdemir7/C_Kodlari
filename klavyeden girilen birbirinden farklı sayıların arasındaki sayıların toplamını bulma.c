#include <stdio.h>

int main(){
	int sayi1,sayi2,i,toplam=0;
	while(1==1){
	printf("\n1.sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&sayi2);
	if(sayi1==sayi2){
		printf("Ayni sayi girdiniz...");
		printf("\nLutfen tekrar deneyiniz...");
		break;
	}
	if(sayi1 < sayi2){
	
		for(i=sayi1;i<=sayi2;i++){
			toplam+=i;
	}
	}
	else if(sayi1 > sayi2){
		for(i=sayi2;i<=sayi1;i++){
			toplam+=i;
	}
	}
	
	printf("Girdiginiz sayilarin arasindaki sayilarin toplami: %d",toplam);
	
	}
	
	return 0;
}
