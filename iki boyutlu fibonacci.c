#include <stdio.h>

int main(){
	int i,j;
	
	for(i=1;i<100;i=i+i){
		for(j=1;j<100;j=j+j){
			printf("%d\t",j);
		}
		printf("\n");
	}
	
}
