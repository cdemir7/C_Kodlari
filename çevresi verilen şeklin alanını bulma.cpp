#include<stdio.h>

int main(){
	int kareninCevresi;
	int kareninBirKenari;
	int kareninAlani;
	printf("Karenin cevresini giriniz:");
	scanf("%d" , &kareninCevresi);
	kareninBirKenari = kareninCevresi/4;
	kareninAlani= kareninBirKenari*kareninBirKenari;
	printf("\nKarenin alani :%d", kareninAlani);
	
	return 0;
	
	
}
