/* esercitazione Chiari */
/* Abaco */
/* Scrivere una funzione che, dato in ingresso un numero decimale, restituisca i valori divisi per migliaia, centinaia, decine ed unità (come un abaco). */

#include <stdio.h>

void stampaAbaco(int);

int main() {
	int n;
	
	printf("Inserisci un numero decimale -->\t");
	scanf("%d", &n);
	
	stampaAbaco(n);
	
	return 0;
}

void stampaAbaco(int n) {
	int res, i;
	
	i = 1;
	
	while(n != 0) {
		res = n % 10;
		n /= 10;
		printf("%d * %d\n", res, i);
		i *= 10;
	}
}
