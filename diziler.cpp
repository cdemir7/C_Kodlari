#include <stdio.h>
#include <string.h>

int main(){
	
	int sayilar[20];
	int girilecekSayilarinAdedi;
	printf("Kac tane sayi gireceksiniz:");
	scanf("%d",&girilecekSayilarinAdedi);
	
	for(int i=0;i<girilecekSayilarinAdedi;i++){
		
		printf("\n Sayi %d:" ,i+1);
		scanf("%d",&sayilar[i]);
	}
	
	for(int j=0;j<girilecekSayilarinAdedi;j++){
		
		printf("Sayi %d:  %d\n" , j+1,sayilar[j]);
	}
	
	
	
	return 0;
	
}
