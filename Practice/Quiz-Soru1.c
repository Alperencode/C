#include <stdio.h>

/*

Soru 1) Kullan�c�dan 3 de�er al�n�z. Ald���n�z de�erleri pointer ile ortalama isimli bir fonksiyona g�nderiniz.
3 de�erin ortalamas�n� hesaplay�p fonksiyona parametre gelen istedi�iniz bir de�ere  kaydediniz.
Fonksiyonu  Main�de  �a��rd���n�z  yerin  alt�nda  pointer�dan  ortalama de�erini ekrana yazd�r�n.(5 Puan)

*/

void ortalama(int*,int*,int*,float*);

int main(){
	float ort;
	int s1,s2,s3;
	
	printf("3 not giriniz\n>");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	ortalama(&s1,&s2,&s3,&ort);
	
	printf("\nOrtalama: %.2f",ort);
}

void ortalama(int *s1, int *s2,int *s3,float *ort){
	*ort = (*s1+*s2+*s3)/3;
}
