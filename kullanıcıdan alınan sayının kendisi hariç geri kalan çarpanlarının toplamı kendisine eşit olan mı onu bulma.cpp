#include <stdio.h>

int main(){
	int sayi,i,toplam=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++) {
		if(sayi%i==0) toplam += i;
	}
	
	if(toplam == sayi) printf("Mukemmel sayi");
	else printf("Mukemmel sayi degil");
}
