// 6) 8 den 35 e kadarki �ift say�lar�n toplam�n� tespit ederek yazd�ran program kodunu yaz�n�z.

#include <stdio.h>

int main(){

	int i,toplam;
	
	for(i=8; i<=35;i++){
	
		if(i%2==0){
			toplam += i;
		}

	}

	printf("8'den 35'e kadar cift sayilarin toplami: %d",toplam);
}
