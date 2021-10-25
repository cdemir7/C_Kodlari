#include <stdio.h>
#include <string.h>

struct ogrenciler{
	char isim[20];
	char soyIsim[20];
	int dogumYili;
	int numara;
};

void bilgileriGoster(struct ogrenciler bilgi){
	printf("Ogrenci adi:%s\nOgrenci soyadi:%s\nOgrenci dogum yili:%d\nOgrenci numara:%d",bilgi.isim,bilgi.soyIsim,bilgi.dogumYili,bilgi.numara);
	
}

struct ogrenciler ogrenciKayit(){
	struct ogrenciler kayit;
	printf("Lutfen bilgileri giriniz.\nLutfen ogrenci adini giriniz:");
	scanf("%s",&kayit.isim);
	printf("\nLutfen ogrenci soyadini giriniz:");
	scanf("%s",&kayit.soyIsim);
	printf("\nLutfen ogrenci dogum yilini giriniz:");
	scanf("%d",&kayit.dogumYili);
	printf("\nLutfen ogrenci numarasini  giriniz:");
	scanf("%d",&kayit.numara);
	return kayit;
	
	
}
int main(){
	struct ogrenciler ogrenciBir=ogrenciKayit();
	bilgileriGoster(ogrenciBir);
	struct ogrenciler ogrenciIki=ogrenciKayit();
	bilgileriGoster(ogrenciIki);
	return 0;
}
