#include <stdio.h>

// �lk soru
// dosya olu�turup sat�r sat�r isim-soyad�-numara yazd�rmam�z� istiyor

int main(){
	
	// Yazd�rmak istedi�im dosya de�i�kenini olu�turuyorum "w" ile yazmak istedi�imi belirtiyorum
	FILE *dosya = fopen("dosya.txt","w");
	
	// w: write
	// r: read
	
	// fprintf ile ilk �nce yazmak istedi�im dosyay� g�steriyorum sonra yazmak istedi�im �eyi yazd�r�yorum
	fprintf(dosya,"Alperen\nA�a\n210205058");
	
	// dosyay� kapat�yorum
	fclose(dosya);
	return 0;
	
}
