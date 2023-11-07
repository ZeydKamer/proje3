#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("ideal kilo hesaplama");
	printf("\n");
	//ideal kilo hesabý
	//(boy - 100+yas / 10)*0,8 --> Kadýn	0,9 --> Erkek
	
	float boy,yas,ideal;
	boy=175;
	yas=24;
	ideal=(boy-100+yas/10)*0.9;
	printf("ideal kilonuz: %d",ideal);
	
	
	
	return 0;
} 
