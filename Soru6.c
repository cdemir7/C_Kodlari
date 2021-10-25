#include <stdio.h>
#include <conio.h>


int fib(int sayi){
   if(sayi==1 || sayi==0){
      	 return sayi;
	  }
    else{
    	return(fib(sayi-1) + fib(sayi-2));
	} 
}


int main(){
    int sayi;
    printf("Kacinci Fibonacci Sayisi:"); 
	scanf ("%d",&sayi);
    printf("\n%d.Fibonacci Sayisi =  %d\n",sayi,fib(sayi));
    printf("Elemaninin hesaplanmasi icin fonksiyon cagrilma sayisi:%d",sayi-1);
	getch();
    return 0;
}

