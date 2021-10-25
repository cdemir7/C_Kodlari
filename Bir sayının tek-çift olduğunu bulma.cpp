#include <stdio.h>

int main(){
	int girilecekSayi;
	printf("Bir sayi giriniz:");
	scanf("%d", &girilecekSayi);
	
	if(girilecekSayi%2==0){
		printf("Bu sayi cifttir");
	}
	else{
		printf("Bu sayi tektir");
	}
	
	
}
