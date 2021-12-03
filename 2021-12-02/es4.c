/* Esercitazione Chiari */
/* Ripetizioni */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo riduci(Ptr_nodo);
void stampaLista(Ptr_nodo);

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
	
	head = riduci(head);
	stampaLista(head);
	printf("%d", lunghezza(head));
	
	head = distruggi_lista(head);
	
	return 0;
}

Ptr_nodo riduci(Ptr_nodo l) {
	Ptr_nodo head, succ;
	head = l;
	
	while(l->next) {
		succ = l->next;
		if(l->val == succ->val) {
			l->next = succ->next;
			free(succ);
		} else {
			l = l->next;
		}
	}
	
	return head;
}
