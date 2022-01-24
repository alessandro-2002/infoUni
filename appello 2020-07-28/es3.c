/* Alessandro Toninelli */
/* Esercizio da appello 2020-07-28*/
/* es3  */

#include <stdio.h>
#include <stdlib.h>

#define NRIG 10
#define NCOL 10

void maggiore(int mat[][NCOL], int *r, int *c, int val) {
	int i, j;
	int somma;
	int trovato;
	
	somma = 0;
	trovato = 0;
	
	for(i = 0; i < NRIG && !trovato; i++) {
		for(j = 0; j < NCOL && !trovato; j++) {
			somma += mat[i][j];
			
			if(somma > val) {
				trovato = 1;
				*r = i;
				*c = j;
			}
		}
	}
	
	if(!trovato) {
		*r = -1;
		*c = -1;
	}
}
