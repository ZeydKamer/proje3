#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Ygs 1 Puan Türü Hesaplama
	
	//Türkçe: 1.999
	//Matematik: 3.998
	//Sosyal Bilgiler: 1
	//Fen Bilgisi: 2.999
	//Taban: 100.160
	
	float turkce,matematik,fen,sosyal,taban,toplampuan;
	
	taban=100.160;
	
	printf("Turkce Netinizi Giriniz: ");
	scanf("%f",&turkce);
	
	printf("Matematik Netinizi Giriniz: ");
	scanf("%f",&matematik);
	
	printf("Fen Netinizi Giriniz: ");
	scanf("%f",&fen);
	
	printf("Sosyal Netinizi Giriniz: ");
	scanf("%f",&sosyal);
	
	toplampuan=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
	printf("Ygs - 1 Puan Turunde Sonucunuz: %f",toplampuan);
	
	
	return 0;
}
