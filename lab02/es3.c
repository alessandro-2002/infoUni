/* lab 02 Conti */

#include <stdio.h>

#define DIM 4

typedef int numero;
typedef numero matrice[DIM][DIM];

int main() {
	matrice A, B;
	int i, j;
	
	printf("\nMATRICE A\n");
	for(i = 0; i < DIM; i++) {
		for(j = 0; j < DIM; j++) {
			printf("Inserisci l'elemento (%d,%d)\n", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("\nMATRICE B\n");
	for(i = 0; i < DIM; i++) {
		for(j = 0; j < DIM; j++) {
			printf("Inserisci l'elemento (%d,%d)\n", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i = 0; i < DIM; i++) {
		for(j = 0; j < DIM; j++) {
			if(A[i][j] == B[i][j]) {
				printf("(%d, %d)\n", i, j);
			}
		}
	}
	
	return 0;
}
