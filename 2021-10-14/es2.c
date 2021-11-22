/* 14/10/2021 esercitazione Crovari */
/* Scrivere un programma che riceve in ingresso una stringa di massimo 10 caratteri,
 * verifica se la stringa rappresenta un numero binario 
 * e in e tal caso effettua la conversione in decimale. */
 
#include <stdio.h>
#include <string.h>

#define MAX 11

int main() {
	char binario[MAX];
	int controllo, nCifre, decimale;
	int i;
	
	controllo = 1;
	decimale = 0;
	 
	printf("Inserire numero binario: ");
	scanf("%s", binario);
	 
	nCifre = strlen(binario);
	 
	for(i = 0; i < nCifre; i++){
		if(binario[i] != '0' && binario[i] != '1'){
			controllo = 0;
		}
	}
	
	if(controllo == 0) {
		printf("Il numero inserito non è binario!\n");
	} else {
		for(i = 0; i < nCifre; i++) {
			if(binario[i] == '1') {
				decimale = decimale *2 +1;
			} else {
				decimale *= 2;
			}
		}
		
		printf("Il numero in decimale è %d\n", decimale);
		
	}
	
	return 0;
}
