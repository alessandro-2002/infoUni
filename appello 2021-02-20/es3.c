#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

int getValore(Ptr_nodo l, int pos) {
	int i;
	i = 0;

	while(l && i < pos) {
		l = l->next;
		i++;
	}

	return l->val;
}

Ptr_nodo moltiplica(Ptr_nodo l1) {
	int i, dim, maxI, val1, val2;
	Ptr_nodo  l2;

	l2 = NULL;

	dim = lunghezza(l1);

	maxI= dim;
	if(maxI%2==1)
		maxI++;

	for(i = 0; i < maxI/2; i++) {
		val1 = getValore(l1, i);
		val2 = getValore(l1, dim-1-i);
		l2 = inserisci_in_coda(l2, val1*val2);
	}
	return l2;
}

int main() {
	Ptr_nodo l1, l2;

	l1 = NULL;
	l1 = inserisci_in_coda(l1, 3);
	l1 = inserisci_in_coda(l1, 5);
	l1 = inserisci_in_coda(l1, 8);
	l1 = inserisci_in_coda(l1, 9);
	/*l1 = inserisci_in_coda(l1, 10);*/

	l2 = moltiplica(l1);

	stampa_lista(l2);

	l1 = distruggi_lista(l1);
	l2 = distruggi_lista(l2);
	return 0;
}

