#include <stdio.h>
#include <string.h>


int toplamaIslemi(int a,int b){
	
	int topla=a+b;
	printf("Toplama Islemi:%d",topla);
}

int cikarmaIslemi(int a,int b){
	
	int cikarma;
	if(a>b){
		cikarma=a-b;
	}
	else if(b>a){
		cikarma=b-a;
	}
	printf("\nCikarma Islemi:%d",cikarma);
}


int main(){
	
	int sayi1;
	int sayi2;
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	toplamaIslemi(sayi1,sayi2);
	cikarmaIslemi(sayi1,sayi2);
}
