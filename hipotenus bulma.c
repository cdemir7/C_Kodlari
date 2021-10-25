#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
float hipotenushesapla(float,float);
int main()
{
float kenar1,kenar2;
printf("Birinci Kenari Giriniz:");
scanf("%f",&kenar1);
printf("Ikinci Kenari Giriniz:");
scanf("%f",&kenar2);
hipotenushesapla(kenar1,kenar2);

return 0;
}
float hipotenushesapla(float kenar1,float kenar2)
{
float hipotenus = sqrt(pow(kenar1,2)+pow(kenar2,2));
printf("Ucgenin Hipotenusu:%f\n",hipotenus);
}
