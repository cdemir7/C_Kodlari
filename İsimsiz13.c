#include <stdio.h>

int main(){
	int sayi,i,j;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		for(j=1;j<=sayi;j++){
			if(sayi%2==0){
				if(j==(sayi/2)){
					printf("1");
				}
				else if(j==((sayi/2)+1)||i==(((sayi/2)+1))||i==(sayi/2)){
					printf("1");
				}
				else{
					printf("0");
				}
				
			}
			else{
				if(j==((sayi/2)+1)||i==((sayi/2)+1)){
					printf("1");
				}
				else{
					printf("0");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
