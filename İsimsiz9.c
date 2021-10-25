#include <stdio.h>

int main(){
	int elBagaji,normalBagaj,borc=0;
	printf("El bagajinin kaç kg oldugunu giriniz:");
	scanf("%d",&elBagaji);
	printf("\nNormal bagajinin kaç kg oldugunu giriniz:");
	scanf("%d",&normalBagaj);
	
	if(elBagaji>8){
		borc += (elBagaji-8)*4;
	}
	if(normalBagaj>15){
		borc += (normalBagaj-15)*5;
	}
	
	printf("\nBorcunuz: %d",borc);
}
