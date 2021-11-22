/* data una matrice NxN 
 * leggere i dati in input
 * ruotare di 90° in senso antiorario la matrice
 * stampare il risultato
*/

/* usare una sola matrice */

#include <stdio.h>

#define N 3

int main() {
	int mat[N][N];
	int mat2[N][N];
	int i, j;
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("Inserisci l'elemento (%d, %d) -->\t", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			mat2[i][j] = mat[j][N -1 -i]
		}
	}
	
	return 0;
}
