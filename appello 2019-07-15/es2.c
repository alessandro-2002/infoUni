#include <stdio.h>

#define NCOL 5

void primoMaggiore(int mat[][NCOL], int val, int nRighe, int nColonne, int *r, int *c) {
	int i, j, somma, trovato;
	
	somma = 0;
	trovato = 0;
	*r = -1;
	*c = -1;
	
	for(i = 0; i < nRighe && !trovato; i++) {
		for(j = 0; j < nColonne && !trovato; j++) {
			somma += mat[i][j];
			
			if(somma > val) {
				trovato = 1;
				*r = i;
				*c = j;
			}
		}
	}
}

int main() {
	int mat[2][NCOL] = {{1,2,5,4,3},
						{4,5,13,1,-1}};
	int r, c, val;
	
	scanf("%d", &val);
	
	primoMaggiore(mat, val, 2, NCOL, &r, &c);
	
	printf("\nr: %d c: %d\n", r, c);
	
	return 0;
}
