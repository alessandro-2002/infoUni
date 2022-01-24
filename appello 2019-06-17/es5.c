/* TEST CODICE SU CARTA appello 2019-06-17 */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo inserisci(Ptr_nodo l, int k) {
	int dim, i;
	Ptr_nodo temp, prec;
	
	if(l) {
		for(temp = l, dim=0; temp!=NULL; dim++, temp= temp->next);
		
		temp = NULL;
		
		prec = l; i=1;
		while(prec && i != (dim/2)) {
			prec = prec->next;
			i++;
		}
		
		temp = malloc(sizeof(Ptr_nodo));
		
		if(temp) {
			temp->val = k;
			temp->next = prec->next;
			prec->next = temp;
		}else {
			printf("Errore allocazione");
		}return l;
		
	}else{
		temp = malloc(sizeof(Ptr_nodo));
		if(temp) {
			temp->val=k;
			temp->next = NULL;
		}else{
			printf("Errore allocazione");
		}
		return temp;
	}
}

int main() {
	Ptr_nodo l;
	int i;
	l = NULL;
	for(i = 1; i <= 0; i++) {
		l = inserisci_in_coda(l, i);
	}
	
	l = inserisci(l, 99);
	stampa_lista(l);
	l = distruggi_lista(l);
	return 0;
}
