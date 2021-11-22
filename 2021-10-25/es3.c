/* esercitazione Chiari */
/* MCD e mcm */
/* Scrivere un sottoprogramma mcd che riceve in ingresso due numeri interi e ne calcola il massimo comune divisore.
 * Scrivere poi un sottoprogramma mcm che riceve in ingresso due numeri interi e ne calcola il minimo comune multiplo.
 * Infine, scrivere un programma che chiede all’utente 3 numeri interi positivi (nel caso non siano positivi il programma continua
 * a richiedere dei nuovi valori) e ne calcola il massimo comune divisore ed il minimo comune multiplo. */
 
#include <stdio.h>

#define N 3


int calcoloMcd(int, int);
int calcoloMcm(int, int);

int main() {
	int vet[N];
	int i, mcd, mcm;
	
	/* input */
	for(i = 0; i < N; i++) {
		do{
			printf("Inserisci il numero %d -->\t", i+1);
			scanf("%d", &vet[i]);
		} while(vet[i] <= 0);
	}
	
	/* calcolo mcd */
	mcd = calcoloMcd(vet[0], vet[1]);
	mcd = calcoloMcd(mcd, vet[2]);
	
	/* calcolo mcm */
	mcm = calcoloMcm(vet[0], vet[1]);
	mcm = calcoloMcm(mcm, vet[2]);
	
	printf("mcd: %d\n", mcd);
	printf("mcm: %d\n", mcm);
	
	return 0;
}

int calcoloMcd(int n1, int n2) {
	int i;
	int mcd;
	
	for(i = 1; i <= n1 && i <= n2; i++) {
		if(n1 % i == 0 && n2 % i == 0) {
			mcd = i;
		}
	}
	
	return mcd;
}

int calcoloMcm(int n1, int n2) {
	int res;
	
	res = n1;
	
	while(res % n1 != 0 || res % n2 != 0) {
		res++;
	}
	
	return res;
}
