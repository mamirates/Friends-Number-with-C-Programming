#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�ki say� birbirinin  kendisi hari� b�lenleri toplam�na e�itse bu say�lara arkada� say�lar denir.
//�rnek: 220 ve 284
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
