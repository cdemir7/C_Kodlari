#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *dosya;
	dosya=fopen("C:\\Users\\Lenovo\\Desktop\\bilgiler.txt","w");
	putc('C',dosya);
	putc('\n',dosya);
	putc('D',dosya);
	putc('\n',dosya);
	putc('20',dosya);
	putc('\n',dosya);
	putc('12',dosya);
	fclose(dosya);
	return 0;
}
