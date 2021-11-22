/* esercitazione Crovari */

#include <stdio.h>

#define MAX_GRADO 8

int potenza(int, int);

int main() {
	int coeff[MAX_GRADO + 1];
	int n, i, x, res;
	
	res = 0;
	
	do {
		printf("Inserisci il grado del polinomio\n");
		scanf("%d", &n);
	} while(n < 0 || n > 8);
	
	for(i = 0; i <= n; i++) {
		printf("Inserisci il coefficiente di grado %d\n", i);
		scanf("%d", &coeff[i]);
	}
	
	printf("\nInserisci il valore di x per cui calcolare il polinomio\n");
	scanf("%d", &x);
	
	for(i = 0; i <= n; i++) {
		res += coeff[i] * potenza(x, i);
	}
	
	printf("\nIl polinomio risulta %d\n", res);
	
	return 0;
}

int potenza(int n, int m) {
	int i, res;
	
	res = 1;
	
	for(i = 0; i < m; i++) {
		res *= n;
	}
	
	return res;
}
