/* lezione presenza Mirandola */
/* calcolo coefficiente binomiale */

#include <stdio.h>

int fattoriale(int);

int main() {
	int num1, num2, fatt1, fatt2, dFatt;
	int coeffBin;
	
	printf("Inserisci n e k\n");
	scanf("%d%d", &num1, &num2);
	
	/* calcolo fattoriale di num1  e metto risultato in fatt1 */	
	fatt1 = fattoriale(num1);
	
	/* calcolo fattoriale di num2  e metto risultato in fatt2 */
	fatt2 = fattoriale(num2);
	
	/* calcolo fattoriale di num1-num2  e metto risultato in dFatt */
	dFatt = fattoriale(num1 - num2);
	
	coeffBin = fatt1 / (fatt2 * dFatt);
	
	printf("\nCoefficiente binomiale: %d\n", coeffBin);
	
	return 0;
}

int fattoriale(int num) {
	int ris, i;
	ris = 1;
	
	for(i = 1; i < num; i++) {
		ris *= i;
	}
	
	return ris;
}
