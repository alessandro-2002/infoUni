#include <stdio.h>
#include <stdlib.h>
#define N 5

int *somme_prefisse(int[],  int);

int main() {
	int vet[] = {1,2,5,10,8};
	int *ris, i;
	ris=somme_prefisse(vet, N);
	
	for(i=0;i<N;i++){
		printf("%d\n", ris[i]);
	}
	
	free(ris);
	return 0;
}

int *somme_prefisse(int a[], int n) {
	int i,j,somma,*b;
	
	b = malloc(sizeof(int) * n);
	
	if(b) {
		for(i=0;i<n;i++) {
			somma=0;
			for(j=0;j<=i;j++){
				somma+=a[j];
			}
			b[i]=somma;
		}
	}else{
		printf("Errore allocazione");
		b =NULL;
	}
	return b;
}
