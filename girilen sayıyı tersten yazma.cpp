#include <stdio.h>

int main(){
	
	int sayi,ters;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	while(sayi!=0){
		ters=ters*10;
		ters=ters+sayi%10;
		sayi=sayi/10;
	}
	
	printf("Girdiginiz sayinin tersi:%d",ters);
	
	
	return 0;
	
	
	
	
}
