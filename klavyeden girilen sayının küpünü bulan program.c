#include <stdio.h>
#include <math.h>
int main(){
	int sayi,kup;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	kup =pow(sayi,3);
	printf("Girilen sayinin kupu: %d",kup);
}
