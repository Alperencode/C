// 1) Klavyeden Girilen �� a, b ve c kenar uzunluklar�na g�re bir ��genin alan�n�
// P=(a+b+c)/2 ve Alan = P*((P-a)*(P-b)*(P-c))
// Form�l� ile hesaplayarak yazd�ran program kodunu yaz�n�z.
#include <stdio.h>
#include <math.h>
int main(){
	
	int a,b,c,p,alan,karekok;
	printf("Ucgenin kenar uzunluklarini giriniz:\n>");
	scanf("%d %d %d",&a,&b,&c);
	
	p = (a+b+c)/2;
	alan = p*((p-a)*(p-b)*(p-c));
	karekok = sqrt(alan);

	printf("\nUcgenin alani: %d",karekok);	
	
}

