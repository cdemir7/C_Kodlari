#include <stdio.h>

main(){
	
	int sayiX;
	int sayiY;
	int denklem;
	printf("Lutfen x de�erini giriniz:");
	scanf("%d",&sayiX);
	printf("Lutfen y de�erini giriniz:");
	scanf("%d",&sayiY);
	
	denklem= 2*(sayiX*sayiX)+2*(sayiY)+3;
	printf("Denklemin sonucu:%d" , denklem);
	
	return 0;
	
	
	
	
	
	
	
}
