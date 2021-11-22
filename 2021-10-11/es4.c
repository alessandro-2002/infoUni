/* esercitazione Chiari 11/10/2021 */
/* data una sequenza di 10 numeri in input in un array ordinarli in ordine crescente (bubble sort) */

#include <stdio.h>

#define DIM 10

int main() {
	int arr[DIM];
	int i, j, temp;
	
	for(i = 0; i < DIM; i++) {
		printf("Inserisci il valore %d -->\t",  i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < DIM-1; i++) {
		for(j = 0; j < DIM-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nArray ordinato:\n");
	for(i = 0; i < DIM; i++) {
		printf("%d ",  arr[i]);
	}
	
	printf("\n");
	
	return 0;
}
