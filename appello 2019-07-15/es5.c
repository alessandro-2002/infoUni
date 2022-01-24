#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

int contaElementi(Ptr_nodo l, int n) {
	int c;
	Ptr_nodo temp;
	c=0;
	temp = l;
	while(temp!=NULL) {
		if(temp->val == n)
			c++;
		temp=temp->next;
	}
	return c;
}

Ptr_nodo delFromList(Ptr_nodo l, int x) {
	Ptr_nodo daEliminare, temp, prec, lista;
	
	lista = l;
	daEliminare=NULL;
	temp=lista;
	while(temp) {
		if(contaElementi(temp, temp->val) >= x && contaElementi(daEliminare, temp->val) == 0) {
			daEliminare= inserisci_in_coda(daEliminare, temp->val);
		}
		temp = temp->next;
	}
	
	while(daEliminare) {
		prec = NULL;
		temp = lista;
		while(temp) {
			if(temp->val == daEliminare->val) {
				if(prec){
					prec->next = temp->next;
				}else{
					lista = temp->next;
				}
			}else{
				prec=temp;
			}
			temp = temp->next;
		}
		daEliminare= daEliminare->next;
	}
	daEliminare= distruggi_lista(daEliminare);
	return lista;
}

int main() {
	Ptr_nodo head;
	head=NULL;
	head = inserisci_in_coda(head, 3);
	head = inserisci_in_coda(head, 3);
	head = inserisci_in_coda(head, 5);
	head = inserisci_in_coda(head, 1);
	head = inserisci_in_coda(head, 2);
	head = inserisci_in_coda(head, 4);
	head = inserisci_in_coda(head, 3);
	head = inserisci_in_coda(head, 5);
	head = inserisci_in_coda(head, 3);
	head = inserisci_in_coda(head, 5);
	head = inserisci_in_coda(head, 4);
	head = inserisci_in_coda(head, 5);
	stampa_lista(head);
	head = delFromList(head, 3);
	stampa_lista(head);
	return 0;
}

