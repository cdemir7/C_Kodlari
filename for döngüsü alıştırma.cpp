#include <stdio.h>

int main(){
	
	int i;
	int sayi;
	int ciftSayiTopla=0;
	int tekSayiTopla;
	printf("Luften bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=0;i<=sayi;i++){
		
		if(i%2==0){
			printf("%d\n", i);
			ciftSayiTopla=ciftSayiTopla+i;
		
		}
		
		else{
			tekSayiTopla=tekSayiTopla+i;
		}
	}
	
	printf("\nGirdiginiz sayiya kadar olan teklerin toplami:%d",tekSayiTopla);
	printf("\nGirdiginiz sayiya kadar olan ciftlerin toplami:%d",ciftSayiTopla);
	return 0;
	
	
}
