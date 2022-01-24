#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

int dimensione(Ptr_nodo l) {
	int dim=0;
	Ptr_nodo t;
	t=l;
	while(t){
		dim++;
		t=t->next;
	}
	return dim;
}

Ptr_nodo kEsimo(Ptr_nodo l, int k) {
	int dim,i;
	Ptr_nodo res;
	
	dim=dimensione(l);
	printf("DIM:%d\n",dim);
	res = l;
	if(k>dim) {
		printf("Dato mon validi");
	}else{
		for(i=0;i<dim-k;i++){
			res=res->next;
		}
	}
	return res;
}

int main(){
	Ptr_nodo l;
	Ptr_nodo k;
	
	l=NULL;
	l = inserisci_in_coda(l, 1);
	l = inserisci_in_coda(l, 8);
	l = inserisci_in_coda(l, 6);
	l = inserisci_in_coda(l, 13);
	l = inserisci_in_coda(l, 2);
	
	k = kEsimo(l, 5);
	
	printf("%d\n", k->val);
	
	l=distruggi_lista(l);
	return 0;
}
