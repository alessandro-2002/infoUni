#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo delete(Ptr_nodo l, int val) {
	Ptr_nodo lista,prec,temp;

	lista=l;
	prec = NULL;
	while(lista) {
		if(lista->val == val) {
			if(prec==NULL) {
				l=lista->next;
			} else {
				prec->next=lista->next;
			}
			temp = lista;
			lista = lista->next;
			free(temp);
		} else {
			prec = lista;
			lista = lista->next;
		}
	}
	return l;
}

int conta(Ptr_nodo l, int val) {
	int c;
	c = 0;
	while(l) {
		if(l->val == val) {
			c++;
		}
		l = l->next;
	}
	return c;
}

Ptr_nodo eliminaLimit(Ptr_nodo l, int val, int limit) {
	int nVolte;
	nVolte = conta(l,val);
	if(nVolte < limit) {
		l= delete(l,val);
	}
	return l;
}

int main() {
	Ptr_nodo l;
	l= NULL;
	l=inserisci_in_coda(l, 2);
	l=inserisci_in_coda(l, 3);
	l=inserisci_in_coda(l, 2);
	l=inserisci_in_coda(l, 2);
	l=inserisci_in_coda(l, 4);
	l=inserisci_in_coda(l, 5);
	l=inserisci_in_coda(l, 6);
	l=inserisci_in_coda(l, 7);

	stampa_lista(l);
	l=eliminaLimit(l, 2, 4);
	stampa_lista(l);
	return 0;
}
