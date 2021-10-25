#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

#define Temizle system("cls")



int sayac=1;

void AraBulYaz(char[],char[],int);
void TersCevir(char[]);  
int main()
{
    char charArray[]={ "A computer is a machine that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming.Modern computers have the ability to follow generalized sets of operations, called programs.These programs enable computers to perform an extremely wide range of tasks.A complete computer including the hardware, the operating system (main software), and peripheral equipment required and used for full operation can be referred to as a computer system.This term may as well be used for a group of computers that are connected and work together, in particular a computer network or computer cluster. Computers are used as control systems for a wide variety of industrial and consumer devices.This includes simple special purpose devices like microwave ovens and remote controls, factory devices such as industrial robots and computer-aided design, and also general purpose devices like personal computers and mobile devices such as smartphones.The Internet is run on computers and it connects hundreds of millions of other computers and their users.Early computers were only conceived as calculating devices.Since ancient times, simple manual devices like the abacus aided people in doing calculations.Early in the Industrial Revolution, some mechanical devices were built to automate long tedious tasks, such as guiding patterns for looms.More sophisticated electrical machines did specialized analog calculations in the early 20th century."};
    char aranan[5];
    int i,uz_cumle,uz_aranan;


    
    printf("\n\tBir kelime giriniz: ");
    gets(aranan);

    uz_cumle = strlen(charArray);
    uz_aranan = strlen(aranan);

    

    Temizle;
    

    for(i=0;i<uz_cumle;i++)
        AraBulYaz(charArray,aranan,i);
        
        


    printf("\n\t\%s\" kelimesi %d defa bulundu",aranan,sayac-1);
    printf("\n\n\tArama Sona Erdi...");
    getch();
    return 0;
}

void AraBulYaz(char charArray[],char aranan[],int i)
{
    int j,k=0;
    for (j=i ; j<i+strlen(aranan) ; j++ )
    {
     if(charArray[j]!=aranan[k])
            return;
        k++;
    }

    printf("\n\t\"%s\" kelimesi %d. defa bu aralikta bulundu",aranan,sayac++);
}



   

