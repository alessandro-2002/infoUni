/* esercitazione Chiari */
/* Stringa inversa ricorsivo */

#include <stdio.h>

#define LMAX 10

void stampa_ric_inv(char *p);

int main() {
	char parola[LMAX + 1];
	printf("Inserire una parola:\n");
	scanf("%s", parola);
	
	stampa_ric_inv(parola);
	
	return 0;
}

void stampa_ric_inv(char *p) {
	if(*p != '\0') {
		stampa_ric_inv(p + 1);
		printf("%c", *p);
	} else {
		printf("\n");
	}
}
