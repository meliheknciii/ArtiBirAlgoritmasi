#include <stdio.h>
#include <stdlib.h>


// ARTI BÝR ALGORÝTMASI // 
int main(int argc, char *argv[]) {
	// dizi elemanlarý 0-9 arasýnda olmalýdýr. 
	int sayilar[] = {1,2,4,6,7};
	int sayilar_uzunluk = sizeof(sayilar) / sizeof(sayilar[0]); // dizinin eleman sayýýsýný burda buluruz.
	int i;
	printf("===>>> [");
	for (i=0;i<sayilar_uzunluk;i++){
		printf("%d ",sayilar[i]);
	}
	printf("] \n"); 
	
	
	
	
	
	// eðer sayýlar dizisinin son elemaný 9 a eþitse 
	// sayýlar dizisindeki 9 alan eleman 1 olur ve bir sonraki eleman ise 0 olur 
	if (sayilar[sayilar_uzunluk - 1] == 9){
		sayilar[sayilar_uzunluk - 1] = 1;
		sayilar[sayilar_uzunluk] = 0;
		// dizi elemanlarý yazdýrýlýr. 
		for(i=0;i<=sayilar_uzunluk;i++){
			printf("%d ",sayilar[i]);
		}
	}
	else {
		// degilse sayilar dizisinin son elemanýnýn deðeri bir arttýrýlýr. ve dizi o þekilde kalýr
		sayilar[sayilar_uzunluk-1] = sayilar[sayilar_uzunluk-1] + 1;
		for (i=0;i<sayilar_uzunluk;i++){
		printf("%d ",sayilar[i]);
		}
	}
	
	
	return 0;
}
