#include <stdio.h>

// ���nc� soru
// Ka� sat�r oldu�unu bilmedi�imiz bir dosyan�n �ift sat�rlar�n� atlay�p tek sat�rlar� ekrana yazd�rmam�z� istiyor

int main(){
	
	// hangi sat�rda oldu�umu tutmas� i�in satirsayisi de�i�kenini olu�turuyorum
	int satirsayisi;
	
	// okumak i�in dosyay� "r" ile a��yorum
	FILE *dosya = fopen("ornek2.txt","r");
	
	// okudu�u sat�r� yazd�rabilmesi i�in char dizisi tan�ml�yorum
	char satir[255];
	
	// dosyadaki sat�r say�s� bitene kadar �al��an while d�ng�s�n� yaz�yorum
	do{
		// ka��nc� sat�rda oldu�umu anlamak i�in
		// d�ng� her d�nd���nde sat�r say�s�n� artt�r�yorum 
		satirsayisi++;
		
		// fgets() sat�r sat�r dosyay� okumam�z� sa�l�yor
		// ilk �nce dizinin ismini sonra dizinin uzunlu�unu sonra da dosya de�i�kenini al�yor
		fgets(satir,255,(FILE*)dosya);
		
		// e�er sat�r say�s� tek ise sat�r� yazd�r�yorum
		if(satirsayisi%2 != 0){
			printf("%s",satir);
		}
		
	 // sat�r say�s�n�n bitmesini kontrol eden �ey !feof(dosya) fonksiyonu
	 // Sat�r say�s� bitmedi�i s�rece d�ng�y� d�nd�r anlam�na geliyor
 	}while(!feof(dosya));
	
	// dosyay� kapat�yorum	
	fclose(dosya);
	
	return 0;
}
