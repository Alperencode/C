int strncat_ostim(char s1[], char s2[], int limit) 
{
     // for d�ng�s� ile metini harf harf geziyor
	 for (int i=0; i < limit; i++){
	 	
	 	  // Karakterleri kar��la�t�r�p geri d�nd�rmesi gereken de�eri d�nd�r�yor
          if (s1[i] < s2[i])
               return -1;
          if (s1[i] > s2[i])
               return 1;
     }
     
     // Karakterler aras�nda fark yoksa 0 d�n�yor
     return 0;

}       


#include <stdio.h>
#include <stdlib.h>


int main() {

char s1 [] = "Ostim Teknik Universitesi";
char s2 [] = "Ostim Teknik Universitesi";

int sonuc = strncat_ostim(s1,s2,20);
printf("%d \n",sonuc);

}
	

