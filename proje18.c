#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("**** ZAM MAAS HESABI ****");
	printf("\n\n");
	
	float maas,yenimaas;

	printf("Maasinizi Giriniz: ");
	scanf("%f",&maas);
	
	yenimaas=maas+maas*12/100;
	
	printf("Yeni maasiniz: %f",yenimaas);
	
	return 0;
}
