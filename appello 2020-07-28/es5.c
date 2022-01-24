/* Alessandro Toninelli */
/* Esercizio da appello 2020-07-28*/
/* es5 - lista */

#include <stdio.h>
#include <stdlib.h>

int trova_valore_da_indice(Ptr_nodo l, int pos) {
	int i;
	
	for(i = 0; l->next != NULL && i < pos; l = l->next, i++);
	
	if(i == pos) {
		return l->val;
	} 
	
	return 0;
	
}

Ptr_nodo abbina(Ptr_nodo indici, Ptr_nodo valori) {
	Ptr_nodo ris;
	int val;
	
	ris = NULL;
	
	/* scorro la lista di indici */
	while(indici) {
		/* trovo il valore corrispondente */
		val = trova_valore_da_indice(valori, indici->val);
		
		if(!val)
			val = 0;
			
		/* aggiungo alla coda il valore trovato */
		ris = inserisci_in_coda(ris, val);
		
		indici = indici->next;
	}
		
	return ris;
}

