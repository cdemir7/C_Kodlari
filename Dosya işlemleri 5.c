#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *metinbelgesi;
	char veri1[30]="Bilgisayar";
	char veri2[30]="Mühendisligi";
	char veri3[30]="Bolumu";
	
	metinbelgesi=fopen("C:\\Users\\Lenovo\\Desktop\\bilgi.txt","w");
	fputs(veri1,metinbelgesi);
	fputs(veri2,metinbelgesi);
	fputs(veri3,metinbelgesi);
	return 0;
}

