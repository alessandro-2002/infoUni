/* esercitazione Chiari 11/10/2021 */
/* dato un array riempito in input di 10 elementi stampa il valore di tutti gli elementi omettendo i duplicati (stampa solo il primo) */

#include <stdio.h>

#define DIM 10

int main() {
	int arr[DIM];
	int i, j, duplicato;
	
	/* input */
	for(i = 0; i < DIM; i++) {
		printf("Inserisci il valore %d -->\t", i+1);
		scanf("%d", &arr[i]);
	}
	
	/* stampa */
	for(i = 0; i < DIM; i++) {
		duplicato = 0;
		
		for(j = i-1; j >= 0 && !duplicato; j--) { /* oppure crescente */
			if(arr[i] == arr[j]) {
				duplicato = 1;
			}
		}
		
		if(!duplicato) {
			printf("%d ", arr[i]);
		}
		
	}
	
	printf("\n");
	
	return 0;
}
