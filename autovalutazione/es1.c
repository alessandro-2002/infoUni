#include <stdio.h>

int stat(int termine, int *max, int *min, float *media) {
	//dichiarazione contatore dei valori
	int c;
	
	//dichiarazione somma temporanea
	int somma;
	
	//dichiarazione input temporaneo
	int t;
	
	//ciclo per input e controllo dati finché non è inserito il valore di termine
	do {
		printf("Inserisci il valore %d -->\t", c+1);
		scanf("%d", &t);
		
		//se non è valore di termine eseguo i controlli
		if (t != termine) {
			//se primo valore assegno a tutti
			if (c == 0) {
				*max = t;
				*min = t;
				somma = t;
				c = 1;
			} else {
				//altrimenti controllo normale
				
				//max
				if (t > *max) {
					*max = t;
				}
				
				//min
				if (t < *min) {
					*min = t;
				}
				
				//sommo
				somma += t;
				
				//incremento il contatore
				c++;
			}
		}
	} while(t != termine);
	
	//terminato il ciclo calcolo la media
	*media = (float)somma / c;
	
	//ritorno il numero di valori inseriti
	return c;
	
}

int main() {
	//dichiarazione variabili
	int termine, max, min, c;
	float media;
	
	//input valore terminea
	printf("Inserisci il valore termine -->\t");
	scanf("%d", &termine);
	
	//invoco funzione stat per i calcoli, 
	//restituisce 0 se non sono stati inseriti valori
	c = stat(termine, &max, &min, &media);	
	
	//stampo risultati controllando siano stati inseriti valori
	if (c){
		printf("\nValore Massimo inserito: %d\n", max);
		printf("Valore minimo inserito %d\n", min);
		printf("Media dei valori inseriti %f\n", media);
	} else {
		printf("\nNon sono stati inseriti valori.");
	}
	
	return 0;
}
