#include <stdio.h>

int main(){
	int i,j,sayi;
	
	printf("Taban sayisini giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
