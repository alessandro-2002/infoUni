/* esercitazione Crovari */

#include <stdio.h>

void stampaQuadrato(int);

int main() {
	int n, i;

	for(i = 0; i < 5; i++) {
		do {
			printf("Inserisci la dimensione del lato del quadrato %d\n", i+1);
			scanf("%d", &n);
		} while(n <= 0);
		
		stampaQuadrato(n);
	}
	
	return 0;
}

void stampaQuadrato(int n) {
	int i, j;
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			if((i == 0 || i == n-1) || (j == 0 || j == n-1)) {
				printf(" * ");
			} else {
				printf("   ");
			}
		}	
		printf("\n");
	}
	printf("\n");
}
