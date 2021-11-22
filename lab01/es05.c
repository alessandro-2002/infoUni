/* letto un array A di 10 elementi e B di 5 elementi
 * Stampare "CONTIENE" se A contiene la sequenza contigua dei numeri di B 
 * Altrimenti non stampa nulla */
 
#include <stdio.h>

#define DIMA 10
#define DIMB 5

int main() {
	/* dichiarazione variabili */
	int A[DIMA];
	int B[DIMB];
	
	int i, j, contiene;
	
	contiene = 0;
	
	/* input array A */
	printf("*** Input array A ***\n");
	for(i = 0; i < DIMA; i++) {
		printf("Inserisci il %d^ elemento -->\t", i+1);
		scanf("%d", & A[i]);
	} 
	
	/* input array B */
	printf("\n\n*** Input array B ***\n");
	for(i = 0; i < DIMB; i++) {
		printf("Inserisci il %d^ elemento -->\t", i+1);
		scanf("%d", & B[i]);
	} 
	
	/* controllo */
	for(i = 0; i < DIMA- DIMB && !contiene; i++) {
		if(A[i] == B[0]) {
			contiene = 1;
			for(j = 0; j < DIMB && contiene; j++) {
				if(A[i+j] != B[j]) {
					contiene = 0;
				}
			}
		}
	}
	
	/* stampa risultato */
	if(contiene) {
		printf("\nCONTIENE");
	}
	
	printf("\n");
	
	return 0;
}
