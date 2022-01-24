#include <stdio.h>

#define M 4
#define N 3

int inverti(int mat[][N], int new[][N]) {
	int i,j,count,isZero;
	
	count =0;
	for(i=0;i<M;i++) {
		if(mat[i][0] ==0) {
			isZero=1;
			count++;
		}else{
			isZero=0;
		}
		
		for(j=0;j<N;j++) {
			if(isZero)
				new[M-1-i][j] = 0;
			else
				new[M-1-i][j] = mat[i][j];
		}
	}
	return count;
}

int main() {
	int mat[M][N], new[M][N],i,j,azzerate;
	
	for(i=0;i<M;i++) {
		for(j=0;j<N;j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	
	azzerate=inverti(mat,new);
	
	printf("Azzerate %d\n",azzerate);
	
	for(i=0;i<M;i++) {
		for(j=0;j<N;j++) {
			printf("%d\t", new[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
