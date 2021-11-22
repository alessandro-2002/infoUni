/* esercitazione Crovari */

#include <stdio.h>

int armstrong(int);
int potenza(int, int);

int main() {
	int n;
	
	do {
		printf("Inserisci un numero naturale\n");
		scanf("%d", &n);
	} while(n <= 0);
	
	if(armstrong(n)) {
		printf("\nIl numero è di Armstrong\n");
	} else {
		printf("\nIl numero NON è di Armstrong\n");
	}

	return 0;
}

int armstrong(int n) {
	int i, nCifre, somma, t, res;
	
	somma = 0;
	
	/* conta numero cifre */
	nCifre = 0;
	do {
		nCifre++;
	} while(n / potenza(10, nCifre) != 0);
	
	/* calcolo numero */
	t = n;
	for(i = 0; i < nCifre; i++) {
		somma += potenza(t % 10, nCifre);
		t /= 10;
	}
	
	if(somma == n) {
		res = 1;
	} else {
		res = 0;
	}
	
	return res;
}

int potenza(int n, int m) {
	int i, res;
	
	res = 1;
	
	for(i = 0; i < m; i++) {
		res *= n;
	}
	
	return res;
}
