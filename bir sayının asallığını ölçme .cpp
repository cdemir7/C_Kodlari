#include <stdio.h>

int main(){
	
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	int sayac=0;
	
	
	for(int i=2;i<sayi;i++)
	{
		
		if(sayi%i==0){
			sayac++;
			if(sayac==0){
			printf("\nBu bir asal sayidir.");
			
		    }
		    else{
			printf("\nBu bir asal sayi degildir.");
		    }
		
	
	    }
	
	return 0;
	
	
   }
}
