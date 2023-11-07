#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float sinav1,sinav2,sinav3,ort,toplam;
	
	printf("Birinci Sinav Notunu Giriniz: ");
	scanf("%f",&sinav1);
	
	printf("Ikinci Sinav Notunu Giriniz: ");
	scanf("%f",&sinav2);
	
	printf("Ucuncu Sinav Notunu Giriniz: ");
	scanf("%f",&sinav3);
		
	ort=((sinav1+sinav2+sinav3)/3);
	printf("Ortalamaniz: %f",ort);
	
	
	return 0;
}
