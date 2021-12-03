/* Esercitazione Chiari */
/* Primo pari */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo primoPari(Ptr_nodo);

int main() {
	Ptr_nodo head;
	int temp;
	
	head = NULL;
	
	printf("Inserisci elementi nella lista, quando hai terminato digita 0\n");
	
	scanf("%d", &temp);
	while(temp != 0) {
		head = inserisci_in_coda(head, temp);
		scanf("%d", &temp);
	}
	
	printf("Il primo elemento pari è: %d\n", primoPari(head)->val);
	
	return 0;
}

Ptr_nodo primoPari(Ptr_nodo l) {
	while(l) {
		if(l->val % 2 == 0) {
			return l;
		}
		l = l->next;
	}
	
	return NULL;
}
