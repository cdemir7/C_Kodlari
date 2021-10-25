#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char charArray[]={ "A computer is a machine that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming.Modern computers have the ability to follow generalized sets of operations, called programs.These programs enable computers to perform an extremely wide range of tasks.A complete computer including the hardware, the operating system (main software), and peripheral equipment required and used for full operation can be referred to as a computer system.This term may as well be used for a group of computers that are connected and work together, in particular a computer network or computer cluster. Computers are used as control systems for a wide variety of industrial and consumer devices.This includes simple special purpose devices like microwave ovens and remote controls, factory devices such as industrial robots and computer-aided design, and also general purpose devices like personal computers and mobile devices such as smartphones.The Internet is run on computers and it connects hundreds of millions of other computers and their users.Early computers were only conceived as calculating devices.Since ancient times, simple manual devices like the abacus aided people in doing calculations.Early in the Industrial Revolution, some mechanical devices were built to automate long tedious tasks, such as guiding patterns for looms.More sophisticated electrical machines did specialized analog calculations in the early 20th century."};
char karakter_sayisi();
int kac_tane();
char en_cok_sesli();
char en_cok_sessiz();

int main(){
	
	karakter_sayisi();
    kac_tane();
	return 0;
}

char karakter_sayisi(){
	
	int sayac=0;
	while(charArray[sayac] != '\0' ){
		sayac++;
	}
	printf("Girilen metin %d karakterden olusur.",sayac);
}

int kac_tane(){
	
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char aranan;
      char harf;
      
      fflush(stdin);
      printf("\n Cumle icerisinde aranacak harf : ");
      scanf("%c",&aranan);
      fflush(stdin);
 
      uzunluk = strlen(charArray);
 
      for( n= 0; n < uzunluk ; n++)
      {
          harf = charArray[n];
 
          if(  aranan == harf)
              sayac++;
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %i kere geciyor.",charArray,aranan,sayac);
 
      getch();
}


