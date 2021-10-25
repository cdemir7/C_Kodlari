#include <stdio.h>

int main(){
	int sayi,toplam=0;
	
	while(sayi!=0){
		printf("\nBir sayi giriniz: ");
		scanf("%d",&sayi);
		toplam+=sayi;
		printf("\nToplam: %d",toplam);
	}
}
