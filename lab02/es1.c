/* lab 02 Conti */

#include <stdio.h>

#define DIM 4

int main() {
	float mat[DIM][DIM];
	int i, j;
	
	for(i = 0; i < DIM; i++) {
		for(j = 0; j < DIM; j++) {
			printf("Inserisci l'elemento (%d,%d)\n", i, j);
			scanf("%f", &mat[i][j]);
		}
	}
	
	for(i = 0; i < DIM; i++) {
		printf("%f\n", mat[i][i]);
	}
	
	return 0;
}
