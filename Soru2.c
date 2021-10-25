#include <stdio.h>
#include <math.h>

int main(){
	double doubleArray [] = {  1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9 } ;
	double calcAverage=0; 
	double calcVariance=0;
	double calcCovariance;
	double calcStdDeviation;
	int i;
    double kareToplam=0;
	double farkkare[50];
	double toplam=0;
	for( i=0;i<18;i++){
    toplam+=doubleArray[i];
    calcAverage=toplam/18;
	}
	for(i=0;i<=17;i++){
		farkkare[i]=pow((doubleArray[i]-calcAverage),2);
		for( i=0; i<18; i++){
        kareToplam=kareToplam+farkkare[i];
    }
  }  
	calcStdDeviation=sqrt((kareToplam)/17);
	calcVariance=pow(calcStdDeviation,2);
	
	printf("Sayilarin Ortalamasi:%lf\n",calcAverage);
	printf("Varyansi =%lf\n",calcVariance);
    printf("Standart Sapmasi =%lf\n", calcStdDeviation); 
	printf("Kovaryans degeri:%f",calcCovariance); 
	return 0;
}
