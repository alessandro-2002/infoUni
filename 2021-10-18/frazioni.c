/* lezione presenza Mirandola */
/* Definire un tipo di dato strutturato per rappresentare una frazione in termini di
   * num e den (due numeri interi). Scrivere un programma che acquisisce due frazioni 
   * ed esegue la somma. Il programma deve in seguito semplificare il risultato
   * dell'operazione rappresentando l'eventuale segno meno nel numeratore. */
   
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int n;
	int d;
} frazione_t;

int main() {
	frazione_t a, b, somma;
	int i;
	
	do {
		printf("Inserisci la prima frazione (N D)\n");
		scanf("%d%d", &a.n, &a.d);
	} while(a.d == 0);
	
	do {
		printf("Inserisci la seconda frazione (N D)\n");
		scanf("%d%d", &b.n, &b.d);
	} while(a.d == 0);
	
	somma.n = a.n * b.d + b.n * a.d;
	somma.d = a.d * b.d;
	
	/* semplificazione */
	
	for (i = 2; i < abs(somma.n) && i < abs(somma.d); i++) {
		if (somma.n % i == 0 && somma.d % i == 0) {
			somma.n /= i;
			somma.d /= i;
		}
	}
	
	/* segno */
	if (somma.d < 0) {
		somma.n *= -1;
		somma.d *= -1;
	}
	
	printf("\n%d / %d\n",somma.n, somma.d); 
	
	
	return 0;
}
