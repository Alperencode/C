#include <stdio.h>

/*

Soru 2) 6 elemanl� bir integerdizisinin 3. Eleman�n� g�steren bir pointer��n�z mevcuttur.
Dizi ismi dizi1, pointer ismi p1 dir.(5 Puan)

S�rayla a�a��daki i�lemleri yapan kodu yaz�n�z.
- Dizinin 3. Eleman�n de�erini bir artt�r
- Dizinin 1. ve 2. Eleman�n de�erini topla 4. elemana yaz
- Dizinin 5. Eleman�n�n de�erini 2 azalt.
- T�m diziyi ekrana d�ng� ile yazd�r

*/

int main(){
	int i;
	int dizi1[6] = {10,20,30,40,50,60};
	int *p1 = &dizi1[2];

	*p1 += 1;
	*(p1+1) = *(p1-1)+*(p1-2);
	*(p1+2) -= 2;
	for(i=0;i<6;i++) printf("%d. eleman: %d\n",i+1,dizi1[i]);
}
