#include <stdio.h>

#define N 5

int modulo(int num) {
	if(num < 0)
		return (-num);
	else
		return num;
}

void differenze(int mat[][N], int nR, int nC, int *mini, int *maxi) {
	int i,j,k,maxC,minC,diff,max,min;

	*maxi=0;
	*mini=0;
	for(j=0; j<nC; j++) {
		for(i=0; i<nR-1; i++) {
			for(k=i+1; k<nR; k++) {
				diff=modulo(mat[i][j]-mat[k][j]);
				if(i==0) {
					maxC=diff;
					minC=diff;
				} else if(diff < minC) {
					minC=diff;
				} else if(diff>maxC) {
					maxC=diff;
				}
			}
		}
		if(j==0) {
			max=maxC;
			min=minC;
		} else if(maxC>max) {
			*maxi=j;
			max=maxC;
		} else if(minC<min) {
			*mini=j;
			min=minC;
		}
	}
}

int main() {
	int mat[N][N] = {{2,5,10,15,18},
		{11,7,7,20,15},
		{5,5,7,11,22},
		{6,1,3,16,19},
		{7,1,2,10,18}
	};
	int min, max;

	differenze(mat, N, N, &min, &max);

	printf("%d %d\n", min, max);
	return 0;
}
