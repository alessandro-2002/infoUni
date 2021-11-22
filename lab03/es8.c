/* Laboratorio 3 */
/* 18/11/2021 */
/* es 3.8 */

#include <stdio.h>
#include <math.h>

#define N 3

typedef struct{
	int x;
	int y;
} point_t;

float dist(point_t, point_t);
int regolare(point_t mat[][N]);

int main() {
	point_t mat[N][N];
	int i, j, isRegolare;
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("Inserisci x y del punto (%d, %d)\n", i, j);
			scanf("%d%d", &mat[i][j].x, &mat[i][j].y);
		}
	}
	
	isRegolare = regolare(mat);
	
	if(isRegolare) {
		printf("Matrice regolare\n");
	} else {
		printf("Matrice non regolare\n");
	}
	
	return 0;
}

float dist (point_t p1, point_t p2) {
	float res;
	
	res = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	
	return res;
}

int regolare(point_t mat[][N]) {
	float lDiagonale, lColonna, lRiga;
	int i, j, isMaggiore;
	
	/* calcoloo lunghezza su diagonale */
	lDiagonale = 0;
	for(i = 0; i < N-1; i++) {
		lDiagonale += dist(mat[i][i], mat[i+1][i+1]);
	}
	
	/* calcolo lunghezza su colonne, righe e controllo */
	isMaggiore = 0;
	
	for(i = 0; i < N && !isMaggiore; i++) {
		lRiga = 0;
		lColonna = 0;
		for(j = 0; j < N-1; j++) {
			lRiga += dist(mat[i][j], mat[i][j+1]);
			lColonna += dist(mat[j][i], mat[j+1][i]);
		}
		
		if(lColonna >= lDiagonale || lRiga >= lDiagonale) {
			isMaggiore = 1;
		}		
	}
	
	if(isMaggiore) {
		return 0;
	} else {
		return 1;
	}
}




