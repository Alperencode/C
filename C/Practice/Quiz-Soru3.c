#include <stdio.h>
#include <stdlib.h>

/*

Soru  1) Sayi1 ve Sayi2 diye 2 adet integer�i i�erensoru isimli bir structure olu�turunuz.
Kullan�c�dan ald���n�z 2de�eri soru isimli structure�daki ilgili alanlara yaz�n�z.
Print isimli bir fonksiyon tan�mlay�n�z.
Fonksiyona parametre olarak gelen soru structure i�inden de�i�kenleri fonksiyon i�inde yazd�ran kodu yaz�n�z. (5 Puan)
Not: Fonksiyon Main�in alt�nda yaz�lacakt�r.

*/

typedef struct {
	int Sayi1,Sayi2;
}soru;

void print(soru);

int main(){
	
	soru s1;
	printf("Sayi degerlerini giriniz\n>");
	scanf("%d%d",&s1.Sayi1,&s1.Sayi2);
	print(s1);
}

void print(soru Soru){
	printf("Sayi 1: %d\nSayi 2: %d",Soru.Sayi1,Soru.Sayi2);
}
