#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Çemberde alan= pi * r * r
	//Çemberde çevre= 2 * pi * r
	
	float pi,yaricap,alan,cevre;
	
	printf("*****Cemberde Alan ve Cevre Hesabi*****");
	printf("\n");
	printf("Cemberin Yaricapini Giriniz: ");
	scanf("%f",&yaricap);
	
	pi=3.1415;
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;	
	
	printf("Cemberin Alani: %f\n",alan);
	printf("Cemberin Cevresi: %f",cevre);
	
	return 0;
}
