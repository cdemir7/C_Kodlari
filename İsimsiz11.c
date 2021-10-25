#include <stdio.h>

int main(){
	int ilkbahar,yaz,sonbahar,kis,toplam=0;
	
	kis = 320;
	ilkbahar = kis/4;
	yaz = ilkbahar*8;
	sonbahar = yaz/10;
	
	toplam =  ilkbahar+yaz+sonbahar+kis;
	printf("1 yil icinde otelde kalan toplam kisi sayisi: %d",toplam);
}
