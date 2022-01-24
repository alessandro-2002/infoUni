#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

int conta(int mat[][M], int nR, int nC,int val) {
	int i, j, count;
	count=0;
	for(i=0; i<nR; i++) {
		for(j=0; j<nC; j++) {
			if(mat[i][j] == val)
				count++;
		}
	}
	return count;
}

int* distinti(int mat[][M], int nR, int nC, int *nDist) {
	int i, j, num, k, *vet;

	*nDist = 0;
	for(i=0; i<nR; i++) {
		for(j=0; j<nC; j++) {
			num = conta(mat, nR, nC, mat[i][j]);
			if(num==1) {
				*nDist = *nDist +1;
			}
		}
	}
	vet = malloc(sizeof(int) * (*nDist));

	if(vet) {
		k=0;
		for(i=0; i<nR && k < (*nDist); i++) {
			for(j=0; j<nC && k < (*nDist); j++) {
				num = conta(mat, nR, nC, mat[i][j]);
				if(num==1) {
					vet[k]=mat[i][j];
					k++;
				}
			}
		}
	} else {
		printf("Errore allocazione");
		vet=NULL;
	}
	return vet;

}

int main() {
	int mat[N][M] = {{1,3,1},
		{3,2,4},
		{10,-8,1}
	};
	int nDistinti, *vet, i;
	vet = NULL;

	vet = distinti(mat, N, M, &nDistinti);
	
	for(i=0; i<nDistinti; i++) {
		printf("%d ",vet[i]);
	}

	free(vet);
	return 0;
}
