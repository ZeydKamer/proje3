#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int su,sufiyat,kolafiyat,kola,biletfiyat,bilet,misir,misirfiyat,toplam;
	
	printf("Kolanýn fiyati: ");
	scanf("%d",&kolafiyat);
	
	printf("Suyun fiyati: ");
	scanf("%d",&sufiyat);
	
	printf("Misirin fiyati: ");
	scanf("%d",&misirfiyat);
	
	printf("Biletin fiyati: ");
	scanf("%d",&biletfiyat);
	
	printf("Aldýgýnýz Misir Adeti: ");
	scanf("%d",&misir);
	
	printf("Aldýgýnýz Kola Adeti: ");
	scanf("%d",&kola);
	
	printf("Aldýgýnýz Su Adeti: ");
	scanf("%d",&su);
	
	printf("Aldýgýnýz bilet Adeti: ");
	scanf("%d",&bilet);
	
	toplam=misir*misirfiyat+kola*kolafiyat+su*sufiyat+bilet*biletfiyat;
	
	printf("Toplam Borcunuz: %d",toplam);
	
	return 0;
}
