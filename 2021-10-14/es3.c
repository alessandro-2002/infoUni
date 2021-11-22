/* 14/10/2021 esercitazione Crovari */
/* data una frase da tastiera terminata con a capo stampare:
 * il numero di volte in cui ogni lettera dell'alfabeto compare
 * il numero di consonanti */
 
#include <stdio.h>
#include <string.h>

#define MAX 100
#define DIM 26

int main() {
	int count[DIM] = {0}, cConsonanti;
	char frase[MAX];
	int i, lunghezza;
	
	cConsonanti = 0;
	
	printf("Inserisci una frase:\n");
	scanf("%[^\n]", frase);
	
	lunghezza = strlen(frase);
	
	for(i = 0; i < lunghezza; i++) {
		if(frase[i] >= 'a' && frase[i] <= 'z') {
			count[frase[i] - 'a'] ++;
		
		
			if(frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u') {
				cConsonanti ++;
			}
		}
	}
	
	for(i = 0; i < DIM; i++){
		printf("%c -> %d volte\n", i+'a', count[i]);
	}
	
	printf("\nNumero consonanti: %d\n", cConsonanti);
	

	return 0;
}
