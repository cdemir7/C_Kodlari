#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
      char cumle[100];
      int uzunluk;
	  int i;
      char harf;
      int sesliSayac=0;
	  int sessizSayac=0;
    
      printf("Bir cumle giriniz:\n");
     scanf("%s",&cumle);
      
      uzunluk=strlen(cumle);
      
      for(i=0;i<uzunluk;i++){
       harf=cumle[i];
       if(harf=='a'||harf=='A'||harf=='e'||harf=='E'||harf=='i'||harf=='I'||harf=='o'||harf=='O'||harf=='u'||harf=='U'){
        sesliSayac=sesliSayac+1;
       }
       else if(harf!=' '){
        sessizSayac=sessizSayac+1;
       }
     }
      
      printf(" Sesli Harf Sayisi = %d",sesliSayac);
	  printf("\nSessiz Harf Sayisi = %d",sessizSayac); 

      return 0;
}





