#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//printf("Birinci Sinav Notunuzu Giriniz: ",sinav1);
	//scanf("%d",sinav1);
	
	//printf("Ikinci Sinav Notunuzu Giriniz: ",sinav2);
	//scanf("%d",sinav2);
	
	//printf("Ucuncu Sinav Notunuzu Giriniz: ",sinav3);
	//scanf("%d",sinav3);
	
	//ortalama=(sinav1+sinav2+sinav3)/3;
	//printf("Ortalamaniz: %d",ortalama);

	int sinav1,sinav2,sinav3,proje,ortalama;
	
	sinav1=50;
	sinav2=45;
	sinav3=55;
	ortalama= sinav1/3+sinav2/3+sinav3/3;
	
	
	printf("Ortalamaniz: %d",ortalama);
	
	
	return 0;
}
