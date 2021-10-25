#include <stdio.h>
#include <string.h>

int tekMiCiftMi(int a){
	if(a%2==0){
		printf(" %d cifttir.",a);
	}
	else{
		printf(" %d tektir.",a);
	}
}


int main(){
	
	int sayi1;
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi1);
	tekMiCiftMi(sayi1);
	
	return 0;
	
}
