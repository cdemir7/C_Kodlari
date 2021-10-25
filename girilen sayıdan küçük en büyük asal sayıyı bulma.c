#include <stdio.h>

int asalSayi(int);
int main(){
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	asalSayi(sayi);
}

int asalSayi(int sayi){
	int i,j;
	for(i=sayi;i>=2;i--){
		int asal = 1;
		for(j=2;j<i;j++){
			if(i%j==0){
				asal=0;
			}
		}
		if(asal==1){
			printf("%d",i);
			break;
		}
	}
}
