#include <stdio.h>
int main(int argc, const char * argv[]) {  
      
    printf("Bir sayý giriniz : ");  
      
    // Konsoldan sayý istenir  
      
    int sayi;  
    scanf("%d",&sayi);  
    // Tamsayý tipinde(int) sayi deðiþkenini oluþturup bu deðiþkene konsoldan alýnan deðeri atýyoruz.  
      
    while (sayi > 0){  
        // Sayý sýfýrdan büyük olduðu sürece tekrarlanacak :  
          
        printf("%d \n",sayi%10);  
        // Sayýyýnýn 10 ile modu alýnýr (yani sayýyý 10'a böldüðümüzde kalan sayý döner) ve ekrana yazdýrýlýr.  
          
        sayi = sayi/10;  
        // Sayý deðiþkeni 10'a bölünür ve sonuc sayi deðiþkenine atanýr.  
          
    }  
      
    return 0;  
}  
