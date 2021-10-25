#include <stdio.h>

int main(){
	int sayi1,sayi2,sayi3,sayi4,toplam=0;
	printf("1. sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("\n2. sayiyi giriniz: ");
	scanf("%d",&sayi2);
	printf("\n3. sayiyi giriniz: ");
	scanf("%d",&sayi3);
	printf("\n4. sayiyi giriniz: ");
	scanf("%d",&sayi4);
	
	printf("\n***************************\n");
		
	toplam=sayi1+sayi2+sayi3+sayi4;
	printf("Girilen sayilarin toplami: %d",toplam);
}
