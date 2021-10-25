#include <stdio.h>
#include <string.h>

int main(){
	
	char isim[5]="Ali";
	int parola=1234;
	int bakiye=100;
	int secim;
	int yatirilacakPara;
	int cekilecekPara;
	char istenilecekIsim[10];
	int istenilecekParola;
	printf("Bankamatige hosgeldiniz\nLutfen kullanici adinizi giriniz:");
	scanf("%s",&istenilecekIsim);	
	printf("\nLutfen sifrenizi giriniz:");
	scanf("%d",&istenilecekParola);
	
	
	
	if(strcmp(isim,istenilecekIsim )==0  && istenilecekParola==parola){
		printf("Kullanici bilgileri eslesmistir.");
		printf("\nAsagidaki islemlerden birini seciniz\n[1]Para yatirma\n[2]Para cekme\n[3]Kullanici bilgileri\nSeceneklerden birini seciniz:");
		scanf("%d",&secim);
		if(secim==1){
			printf("Para yatirma islemini sectiniz kac para yatirmak istersiniz:");
			scanf("%d", &yatirilacakPara);
			bakiye=bakiye + yatirilacakPara;
			printf("Para yatirma isleminiz basarili\nYatirdiginiz miktar:%d\nSuan ki bakiyem:%d", yatirilacakPara,bakiye);
		}
		else if(secim==2){
			printf("Para cekme islemini sectiniz kaç para cekmek istersiniz:");
			scanf("%d",&cekilecekPara);
			bakiye=bakiye - cekilecekPara;
			printf("Para cekme isleminiz basarili\nCekdiginiz miktar:%d\nSuan ki bakiyem:%d", cekilecekPara,bakiye);
		}
		else if(secim==3){
			printf("Kullanici bilgileriniz:\nIsim:%s\nParola:%d\nHesabinizdeki bakiye:%d",isim,parola,bakiye);
		}
		else{
			printf("Yanlis rakam girdiniz\nLutfen tekrar deneyiniz.");
		}
	}
	else{
		printf("Kullanici adi yada sifre yanlis girilmistir.");
	}
	
	
}
