/* Esercitazione Chiari */
/* Liste */

#include <stdio.h>
#include <stdlib.h>

typedef struct N {
	int val;
	struct N *next;
} Node;

typedef Node *Ptr_nodo;

Ptr_nodo list_create(int v, Ptr_node n) {
	Ptr_nodo r;
	r = malloc(sizeof(nodo_t));
	if (!r) {
		return NULL;
	}
	r->val = v;
	r->next = n;
	return r;
}

Ptr_nodo nth_node(Ptr_nodo lista, int n) {
	Ptr_nodo p = lista;
	while (n > 0 && p != NULL) {
		p = p->next;
		n--;
	}
	return p;
}

Ptr_nodo array_to_list(int v[], int n) {
	Ptr_nodo r = NULL;
	while(n > 0) {
		n--;
		r = list_create(v[n], r);
	}
	
	return r;
}

Ptr_nodo concat(Ptr_nodo L1, Ptr_nodo L2) {
	Ptr_nodo p;
	if(!L1) {
		return L2;
	}
	
	p = L1;
	
	while(p->next != NULL) {
		p = p->next;
	}
	p->next = L2;
	
	return L1;
}

void free_list(Ptr_nodo l) {
	Ptr_nodo next;
	while(l) {
		next = l->next;
		free(l);
		l = next;
	}
}

int main() {
	int arr[] = {5,6,42,30,10};
	Ptr_nodo l;
	
	l = array_to_list(arr, 5);
	
	n = nth_node(l, 2);
	printf("%d\n", n->val);
	
	return 0;
}
