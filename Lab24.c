#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// char dizisi olu�turdum
	char str1[50];
	
	// kullan�c�dan de�er ald�m
	printf("Metni Giriniz: ");
	scanf("%s", str1);
	
	// strlen() ile dizinin uzunlu�unu al�yorum
	int uzunluk = strlen(str1);
	// son elemandan geriye do�ru da bir kontrol yap�ca��m i�in son eleman�n indexine eri�mek i�in uzunluktan 1 ��kar�yorum
	// (�rn: uzunluk 7 olursa son index'in 6 olmas� gerekicek)
	int sonEleman = uzunluk - 1;
	
	// Sonradan if ile palindrom olup olmad���n� kontrol edece�im i�in bir de�i�ken tutuyorum
	int palindrom = 0;
	int i;
	for(i=0; i<uzunluk;i++){
		
		// ba�tan sona ve sondan ba�a bir �ekilde kontrol ediyorum
		// e�er harfler ayn� de�ilse palindrom de�ildir o y�zden de�i�keni 1 yap�yorum
		if(str1[i] != str1[sonEleman-i]){
			palindrom = 1;
		}
	}
	
	// De�i�keni kontrol ederek sonucu yaz�yorum
	if(palindrom == 1) printf("\nKelime palindromdur de�ildir");
	if(palindrom == 0) printf("\nKelime palindromdur");
}
