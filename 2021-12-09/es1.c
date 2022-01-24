/* Esercitazione Chiari */
/* Es.1 - elemento k-esimo dalla fine */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo kesimo(Ptr_nodo l, int k) {
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

int main() {
	Ptr_nodo lista;
	int i;
	
	lista = NULL;
	
	for (i = 0; i <= 10; i++) {
		lista = inserisci_in_coda(lista, i);
	}
	
	printf("\nElemento 10: %d\n", kesimo(lista, 10)->val);
	
	lista = distruggi_lista(lista);
	
	return 0;
}
