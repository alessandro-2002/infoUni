/* esercitazione Chiari */
/* Persone file binari ricerca per cognome */

#include <stdio.h>
#include <string.h>

#define LEN 100
#define DIM 100
#define NFILE "persone.dat"

typedef struct {
	char cognome[LEN+1];
	char nome[LEN+1];
	char sesso;
	int anno;	
}persona_t;

int main() {
	FILE *f1;
	persona_t arr[DIM];
	char cognome[LEN+1];
	int n, i, c;
	
	f1 = fopen(NFILE, "rb");
	
	if(f1 != NULL) {
		printf("Inserisci il cognome da cercare\n");
		scanf("%s", cognome);
		
		n = fread(arr, sizeof(persona_t), DIM, f1);
		
		c = 0;
		for(i = 0; i < n; i++) {
			if(strcmp(arr[i].cognome, cognome) == 0) {
				printf("%s %s %c %d\n", arr[i].cognome, arr[i].nome, arr[i].sesso, arr[i].anno);
				c++;
			}
		}
		
		if (c > 0) {
			printf("Il cognome è stato trovato %d volte\n", c);
		} else {
			printf("Nessuna persona trovata col cognome inserito\n");
		}
	
		fclose(f1);
	} else {
		printf("Errore nell'apertura del file\n");
	}
	
	return 0;	
}
