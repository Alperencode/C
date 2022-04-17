#include <stdio.h>
#include <string.h>
#include <locale.h>

/*

Soru 2) oyun isimli bir structure�miz vard�r. 
Bu structure oyunismi ismiyle bir char dizisi de�i�keni ve cikisyili ismi ile bir integer de�i�keninden olu�maktad�r.
Kullan�c�dan al�nan ve s1 isimli stringe kay�tl� oyun ismi structure�deki oyunismi de�i�kenine, kullan�c�dan al�nan ve t1 isimli integer ise cikisyili isimli de�i�kene atanacakt�r.
Daha sonra yazd�r isimli bir fonksiyona oyun�u pointer ile g�nderiniz.
Yazd�r isimli fonksiyon i�inde structure i�indeki de�erleri ekrana yazd�r�n�z. (5 Puan)

Not: Girdiler T�rk�e Karakter ��erebilir.

*/

typedef struct {
	char oyunismi[50];
	int cikisyili;
}oyun;

void yazdir(oyun);

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	oyun o1;
	char s1[50];
	int t1;
	
	printf("Oyun ismi giriniz: ");
	scanf("%s",s1);
	strcpy(o1.oyunismi,s1);
	
	printf("\nOyun cikis yili giriniz: ");
	scanf("%d",&t1);
	o1.cikisyili = t1;
	
	yazdir(o1);
}

void yazdir(oyun o){
	printf("Oyunun ismi: %s\nCikis yili: %d",o.oyunismi,o.cikisyili);
}


