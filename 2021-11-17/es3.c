/* esercitazione Crovari */
/* dati anagrafici da file */

#include <stdio.h>

#define MAXLEN 30
#define DIM 10

typedef struct {
	char cognome[MAXLEN];
	char nome[MAXLEN];
	char sesso;
	int anno;	
}persona_t;

persona_t get_youngest(persona_t persone[], int n);

int main() {
	FILE *f1;
	persona_t vet[DIM], youngest;
	int n, i;
	
	f1 = fopen("persone.txt", "r");
	
	if(f1 == NULL) {
		printf("Errore nell'apertura\n");
	} else {
	
		fscanf(f1, "%d\n", &n);
		
		for(i = 0; i < n; i++) {
			fscanf(f1, "%s %s %c %d", vet[i].cognome, vet[i].nome, &vet[i].sesso, &vet[i].anno);
		}
		
		fclose(f1);
		
		youngest = get_youngest(vet, n);
		
		printf("Il più giovane:\n%s %s %c %d\n", youngest.cognome, youngest.nome, youngest.sesso, youngest.anno);
	}
	
	return 0;
}

persona_t get_youngest(persona_t persone[], int n) {
	int max, i;
	
	max = 0;

	for(i = 1; i < n; i++) {
		if(persone[i].anno > persone[max].anno) {
			max = i;
		}
	}

	return persone[max];
}

