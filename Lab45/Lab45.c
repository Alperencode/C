#include <stdio.h>

// � Kullan�c�n�n girdi�i basamak kadar merdiven �eklinde basamak �izdiren kodu yaz�n�z.
int main(){
	
	int i,j,basamak,bosluk;
	
	printf("Basamak sayisini giriniz\n>");
	scanf("%d",&basamak);
	
	// logic:
	// 6 y�ld�z
	// 5 bo�luk 1 y�ld�z (x2)
	// 5 bo�luk + 6 y�ld�z
	// 10 bo�luk 1 y�ld�z (x2)
	// 10 bo�luk + 6 y�ld�z
	
	for(i = 0; i < basamak; i++){
		for(j = 1; j <= bosluk; j++) {
			printf(" ");	
		}
		printf("******\n");
		bosluk += 5;
		
		for(j = 1; j <= bosluk + 1; j++){
			if(j == bosluk + 1) printf("*\n");
			else printf(" ");
		}
		for(j = 1; j <= bosluk + 1; j++){
			if(j == bosluk + 1) printf("*\n");
			else printf(" ");
		}
	}
}
