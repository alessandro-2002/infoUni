#include <stdio.h>

#define NC 3
#define NR 3

void vicino(int[][NC],int[],int,int);

int main() {
	int mat[NR][NC]= {{0,3,5},
		{1,4,7},
		{2,1,1}
	};
	int vet[NC],nr, nc,i;
	nr=NR;
	nc=NC;
	vicino(mat,vet,nr,nc);

	for(i=0; i<nc; i++) {
		printf("%d ", vet[i]);
	}
	printf("\n");
	return 0;
}

void vicino(int mat[][NC],int vet[],int nr,int nc) {
	int i,j,max,prec;
	for(j=0; j<nc; j++) {

		max=mat[0][j];
		for(i=1;i<nr;i++){
			if(mat[i][j]>max){
				prec=max;
				max=mat[i][j];
			}else if(i==1 || mat[i][j] > prec){
				prec=mat[i][j];
			}
			printf("i=%d j=%d max: %d prec: %d\n",i,j,max,prec);
		}
		vet[j]=prec;
	}
}
