#include <stdio.h>

int main(){
	int i,toplam=0;
	for(i=1;i<=81;i=i+4){
		printf("%d+",i);
		toplam+=i;
	}
	printf("\nToplam: %d",toplam);
}
