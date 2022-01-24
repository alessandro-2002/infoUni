#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50
#define DIMMAX 100

typedef struct{
	int codice;
	char titolo[LEN+1];
	char autore[LEN+1];
	int prezzo;
}scultura_t;

typedef struct{
	scultura_t sculture[DIMMAX];
	int nSculture;
}negozio_t;

scultura_t* prezzoMaggiore(negozio_t negozi[], int p, int nNegozi) {
	int nMaggiori, i, j, k;
	scultura_t ris;
	
	/* conto le sculture da salvare */
	nMaggiori = 0;
	for(i = 0; i < nNegozi; i++) {
		for(j = 0; j < negozi[i].nSculture; j++) {
			if(negozi[i].sculture[j].prezzo >= p){
				nMaggiori++;
			}
		}
	}
	
	if(nMaggiori == 0) {
		return NULL;
	} else {
	
		/* allocazione memoria */
		ris = malloc(nMaggiori * sizeof(scultura_t));
		
		if(ris) {
			/* copio nel nuovo array */
			k = 0;
			
			for(i = 0; i < nNegozi && k < nMaggiori; i++) {
				for(j = 0; j < negozi[i].nSculture && k < nMaggiori; j++) {
					if(negozi[i].sculture[j].prezzo >= p){
					
						ris[k].codice = negozi[i].sculture[j].codice;
						ris[k].prezzo = negozi[i].sculture[j].prezzo;
						
						strcpy(ris[k].titolo, negozi[i].sculture[j].titolo);
						strcpy(ris[k].autore, negozi[i].sculture[j].autore);
						
						k++;
					}
				}
			}
			
			return ris;
			
		} else {
			return NULL;
		}
	}
	
}
