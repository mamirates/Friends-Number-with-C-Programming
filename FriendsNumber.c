#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Ýki sayý birbirinin  kendisi hariç bölenleri toplamýna eþitse bu sayýlara arkadaþ sayýlar denir.
//Örnek: 220 ve 284
// 220 : 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284 284 : 1 + 2 + 4 + 71 + 142 = 220

int function(int N){
	int i,j,counter=0;
	for(i=1;i<N;i++){
		if(N%i==0){
			counter=counter+i;
		}
	}
	return counter;
}

int main(){
	int A,B;
	printf("\tArkadas Sayi Bulma Programi\n");
	printf(" Arkadas1 Sayisini Giriniz:");
	scanf("%d",&A);  
	printf(" Arkadas2 Sayisini Giriniz:");
	scanf("%d",&B);
		if(function(A)==B && function(B)==A) {
			printf("Arkadas1 Ve Arkadas2 Arkadas Sayilardir."); 
		}
		else{
			printf("Arkadas Degiller");
		}	  
	return 0;
} 
