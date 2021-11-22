/* esercitazione Crovari */
/* Ingredienti */

#include <stdio.h>
#include <string.h>

#define NFILE "ingredienti.txt"
#define LEN 10

void cercaIngrediente(FILE *f1, char nome[], int);

int main(){
	FILE *f1;
	char nome[LEN+1];
	unsigned int n;
	
	f1 = fopen(NFILE, "r");
	
	if(f1 != NULL) {
		
		do{
			printf("Inserisci il numero di persone\n");
			scanf("%u", &n);
		} while(n <= 0);
		
		do{
			printf("Inserisci il nome dell'ingrediente da cercare\n");
			scanf("%s", nome);
			
			if(strcmp(nome, "stop") != 0) {
				cercaIngrediente(f1, nome, n);
				rewind(f1);
			}
			
		} while(strcmp(nome, "stop") != 0);
		fclose(f1);
	} else {
		printf("Errore nell'apertura del file\n");
	}
	
	return 0;	
}

void cercaIngrediente(char nome[], int nPersone) {
	char n[LEN+1];
	int q, trovato;
	
	
		trovato = 0;
		
		fscanf(f1, "%s %d", n, &q);
		
		while(!feof(f1) && !trovato) {
			if(strcmp(n, nome) == 0) {
				printf("%s --> quantità %d\n", nome, q*nPersone);
				trovato = 1;
			}
			fscanf(f1, "%s %d", n, &q);
		}
		
		if(!trovato) {
			printf("Nessun ingrediente trovato!\n");
		}
		
	
}





