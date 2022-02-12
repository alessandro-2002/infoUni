#include <stdio.h>

#define N 5
#define M 4

int fascia(int Mat[][M], int k) {
	int len, i, j, fine;

	len = 0;
	fine = 0;

	for(i=0; i < N && !fine; i++) {
		for(j=0; j<M && !fine; j++) {
			if(Mat[i][j] == k) {
				len++;
			} else if(len>0) {
				fine = 1;
			}
		}
	}

	return len;
}

int fasciaMax(int Mat[][M], int k) {
	int len, i, j, max;

	len = 0;
	max = 0;

	for(i=0; i < N; i++) {
		for(j=0; j<M; j++) {
			if(Mat[i][j] == k) {
				len++;
			} else if(len>0) {
				if(len>max) {
					max = len;
				}
				len = 0;
			}
		}
	}

	return max;
}

int main() {
	int mat[N][M] = {{3,5,2,4},
		{4,4,2,3},
		{1,4,4,4},
		{4,4,4,6},
		{7,3,1,2}
	};

	printf("%d\n", fasciaMax(mat, 4));

	return 0;
}
