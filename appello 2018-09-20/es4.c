#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

int minimo(int n1,int n2) {
	if(n1<n2) {
		return n1;
	} else {
		return n2;
	}
}

Ptr_nodo list_min(Ptr_nodo l1,Ptr_nodo l2) {
	Ptr_nodo l3;

	l3=NULL;
	while(l1&&l2) {
		l3=inserisci_in_coda(l3, minimo(l1->val, l2->val));
		l1=l1->next;
		l2=l2->next;
	}
	return l3;
}

int main() {
	Ptr_nodo l1,l2,l3;
	l1=NULL;
	l2=NULL;

	l1 = inserisci_in_coda(l1, 0);
	l1 = inserisci_in_coda(l1, 1);
	l1 = inserisci_in_coda(l1, 2);
	l1 = inserisci_in_coda(l1, 3);

	l2 = inserisci_in_coda(l2, 10);
	l2 = inserisci_in_coda(l2, -3);
	l2 = inserisci_in_coda(l2, 4);
	l2 = inserisci_in_coda(l2, -2);

	l3 = list_min(l1,l2);
	stampa_lista(l3);
	return 0;
}
