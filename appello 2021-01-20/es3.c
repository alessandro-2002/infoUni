#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo aggiungi(Ptr_nodo l, int k, int val){
	Ptr_nodo l1;
	int i;
	l1=NULL;
	while(l){
		l1=inserisci_in_coda(l1,l->val);
		for(i=0;i<k;i++)
			l1=inserisci_in_coda(l1,val);
		l=l->next;
	}
	return l1;
}

int main(){
	Ptr_nodo l,l1;
	l=NULL;
	l=inserisci_in_coda(l, 1);
	l=inserisci_in_coda(l, 2);
	l=inserisci_in_coda(l, -1);
	l=inserisci_in_coda(l, 4);
	l=inserisci_in_coda(l, -6);
	
	stampa_lista(l);
	l1= aggiungi(l, 2, 0);
	stampa_lista(l1);
	return 0;
}
