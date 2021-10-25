#include <stdio.h>

int main(){
	int sayi,i;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		if(sayi%i==0){
			printf("%d\n",i);
		}
	}
}
