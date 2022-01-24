/* Esercitazione Chiari */
/* Es.2 - Rovescia Lista */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo kesimoFine(Ptr_nodo l, int k) {
	int dim, i;
	
	dim = lunghezza(l);
	
	if(k <= dim) {
		for(i = 0; i < dim-k; i++) {
			l = l->next;
		}
	 	return l;
	} else {
		printf("Elemento inesistente\n");
		return NULL;
	}
}

Ptr_nodo list_reverse(Ptr_nodo l) {
	int i, dim, temp;
	Ptr_nodo lista, last;
	
	lista = l;
	i = 1;
	dim = lunghezza(lista);
	
	while(lista && i <= dim/2) {
		temp = lista->val;
		last = kesimoFine(lista, i);
		lista->val = last->val;
		last->val = temp;
		
		i++;
		lista = lista->next;
	}
	
	return l;
}

int main() {
	Ptr_nodo l;
	
	l = NULL;
	
	l = inserisci_in_coda(l, 1);
	l = inserisci_in_coda(l, 2);
	l = inserisci_in_coda(l, 3);
	l = inserisci_in_coda(l, 4);
	l = inserisci_in_coda(l, 5);
	
	l = list_reverse(l);
	
	stampa_lista(l);
	
	distruggi_lista(l);
	return 0;
}
