#include <stdio.h>

int main(){
	
	char menu[120] = "\n==== Menu ==== \nPota Seciniz\n1) Pota 1 (Kolay)\n2) Pota 2 (Orta)\n3) Pota 3 (Zor)\n4) Cikis\n\nSecim Yapiniz: ";
	int secim,i,ihtimal,atis;
	
	// ��k�� se�ilmedi�i s�rece d�ng� devam eder
	while(secim != 4){
		int basariliAtis = 0;  // Ba�ar�l� at�� her oyunda s�f�rlan�r
		
		printf("%s",menu);  // men�
		scanf("%d", &secim);  // pota se�imi
		
		switch(secim){
			case 1:
				printf("\nKac atis yapmak istersiniz: ");
				scanf("%d", &atis);
				
				srand(time(NULL)); // random say� �reticiyi s�f�rl�yoruz
				
				for(i=0; i<atis; i++){
					ihtimal = rand() % 10; // 0-10 aras� say� �retiyoruz
					
					printf("\n%d. Atis: ", i+1);
					if(ihtimal >= 3){
						// %70 ihtimalle ba�ar�l�
						printf("Basarili.");
						basariliAtis++;
					}else{
						printf("Basarisiz.");
					}
				}
				
				printf("\n");
				break;
				
			case 2:
				printf("\nKac atis yapmak istersiniz: ");
				scanf("%d", &atis);
				
				srand(time(NULL));
				
				for(i=0; i<atis; i++){
					ihtimal = rand() % 10;
					
					printf("\n%d. Atis: ", i+1);
					if(ihtimal >= 5){
						// %50 ihtimalle ba�ar�l�
						printf("Basarili.");
						basariliAtis++;
					}	
					else{
						printf("Basarisiz.");
					}
				}
				
				printf("\n");
				break;
				
			case 3:
				printf("\nKac atis yapmak istersiniz: ");
				scanf("%d", &atis);
				
				srand(time(NULL));
				
				for(i=0; i<atis; i++){
					ihtimal = rand() % 10;
					
					printf("\n%d. Atis: ", i+1);
					if(ihtimal >= 7){
						// %30 ihtimalle ba�ar�l�
						printf("Basarili.");
						basariliAtis++;
					}else{
						printf("Basarisiz.");
					}
				}
				
				printf("\n");
				break;
				
			default:
				// Men�de olmayan se�im yap�l�rsa
				break; // D�ng� ba�a d�ner
		}
		printf("\n--- Basarili Atis: %d --- \n", basariliAtis);
	}
}
