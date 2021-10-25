#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,s,s1,alan;
	printf("Ucgenin a kenarini giriniz: ");
	scanf("%d",&a);
	printf("Ucgenin b kenarini giriniz: ");
	scanf("%d",&b);
	printf("Ucgenin c kenarini giriniz: ");
	scanf("%d",&c);
	s = (a+b+c)/2;
	s1 = s*((s-a)*(s-b)*(s-c));
	alan = sqrt(s1);
	printf("Alan:%d",alan);
	
}
