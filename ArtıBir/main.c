#include <stdio.h>
#include <stdlib.h>


// ARTI B�R ALGOR�TMASI // 
int main(int argc, char *argv[]) {
	// dizi elemanlar� 0-9 aras�nda olmal�d�r. 
	int sayilar[] = {1,2,4,6,7};
	int sayilar_uzunluk = sizeof(sayilar) / sizeof(sayilar[0]); // dizinin eleman say��s�n� burda buluruz.
	int i;
	printf("===>>> [");
	for (i=0;i<sayilar_uzunluk;i++){
		printf("%d ",sayilar[i]);
	}
	printf("] \n"); 
	
	
	
	
	
	// e�er say�lar dizisinin son eleman� 9 a e�itse 
	// say�lar dizisindeki 9 alan eleman 1 olur ve bir sonraki eleman ise 0 olur 
	if (sayilar[sayilar_uzunluk - 1] == 9){
		sayilar[sayilar_uzunluk - 1] = 1;
		sayilar[sayilar_uzunluk] = 0;
		// dizi elemanlar� yazd�r�l�r. 
		for(i=0;i<=sayilar_uzunluk;i++){
			printf("%d ",sayilar[i]);
		}
	}
	else {
		// degilse sayilar dizisinin son eleman�n�n de�eri bir artt�r�l�r. ve dizi o �ekilde kal�r
		sayilar[sayilar_uzunluk-1] = sayilar[sayilar_uzunluk-1] + 1;
		for (i=0;i<sayilar_uzunluk;i++){
		printf("%d ",sayilar[i]);
		}
	}
	
	
	return 0;
}
