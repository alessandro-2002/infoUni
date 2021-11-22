/* lab 02 Conti */

#include <stdio.h>

#define DIM 20

typedef int vettore[DIM];

int main() {
	vettore v1, v2;
	int i, j, l2, singolo;
	
	for(i = 0; i < DIM; i++) {
		printf("Inserisci l'elemento (%d)\n", i);
		scanf("%d", &v1[i]);
	}
	
	l2 = 0;
		
	for(i = 0; i < DIM; i++) {
		singolo = 1;
		for(j = i+1; j < DIM; j++) {
			if(v1[i] == v1[j]) {
				singolo = 0;
			}
		}
		
		if(singolo) {
			v2[l2] = v1[i];
			l2++;
		}
	}
	
	printf("\n");
	
	for(i = 0; i < l2; i++) {
		printf(" %d ", v2[i]);
	}
	
	printf("\nL'array ha lunghezza %d\n", l2);
	
	return 0;	
}
