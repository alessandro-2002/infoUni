/* lab 02 Conti */

#include <stdio.h>

#define R 4
#define C 3

int main() {
	int A[R][C], AT[C][R];
	int i, j;
	
	for(i = 0; i < R; i++) {
		for(j = 0; j < C; j++) {
			printf("Inserisci l'elemento (%d,%d)\n", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i = 0; i < R; i++) {
		for(j = 0; j < C; j++) {
			AT[j][i] = A[i][j];
		}
	}
	
	printf("\n");
	
	for(i = 0; i < C; i++) {
		for(j = 0; j < R; j++) {
			printf("%d\t", AT[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
