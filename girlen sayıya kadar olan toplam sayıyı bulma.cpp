#include <stdio.h>

int main(){
	
	int alinacakSayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&alinacakSayi);
	int i=0;
	int toplam=0;
	
	while(i<=alinacakSayi){
		toplam=toplam+i;
		i++;
	}
	
	printf("sonuc:%d",toplam);
	
	return 0;
	
	
	
}
