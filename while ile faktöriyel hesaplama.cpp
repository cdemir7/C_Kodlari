#include <stdio.h>

int main(){
	
	int alinacakSayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&alinacakSayi);
	int i=1;
	int faktoriyel=1;
	while(i<=alinacakSayi){
		
		faktoriyel=faktoriyel*i;
		i++;
	}
	
	printf("Sonuc:%d",faktoriyel);
	
	return 0;
	
	
}
