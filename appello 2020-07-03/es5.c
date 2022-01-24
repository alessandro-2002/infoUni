#include <stdio.h>
#include <stdlib.h>

#include "../liste.h"

Ptr_nodo replica_inversa(Ptr_nodo l, int k){
	Ptr_nodo ris;
	int i;
	ris=NULL;
	while(l){
		for(i=0;i<k;i++){
			ris=inserisci_in_testa(ris,l->val);
		}
		l=l->next;
	}
	return ris;
}

int main(){
	Ptr_nodo l, inv;
	
	l=NULL;
	
	l=inserisci_in_coda(l, 1);
	l=inserisci_in_coda(l, 2);
	l=inserisci_in_coda(l, 40);
	l=inserisci_in_coda(l, 3);
	l=inserisci_in_coda(l, 50);
	l=inserisci_in_coda(l, 4);
	l=inserisci_in_coda(l, 670);
	l=inserisci_in_coda(l, 5);
	
	stampa_lista(l);
	
	inv = replica_inversa(l, 2);
	stampa_lista(inv);
	distruggi_lista(l);
	distruggi_lista(inv);
	return 0;
}
