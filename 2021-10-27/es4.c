/* esercitazione Crovari */

#include <stdio.h>

#define DIM 10

int perfetto(int);

int main() {
	int vet[DIM];
	int n, i, max;
	
	max = 0;
	
	do {
		printf("Inserisci quanti numeri vuoi valutare\n");
		scanf("%d", &n);
	} while(n <= 0 || n > DIM);
	
	for(i = 0; i < n; i++) {
		printf("Inserisci il numero %d\n", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < n; i++) {
		if(perfetto(vet[i])) {
			if(vet[i] > max) {
				max = vet[i];
			}
		}
	}
	
	if(max == 0) {
		printf("\nNon sono stati inseriti numeri perfetti\n");
	} else {
		printf("\nIl massimo numero perfetto inserito è %d\n", max);
	}
	
	return 0;
}

int perfetto(int n) {
	int i, perfetto, somma;
	
	somma = 0;
	
	for(i = n-1; i > 0; i--) {
		if(n % i == 0) {
			somma += i;
		}
	}
	
	if (somma != n) {
		perfetto = 0;
	} else {
		perfetto = 1;
	}
	
	return perfetto;
}
