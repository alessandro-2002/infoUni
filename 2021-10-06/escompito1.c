/* es.1 - inizializzare un array di DIM 20 e poi stampare il contenuto a partire dall'ultimo elemento */

#include <stdio.h>

#define DIM 20

int main() {
	int vet[DIM];
	int i;
	
	for(i = 0; i < DIM; i++) {
		printf("Inserisci l'elemento %d --> ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nStampa\n");
	for(i = DIM-1; i >= 0; i--) {
		printf(" %d ", vet[i]);
	}
	
	printf("\n");
	
	return 0;
}
