/* Esercitazione Chiari */
/* Es.2 - Lista Alternata */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo alterna(Ptr_nodo l1, Ptr_nodo l2) {
	Ptr_nodo ris;
	
	ris = NULL;
	
	if(l1 == NULL && l2 == NULL) {
		printf("Entrambe le liste sono vuote");
		return NULL;
	}
	
	while(l1 != NULL || l2 != NULL) {
		if(l1) {
			ris = inserisci_in_coda(ris, l1->val);
			l1 = l1->next;
		}
		
		if(l2) {
			ris = inserisci_in_coda(ris, l2->val);
			l2 = l2->next;
		}
	}
	
	return ris;
}

int main() {
	Ptr_nodo l1, l2, l3;
	int i;
	
	l1 = NULL;
	l2 = NULL;
	
	for(i = 0; i < 6; i++) {
		l1 = inserisci_in_coda(l1, i*2+1);
	}
	
	for(i = 1; i <= 4; i++) {
		l2 = inserisci_in_coda(l2, i*2);
	}
	
	l3 = alterna(l1, l2);
	
	stampa_lista(l1);
	stampa_lista(l2);
	stampa_lista(l3);
	
	l1 = distruggi_lista(l1);
	l2 = distruggi_lista(l2);
	l3 = distruggi_lista(l3);
	
	return 0;
}
