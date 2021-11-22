/* dato un intero positivo stampare se è primo o no */
#include <stdio.h>

int main() {
	/* dichiarazione variabili */
	int n, i;
	int primo;
	
	primo = 1;
	
	/* input dati */
	do{
		printf("Inserisci un intero positivo -->\t");
		scanf("%d", &n);
	}while(n <= 0);
	
	/* controllo */
	for(i = n/2; i > 1 && primo; i--) {
		if(n % i == 0) {
			primo = 0;
		}
	}
	
	/* stampa risultato */	
	if(primo) {
		printf("%d primo\n", n);
	} else {
		printf("%d non primo\n", n);
	}
	

	return 0;
}
