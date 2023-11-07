#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Aylýk 20000Tl maaþ alan bir kiþinin maaþýna yüzde 12 yaz yapýlýrsa
	//Yeni maaþý ne kadar olur?
	
	
	printf("***** Zam Maas Hesabi *****");
	printf("\n\n");
	
	float maas,yenimaas;
	printf("Maasinizi Girin: ");
	scanf("%f",&maas);
	
	yenimaas=maas+maas*12/100;
	printf("Yeni Maasiniz: %f",yenimaas);	
	
	return 0;
}
