/* lezione presenza Mirandola */
/* Dichiarare un tipo di dato per rappresentare una località su una cartina in termini di longitudine e latitudine (due float) ed un nome (una stringa di al max 30 caratteri).
Scrivere un programma che acquisisce i dati di dieci località ed individua la coppia di punti a distanza massima visualizzandone i nomi. Nel caso ci siano più punti con la
stessa distanza massima stampare soltanto la prima coppia individuata. Per il calcolo
della radice quadrata utilizzare la funzione sqrt() presente nella libreria math.h. La
funzione riceve come parametro un numero in virgola mobile e ne restituisce la radice
quadrata, anch'essa un numero in virgola mobile. Esempio di utilizzo: ris = sqrt(dato); dove ris e dato sono due variabili float. */

#include <stdio.h>
#include <math.h>

#define N 30
#define M 3

typedef struct{
	float lat;
	float lon;
	char nome[N+1];
} localita_t;

int main() {
	localita_t locs[M];
	float maxDist, dTemp;
	int i, j, iMax1, iMax2;
	
	maxDist = 0;
	
	/* inizializzazione */
	for(i = 0; i < M; i++) {
		printf("Inserisci latitudine longitudine nome della località %d\n", i+1);
		scanf("%f%f%s", &locs[i].lat, &locs[i].lon, locs[i].nome);
	}
	
	for(i = 0; i < M; i++) {
		for(j = i; j < M; j++) {
			dTemp = sqrt(pow((locs[i].lat - locs[j].lat), 2) + pow((locs[i].lon - locs[j].lon), 2));
			
			if(dTemp > maxDist) {
				maxDist = dTemp;
				
				iMax1 = i;
				iMax2 = j;
			}
		}
	}
	
	printf("\nDistanza Massima: %f,", maxDist);
	printf(" trovata tra %s e %s\n", locs[iMax1].nome, locs[iMax2].nome);
	
	return 0;	
}
