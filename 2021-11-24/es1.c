/* Esercitazione Chiari */
/* ricerca parole in file testuale */

#include <stdio.h>
#include <string.h>

#define LEN 10

int main() {
	char p[LEN+1], t[LEN+1];
	char nFile[LEN+1];
	int c;
	FILE *f;
	
	printf("Inserisci il nome del file\n");
	scanf("%s", nFile);
	
	f = fopen(nFile, "r");
	
	if(f) {
		printf("Inserisci parola da cercare\n");
		scanf("%s", p);
	
		c = 0;
		fscanf(f, "%s", t);
		while(!feof(f)) {
			if(strcmp(p, t) == 0) {
				c++;
			}
			fscanf(f, "%s", t);
		}
		
		printf("Parola trovata %d volte\n", c);
		
		
	} else {
		printf("Errore nell'apertura del file\n");
	}
	
	return 0;
}
