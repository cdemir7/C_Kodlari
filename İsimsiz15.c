#include <stdio.h>
#include <math.h>

int main(){
	int sayi,i;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0;;i++){
		if(pow(2,i) > sayi){
			break;
		}
	}
	printf("Girdigimiz sayinin logaritmasi %d ile %d arasindadir...",(i-1),i);
}
