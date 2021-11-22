/* esercitazione Chiari 11/10/2021 */
/* acquisire 10 numeri interi in un array e copiarli in ordine inverso in un secondo array, poi stamparli */

#include <stdio.h>

#define DIM 10

int main() {
	int arr1[DIM];
	int arr2[DIM];
	int i;
	
	/* input */
	for(i = 0; i < DIM; i++) {
		printf("Inserisci il numero %d -->\t", i+1);
		scanf("%d", &arr1[i]);
	}
	
	/* inversione */
	for(i = 0; i < DIM; i++) {
		arr2[i] = arr1[DIM-1-i];
	}	
	
	/* stampa */
	printf("\nArray invertito:\n");
	
	for(i = 0; i < DIM; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	
	return 0;
}
