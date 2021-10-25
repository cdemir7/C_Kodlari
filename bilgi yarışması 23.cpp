#include <stdio.h>
#include <string.h>

void hosgeldinizFonksiyonu(){
	printf("Bilgi yarismasina hosgeldiniz asagidaki kurallari okuyunuz.\n"
	"*Yarismamiz puan sistemlidir.\n*Lutfen kullanici adinizi dogru giriniz.Kayitli degilseniz uye olunuz. "); 
}

int secimFonksiyonu(){
	int secim;
	printf("Asagidaki seceneklerden birini seciniz:\n[1]-Giris Yap\n[2]-Kayit Ol\n");
	scanf("%d",&secim);
	return secim;
	 	
}
int girisYapFonksiyonu(char isim[200], char sifre[200]){
	char alinanIsim[200];
	char alinanSifre[200];
	bool kontrol=false;
	while(kontrol==false){
		
    printf("Lutfen adinizi giriniz:");
	scanf("%s",&alinanIsim);
	printf("Lutfen sifrenizi giriniz:");
	scanf("%s",&alinanSifre);	
	if(strcmp(isim,alinanIsim)==0&&strcmp(sifre,alinanSifre)==0){
		printf("Sisteme hosgeldiniz...\n");
	    kontrol=true;
	}
	else{
		printf("Hatali giris yaptiniz...\n");
	}
      }
}

int kayitOlFonksiyonu(){
	char isim[200];
	char sifre[200];
	printf("Lutfen bir isim belirleyiniz:");
	scanf("%s",&isim);
	printf("Lutfen bir sifre belirleyiniz:");
	scanf("%s",&sifre);
	printf("Basarili bir sekilde kayit oldunuz...\n***Giris ekranina yönlendiriliyorsunuz...***\n");
    girisYapFonksiyonu(isim,sifre);
}

int bilgiYarismasi(){
	char cevap[2];
	int puan=0;
	int can=2;
	printf("Yarisma basladi...\n");
	printf("Puaniniz:%d\n",puan);
	
	while(can!=0){
	
	if(puan==0){
	
	printf("[Soru-1]Asagidakilerden hangisi Turkiye Cumhuriyetinin baskentidir?\na-)Istanbul\n b-)Ankara \nc-)Kastamonu\n d-)Samsun\n ");
	scanf("%s",&cevap);
	if(strcmp(cevap,"b")==0){
		printf("\nDogru Cevap\n");
		puan+=10;
		printf("Puaniniz:%d\n",puan);
	}
	
	else{
		printf("Hatali cevap.\nDogru cevap b. ");
		printf("Puan:%d",puan);
		can=can-1;
		printf("\nKalan caniniz:%d",can);
	}

}
    if(puan==10){
	
	printf("[Soru-2]Asagidakilerden hangisi Azerbaycan Cumhuriyetinin baskentidir?\na-)Baku\n b-)Moskova \nc-)Kastamonu\n d-)Samsun\n ");
	scanf("%s",&cevap);
	if(strcmp(cevap,"a")==0){
		printf("Tebrikler...\nDogru Cevap\n");
		puan+=10;
		printf("Puaniniz:%d",puan);
		can=0;
	}
	
	else{
		printf("Hatali cevap.\nDogru cevap a. ");
		printf("Puan:%d",puan);
		can=can-1;
		printf("\nKalan caniniz:%d",can);
	}

	return puan;

}
}
}
int yarismaSon(int puan){
	printf("\nYarismamiz sona ermistir.\nSkorunuz:%d\nYine Bekleriz...",puan);
}

int main(){

    char isim[200]="Cihan";
    char sifre[200]="12345";
	hosgeldinizFonksiyonu();
	
	int secim=secimFonksiyonu();
	
	if(secim==1){
		girisYapFonksiyonu(isim,sifre);
	}
	else if(secim==2){
		kayitOlFonksiyonu();
		                	}
		
		
	int skor=bilgiYarismasi();	
	yarismaSon(skor);
		
	return 0;        	
	
}
