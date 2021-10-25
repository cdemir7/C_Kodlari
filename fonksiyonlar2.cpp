#include <stdio.h>
#include <stdio.h>

void sayiSirala(int a,int b){
	
	if(a<b){
		
		printf("%d<%d",a,b);
	}
	
	else if(b<a){
		
		printf("%d<%d",b,a);
	}
	
	else{
		
		printf("%d=%d",a,b);
	}
	
}

int main(){
	
	
	int sayi1;
	int sayi2;
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	sayiSirala(sayi1,sayi2);
	
	return 0;
	
	
	
}
