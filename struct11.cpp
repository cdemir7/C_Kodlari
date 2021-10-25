#include <stdio.h>
#include <string.h>

struct arabalar{
	char marka[20];
	char model[20];
	int yil;
	int beygirGucu;
};

int main(){
	
	struct arabalar arabaBir = {"Toyota","Corolla",1995,105};
	struct arabalar arabaIki = {"BMW","M7",2019,745};
	printf("---------Arabalarýmýz----------\n %s-%s-%d-%d ",arabaBir.marka,arabaBir.model,arabaBir.yil,arabaBir.beygirGucu);
	printf("\n %s-%s-%d-%d",arabaIki.marka,arabaIki.model,arabaIki.yil,arabaIki.beygirGucu);
	
	return 0;
}
