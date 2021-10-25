#include <stdio.h>
#include <string.h>

struct calisanlarBilgi{
	char isim[20];
	char soyIsim[20];
	int maas=0;
};

int main(){
	struct calisanlarBilgi calisanlar[4];
	int i=1;
	for(i=1;i<=4;i++){
		printf("Lutfen %d inci calisanin asagidaki bilgilerini giriniz.\n",i);
		 printf("\nIsim giriniz:");
		 scanf("%s",calisanlar[i].isim);
	    
		  printf("\nSoyIsmi giriniz:");
		  scanf("%s",calisanlar[i].soyIsim);
		
		    printf("\nMaas miktarini giriniz:");
		    scanf("%d",calisanlar[i].maas);
	}
	
	for(i=1;i<=4;i++){
		printf("\n %s %s - %d \n",calisanlar[i].isim,calisanlar[i].soyIsim,calisanlar[i].maas);
	} 	
	
	return 0;
}
