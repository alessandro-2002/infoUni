/* es.2 - invertire il contenuto di un array (solo un array) e stamparlo */ 

#include <stdio.h>

#define DIM 20

int main() {
	int vet[DIM];
	int i, t;
	
	for(i = 0; i < DIM; i++) {
		printf("Inserisci l'elemento %d --> ", i+1);
		//scanf("%d", &vet[i]);
	}
	
	/* inversione */
	for(i = 0; i < DIM/2; i++) {
		t = vet[i];
		vet[i] = vet[DIM-1-i];
		vet[DIM-1-i] = t;
	}
	
	printf("\nStampa\n");
	for(i = 0; i < DIM; i++) {
		printf(" %d ", vet[i]);
	}
	
	printf("\n");
	
	return 0;
}
