#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// char dizisi olu�turdum
	char str1[50];
	
	// kullan�c�dan de�er ald�m
	// birden fazla kelime alaca��m i�in fgets ile ald�m
	printf("Metni Giriniz: ");
	fgets(str1, sizeof str1, stdin);
	
	// for ile ald���m metnin i�ini geziyorum
	int i;
	// strlen() dizinin uzunlu�unu veriyor
	int uzunluk = strlen(str1);
	for(i=0;i<uzunluk;i++){
		
		// Geldi�i�i karakter bo�luk olursa alt sat�ra ge�iyor
		// bo�luk de�ilse yazmaya devam ediyor		
		if(str1[i]==' '){
			printf("\n");
		}else{
			printf("%c",str1[i]);
		}
	}

}
