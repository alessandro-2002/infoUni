#include <stdio.h>
#include <stdlib.h>

typedef struct N{
	int val;
	struct N *next;
}nodo_t;

typedef nodo_t *Ptr_nodo;

Ptr_nodo aggiungi_in_coda(Ptr_nodo l, int val1){
	Ptr_nodo temp, ris;
	temp = malloc(sizeof(nodo_t));
	if(temp){
		temp->val=val1;
		temp->next=NULL;
		ris = l;
		if(!ris){
			l=temp;
		}else{
			while(ris->next != NULL){
				ris=ris->next;
			}
			ris->next=temp;
		}
	}else{
		printf("errore allocazione");
	}
	return l;
}

Ptr_nodo inverti_segno(Ptr_nodo l){
	Ptr_nodo l1;
	int nZeri;
	l1=NULL;
	nZeri=0;
	while(l){
		if(l->val==0){
			nZeri++;
			l1 = aggiungi_in_coda(l1, 0);
		} else if(nZeri==0 || nZeri >=2) {
			l1 = aggiungi_in_coda(l1, l->val);
		}else{
			l1 = aggiungi_in_coda(l1, (l->val)*(-1));
		}
		l=l->next;
	}
	return l1;
}
void stampa_lista(Ptr_nodo l) {
	while(l) {
		printf("%d ", l->val);
		l = l->next;
	}
	printf("\n");
}
   
int main(){
	Ptr_nodo l;
	l = NULL;
	l = aggiungi_in_coda(l, 10);
	l = aggiungi_in_coda(l, 0);
	l = aggiungi_in_coda(l, 3);
	l = aggiungi_in_coda(l, -5);
	l = aggiungi_in_coda(l, 0);
	l = aggiungi_in_coda(l, 2);
	l = aggiungi_in_coda(l, 1);
	l = aggiungi_in_coda(l, 0);
	l = aggiungi_in_coda(l, 3);
	
	stampa_lista(l);
	l = inverti_segno(l);
	stampa_lista(l);
	
	return 0;
}
