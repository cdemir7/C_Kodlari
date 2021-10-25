#include <stdio.h>
 
int usAlma(int, int);
 
int main() {
    int taban;
    int us;
    int sonuc;
    printf("******f(x,y)=(x)^(y) fonksiyonun cevabini veren programa hosgeldiniz.******");
    printf("\nLutfen x sayisini giriniz:");
    scanf("%d",&taban);
    printf("Lutfen y sayisini giriniz:");
    scanf("%d",&us);
    sonuc = usAlma(taban, us);
    printf("Sonuc:%d",sonuc);
    return 0;
}
 
int usAlma(int taban, int us) {
    if (us == 0)
        return 1;
    return taban * usAlma(taban, us - 1);
}
