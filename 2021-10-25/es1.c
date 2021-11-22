/* esercitazione Chiari */
/* Voto più alto esame */
/* Si scriva un programma in linguaggio C che mostri a video il nome dello studente che ha ottenuto il punteggio più alto in un esame.
 * Il programma dovrà leggere il numero di studenti iscritti N (con N < 100), il nome (con un numero di 
 * caratteri < 20) e il voto di ciascuno studente. */
 
#include <stdio.h>

#define DIM 99
#define LNOME 20

typedef struct {
	char nome[LNOME];
	int voto;
} voto_t;

int main() {
	voto_t voti[DIM];
	
	int n, i;
	int iMax;
	
	iMax = 0;

	do{
		printf("Inserisci il numero di studenti iscritti:\n");
		scanf("%d", &n);	
	} while(n <= 0 || n >= 99);
	
	/* input voti */
	for(i = 0; i < n; i++) {
		printf("Inserisci il nome dello studente %i e il suo voto\n", i+1);
		scanf("%s%d", voti[i].nome, &voti[i].voto);
	}
	
	/* ciclo e trovo il max */
	for(i = 1; i < n; i++) {
		if(voti[i].voto > voti[iMax].voto) {
			iMax = i;
		}
	}
	
	/* stampo risultato */
	printf("\nHa ottenuto il voto maggiore lo studente %s\n", voti[iMax].nome);
		
	return 0;
}
