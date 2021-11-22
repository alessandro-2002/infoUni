/* matrici */

#include <stdio.h>

#define NR 2
#define NC 3

int main() {
	int mat[NR][NC], i, j, k, h;
	
	for(i = 0; i < NR; i++) {
		for(j = 0; j < NC; j++) {
			printf("Inserisci l'elemento (%d, %d) -->\t", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < NR; i++) {
		for(j = 0; j < NC; j++) {
			printf("%d", mat[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nInserisci un numero di riga -->\t");
	scanf("%d", &k);
	
	for(j = 0; j < NC; j++) {
		mat[k][j] = 0;
	}
	
	for(i = 0; i < NR; i++) {
		for(j = 0; j < NC; j++) {
			printf("%d", mat[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nInserisci un numero di colonna -->\t");
	scanf("%d", &h);
	
	for(i = 0; i < NC; i++) {
		mat[i][h] = 1;
	}
	
	for(i = 0; i < NR; i++) {
		for(j = 0; j < NC; j++) {
			printf("%d", mat[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
