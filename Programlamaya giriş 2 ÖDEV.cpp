#include <stdio.h>

int main(){
	int i;
	int dizi[7]={1,2,0,7,5,1,4};
	for(i=0;i<6;i++){
		if(dizi[i]<dizi[i+1]){
			printf("%d,",i);
		}
	}
	printf("\n");
	return 0;
}
