#include <stdio.h>

int main(){
	int sayi,toplam=0,kalan;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi!=0){
		
		kalan=sayi%10;
		toplam=toplam+kalan;
		sayi=sayi/10;
		
	}
	
	printf("Sonuc:%d",toplam);
	
	return 0;
	
	
	
	
	
	
	
}
