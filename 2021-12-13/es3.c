#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

int sommaSucc(Ptr_nodo l) {
	int somma;
	somma=0;
	while(l){
		somma+=l->val;
		l=l->next;
	}
	return somma;
}

Ptr_nodo superiori(Ptr_nodo l) {
	Ptr_nodo ris;
	
	ris=NULL;
	
	while(l) {
		if(l->val > sommaSucc(l->next)) {
			ris=inserisci_in_coda(ris,l->val);
		}
		l=l->next;
	}
	return ris;
}

int main() {
	Ptr_nodo head, l2;
	head = NULL;
	head =inserisci_in_coda(head,7);
	head =inserisci_in_coda(head,-2);
	head =inserisci_in_coda(head,4);
	head =inserisci_in_coda(head,-1);
	l2=superiori(head);
	stampa_lista(l2);
	
	return 0;
}
