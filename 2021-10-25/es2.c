/* esercitazione Chiari */
/* Durata CD */
/* Specificare le strutture dati C necessarie ad un programma per la gestione di un archivio di CD musicali (al massimo 100). 
 * Ogni CD è caratterizzato da:
 *		• un titolo (stringa di al massimo 30 caratteri),
 *		• un autore (stringa di al massimo 30 caratteri),
 *		• un anno di pubblicazione,
 *		• il numero di tracce,
 *		• la durata complessiva (rappresentata in termini di ore, minuti e secondi).
 * Inoltre, si vuole memorizzare anche il prezzo del disco ed il numero di copie disponibili per la vendita.
 * Scrivere poi un programma che acquisisce un numero n di CD e visualizza il CD con durata massima. */
 
#include <stdio.h>
#include <string.h>

#define DIM 100
#define LMAX 30

typedef struct {
	unsigned ore;
	unsigned minuti;
	unsigned secondi;
} durata_t;

typedef struct {
	char titolo[LMAX];
	char autore[LMAX];
	int anno;
	durata_t durata;
	float prezzo;
	int nCopie;
} cd_t;

int trovaSecondi(durata_t);

int main() {
	cd_t cd[DIM];
	char t[100];
	
	int n, i, iMax;
	
	iMax = 0;
	
	do {
		printf("Inserisci il numero di CD che vuoi inserire:\n");
		scanf("%d", &n);
	} while(n <= 0 || n>= DIM);
	
	/* input cd */
	for(i = 0; i < n; i++) {
		printf("\nCD %d\n", i+1);
		
		printf("Inserisci il Titolo\n");
		scanf(" %[^\n]", cd[i].titolo);
		
		printf("Inserisci l'autore\n");
		scanf(" %[^\n]", cd[i].autore);
		
		printf("Inserisci anno prezzo e numCopie del CD\n");
		scanf("%d%f%d", &cd[i].anno, &cd[i].prezzo, &cd[i].nCopie);
		
		printf("Inserisci la durata complessiva in ore minuti secondi\n");
		scanf("%u%u%u", &cd[i].durata.ore, &cd[i].durata.minuti, &cd[i].durata.secondi);
	}
	
	/* trovo durata massima con ciclo */
	for(i = 1; i < n; i++) {
		if(trovaSecondi(cd[i].durata) > trovaSecondi(cd[iMax].durata)) {
			iMax = i;
		}
	}
	
	/* stampo risultato */
	printf("CD di massima durata:\n");
	printf("\tTitolo: %s\n", cd[iMax].titolo);
	printf("\tAutore: %s\n", cd[iMax].autore);
	printf("\tAnno: %d\n", cd[iMax].anno);
	printf("\tDurata %u:%u:%u\n", cd[iMax].durata.ore, cd[iMax].durata.minuti, cd[iMax].durata.secondi);
	printf("\tPrezzo: %f\n", cd[iMax].prezzo);
	printf("\tNumero copie disponibili : %d\n", cd[iMax].nCopie);
	
	return 0;
}

int trovaSecondi(durata_t durata) {
	int res;
	
	res = durata.secondi;
	res += durata.minuti * 60;
	res += durata.ore * 60 * 60;
	
	return res;
}


