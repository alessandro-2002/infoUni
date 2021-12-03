/* Esercitazione Chiari */
/* Lista Somma */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

int somma(Ptr_nodo, int, int);

int main() {
	Ptr_nodo head;
	int num, n, m, i, temp;
	
	head = NULL;
	
	printf("Inserisci il valore minimo N\n");
	scanf("%d", &n);
	
	printf("Inserisci il valore massimo M\n");
	scanf("%d", &m);
	
	printf("Quanti numeri vuoi inserire?\n");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		printf("Inserisci un valore nella lista\n");
		scanf("%d", &temp);
		
		head = inserisci_in_coda(head, temp);
	}
	
	printf("La somma dei numeri compresi tra %d e %d è: %d\n", n, m, somma(head, n, m));
	
	head = distruggi_lista(head);
	
	return 0;
}

int somma(Ptr_nodo l, int n, int m) {
	int s;
	s = 0;
	
	while(l) {
		if(l->val >= n && l->val <= m) {
			
			s += l->val;
		}
		l = l->next;
	}
	
	return s;
}
