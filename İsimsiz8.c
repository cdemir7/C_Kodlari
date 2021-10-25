#include <stdio.h>

int main(){
	int dizi[10]={2,1,0,0,2,1,1,2,1,0};
	int i,toplam=0;
	for(i=0;i<=9;i++){
		if(dizi[i] == 2){
			toplam+=3;
		}
		else if(dizi[i] == 0){
			toplam+=1;
		}
	}
	if(toplam >= 12){
		printf("***Tebrikler, Kumede Kaldiniz***");
	}
	else{
		printf("***Uzgunum, Kume Dustunuz***");
	}
}
