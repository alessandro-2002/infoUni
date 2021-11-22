/* dati 5 valori !negativi fare istogramma a barre verticali */

#include <stdio.h>

#define DIM 5

int main() {
	/* dichiarazione variabili */
	int arr[DIM];
	int i, j, max;
	
	/* input array */
	for(i = 0; i < DIM; i++) {
		do{
			printf("Inserisci il %d^ valore -->\t", i+1);
			scanf("%d", &arr[i]);
		} while(arr[i] < 0);
	}
	
	/* trovo il valore massimo */
	max = 0;
	for(i = 0; i < DIM; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	printf("\n");
	
	/* stampo l'istogramma */
	for(i = 0; i < max; i++) {
		for(j = 0; j < DIM; j++) {
			if(max - i <= arr[j]) {
				printf("*\t");
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
	
	return 0;
}

