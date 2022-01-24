#include <stdio.h>

#define DIM 7

int trova(int arr[],int,int*,int*);

int main() {
	int arr[DIM] = {4,5,6,7,7,88,22};
	int max,qMax;
	int trovato;
	
	trovato = trova(arr, DIM, &max, &qMax);
	printf("Risultato: %d %d %d\n", trovato,max,qMax);
	return 0;
}

int trova(int arr[], int nElementi, int *max, int *quasiMax){
	int i,j;
	int trovato;
	
	*max=0;
	*quasiMax=0;
	trovato=0;
	
	for(i=0;i<nElementi;i++) {
		if(arr[i]>*max) {
			*quasiMax=*max;
			*max=arr[i];		
		}
		for(j=i+1;j<nElementi && !trovato; j++) {
			if(arr[i] +arr[j] ==17) {
				trovato=1;
			}
		}		
		
	}
	return trovato;
}
