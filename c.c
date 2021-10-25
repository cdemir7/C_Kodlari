#include <stdio.h>

int main(){
	int sayi;
	printf("Aracin otoparkta kaldigi saat: ");
	scanf("%d",&sayi);
	
	if(sayi>=0 && sayi<=4){
		printf("Borcunuz: 10 TL");
	}
	if(sayi>=5 && sayi<=8){
		printf("Borcunuz: 12 TL");
	}
	if(sayi>=9 && sayi<=12){
		printf("Borcunuz: 15 TL");
	}
	if(sayi>=13){
		printf("Borcunuz: 20 TL");
	}
}
