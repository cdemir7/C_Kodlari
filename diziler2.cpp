#include<stdio.h>
#include <string.h>

int main(){
	
	char isim[50];
	char sifre[50];
	char isimVeri[]={"Cihan"};
	char sifreVeri[]={"1234"};
	
	printf("Lutfen kullanici isminizi giriniz:");
	scanf("%s",&isim);
	
	printf("Lutfen sifrenizi giriniz:");
	scanf("%s",&sifre);
	if(strcmp(isim,isimVeri) && strcmp(sifre,sifreVeri)==0){
		
		printf("Kullanici bilgileri eslesti.");
		
	}
	else{
		
		printf("Bilgiler hatalidir.");
		
	}
	
	
}
