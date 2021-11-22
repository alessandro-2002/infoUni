/* esercitazione Chiari 11/10/2021 */
/* dati 2 array trovare se uno è una permutazione dell'altro' */

#include <stdio.h>

#define DIM 10

int main() {
	int arr1[DIM], arr2[DIM];
	int i, j, permutazione;
	int conto1, conto2;
	
	printf("*** Primo Array ***\n");
	for(i = 0; i < DIM; i++) {
		printf("Inserisci il numero %d -->\t", i+1);
		scanf("%d", &arr1[i]);
	}
	
	printf("\n*** Secondo Array ***\n");
	for(i = 0; i < DIM; i++) {
		printf("Inserisci il numero %d -->\t", i+1);
		scanf("%d", &arr2[i]);
	}
	
	permutazione = 1;
	
	for(i = 0; i < DIM && permutazione; i++) {
		conto1 = 0;
		conto2 = 0;
		
		for(j = 0; j < DIM; j++) {
		
			/* conto insieme le ricorrenze dei 2 array */
			
			if(arr1[j] == arr1[i]) {
				conto1++;
			}
			
			if(arr2[j] == arr1[i]) {
				conto2++;
			}
		}
		
		if(conto1 != conto2) {
			permutazione = 0;
		}
	}
	
	if(permutazione) {
		printf("\nE' una permutazione\n");
	} else {
		printf("\nNon e' una permutazione\n");
	}
	
	return 0;
}
