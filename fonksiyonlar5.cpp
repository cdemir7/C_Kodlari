#include <stdio.h>
#include <string.h>

int usHesaplama(int a,int b){
	int cevap=1;
	for(int i=0;i<b;i++){
		cevap*=a;
		
	}
	printf("\nGirdiginiz sayinin kuvvetinin degeri:%d",cevap);
}


int main(){
	
	int sayi;
	int us;
	printf("Lutfen sayiyi giriniz:");
	scanf("%d",&sayi);
	printf("Lutfen us giriniz:");
	scanf("%d",&us);
	
	usHesaplama(sayi,us);
	
	
}
