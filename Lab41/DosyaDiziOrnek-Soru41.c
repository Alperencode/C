#include <stdio.h>

// �kinci soru
// Kullan�c�dan bir dizi doldurmas�n� istiyor
// Dizinin pozitif elemanlar�n� yazd�rmas�n� negatif elemanlar�n�n yerine 0 yazd�rmas�n� istiyor

// Not: Ben dizinin uzunlu�unu da kullan�c�dan ald�m
int main(){

	// Dizi uzunlu�u i�in diziuzunlugu, for d�ng�s� i�in i, dizi elemanlar�n� atamak i�in gecici de�i�lenlerini olu�turuyorum
	int diziuzunlugu,i,gecici;
	
	// kullan�c�dan dizi uzunlu�unu girmesini istiyorum
	printf("Dizinin uzunlugunu giriniz:\n");
	scanf("%d",&diziuzunlugu);
	printf("\n");
		
	// dizi uzunlu�unu kullanarak dizimi olu�turuyorum
	int dizi[diziuzunlugu];
	
	// for d�ng�s� ile diziyi gezip her gezdi�imde kullan�c�dan ald���m de�eri o anki elemana at�yorum
	for(i = 0; i < diziuzunlugu; i++){
		
		// kullan�c�dan alma i�lemi
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&gecici);
		
		// atama i�lemi
		dizi[i] = gecici;
		
	}
	
	// yazd�rmak istedi�im dosyay� a��yorum ya da yarat�yorum
	FILE *dosya = fopen("diziDosyasi.txt","w");
	
	// for d�ng�s� ile diziyi bir daha gezip pozitif ve negatif de�erleri ay�r�yorum
	for(i = 0; i < diziuzunlugu; i++){
		
		// de�er pozitifse eleman� dosyaya yazd�r�yorum
		if(dizi[i] >= 0){
			
			fprintf(dosya,"%d ",dizi[i]);
			
		// negatifse 0 yazd�r�yorum
		}else{
			
			fprintf(dosya,"0 ");
			
		}
		
	}
	
	// dosyay� kapat�yorum
	fclose(dosya);
	return 0;
}
