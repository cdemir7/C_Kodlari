#include <stdio.h>
int main(int argc, const char * argv[]) {  
      
    printf("Bir say� giriniz : ");  
      
    // Konsoldan say� istenir  
      
    int sayi;  
    scanf("%d",&sayi);  
    // Tamsay� tipinde(int) sayi de�i�kenini olu�turup bu de�i�kene konsoldan al�nan de�eri at�yoruz.  
      
    while (sayi > 0){  
        // Say� s�f�rdan b�y�k oldu�u s�rece tekrarlanacak :  
          
        printf("%d \n",sayi%10);  
        // Say�y�n�n 10 ile modu al�n�r (yani say�y� 10'a b�ld���m�zde kalan say� d�ner) ve ekrana yazd�r�l�r.  
          
        sayi = sayi/10;  
        // Say� de�i�keni 10'a b�l�n�r ve sonuc sayi de�i�kenine atan�r.  
          
    }  
      
    return 0;  
}  
