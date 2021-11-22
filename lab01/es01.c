/* dato un anno int dire se è bisestile */

#include <stdio.h>

int main() {
	/* dichiarazione variabili */
	int anno;
	
	/* input dati */
	do {
		printf("Inserisci un anno -->\t");
		scanf("%d", &anno);
	}while(anno <= 0);
	
	/* stampa risultato */
	if(anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0)) {
		printf("L'anno %d e' bisestile!\n", anno);
	} else {
		printf("L'anno %d non e' bisestile!\n", anno);
	}
	
	return 0;
}
