/* dati due numeri interi positivi stampare a video i divisori comuni maggiori di 1 */

#include <stdio.h>

int main() {
	/* dichiarazione variabili */
	int n1, n2, t, i;
	int coprimi;
	
	coprimi = 1;
	
	/* input dati */
	do {
		printf("Inserisci il primo numero -->\t");
		scanf("%d", &n1);
	}while(n1 <= 0);
	
	do {
		printf("Inserisci il secondo numero -->\t");
		scanf("%d", &n2);
	}while(n2 <= 0);
	
	/* trovo divisori dal minore in meno */
	printf("\nI divisori comuni sono: ");
	for(i = 2; i <= n1 && i <= n2; i++) {
		if(n2 % i == 0 && n1 % i == 0) {
			printf("%d ", i);
			coprimi = 0;
		}
	}
	printf("\n");
	
	/* se sono coprimi stampo risultato */
	if(coprimi) {
		printf("I due numeri sono coprimi\n");
	}
	
	return 0;
}
