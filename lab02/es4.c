/* lab 02 Conti */

#include <stdio.h>

#define DIM 4

typedef int numero;
typedef numero matrice[DIM][DIM];

int main() {
	matrice A = {{1,9,10,4},{55,-5,7,4},{19,23,22,12},{3,4,5,88}};
	int i, j, c, r;
	
	/*
	for(i = 0; i < DIM; i++) {
		for(j = 0; j < DIM; j++) {
			printf("Inserisci l'elemento (%d,%d)\n", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	*/
	for(i = 0; i < DIM; i++) {
		for(j = 0; j < DIM; j++) {
			
			/* cella sopra */
			if(i-1 == -1) {
				r = DIM-1;
			} else {
				r = i-1;
			}
			c = j;			
			
			if(A[r][c] <= A[i][j]){
			
			 	/* cella a lato sx*/
			 	if(c-1 == -1) {
					c = DIM-1;
				} else {
					c = c-1;
				}
				r = i;
				
				if(A[r][c] <= A[i][j]) {
					/* cella sotto */
					if(i+1 == DIM) {
						r = 0;
					} else {
						r = i+1;
					}
					c = j;	
					
					if(A[r][c] <= A[i][j]) {
						/* cella a lato dx */
						
						if(j+1 == DIM) {
							c = 0;
						} else {
							c = j+1;
						}
						
						r = i;
							
						if(A[r][c] <= A[i][j]) {
							A[i][j] = 0;
						}
					}
				}
				
			}
		}
	}
	
	printf("\n");
	
	for(i = 0; i < DIM; i++) {
		for(j = 0; j < DIM; j++) {
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
	
}
