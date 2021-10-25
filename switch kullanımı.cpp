#include <stdio.h>

int main(){
	
	int sec;
	printf("Birle uc arasinda bir sayi giriniz:");
	scanf("%d",&sec);
	switch(sec)
	{
		
		case 1:printf("Birinci durum secildi");break;
		case 2:printf("Ikinci durum secildi");break;
		case 3:printf("Ucuncu durum secildi");break;
		default:printf("Yanlis bir sayi girdiniz");
	}
	
	return 0;
	
}
