#include <stdio.h>
#define DIM 10

int baricentro(int vet[],int lenVet) {
	int ris, i, j, sommaDx, sommaSx, trovato;
	trovato = 0;
	ris = -1;

	for(i=0; i<lenVet && !trovato; i++) {
		sommaDx=0;
		sommaSx=0;
		for(j=i; j>=0; j--) {
			sommaSx+=vet[j];
		}
		for(j=i+1; j<lenVet; j++) {
			sommaDx+=vet[j];
		}
		if(sommaSx==sommaDx){
			trovato=1;
			ris=i;
		}
	}
	return ris;
}

int main(){
	int vet[DIM] = {1,5,10,4,4,2,7};
	
	printf("%d\n", baricentro(vet,7));
	return 0;
}
