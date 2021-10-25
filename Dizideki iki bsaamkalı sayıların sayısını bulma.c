#include <stdio.h>
#include <stdlib.h>

int main(){
	int s[60]={0};
	int i,ikiBasamakli=0;
	for(i=0;i<=60;i++){
		s[i]=0+rand()%100;
	}
	for(i=0;i<=60;i++){
		if(s[i]>9 && s[i]<100){
			ikiBasamakli +=1;
		}
	}
	printf("%d tane iki basamakli sayi bulunur.",ikiBasamakli);
}
