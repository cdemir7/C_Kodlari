#include <stdio.h>

int main(){
	int sayi,i,sayac=0,asal,j;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=sayi+1;;i++){
		asal=1;
		for(j=2;j<i/2;j++){
			if(i%j==0) {
				asal=0;
				break;
			}
		}
		if(asal==1) {
		printf("%d\n",i);
			sayac++;
		}
		if(sayac==5) break;
	}

		
}
