#include <stdio.h>
#include <stdlib.h>

typedef struct N {
	int val;
	struct N *next;
} nodo_t;

typedef nodo_t* Ptr_nodo;

Ptr_nodo ins_in_coda(Ptr_nodo l, int n){
	Ptr_nodo nuovo,lista;
	nuovo=malloc(sizeof(nodo_t));
	if(nuovo){
		nuovo->next=NULL;
		nuovo->val=n;
		if(l){
			for(lista=l;lista->next!=NULL;lista=lista->next);
			lista->next=nuovo;
		}else{
			l=nuovo;
		}
	}else{
		printf("ERR");
	}
	return l;
}

Ptr_nodo sottolistad(Ptr_nodo l){
	Ptr_nodo ris;
	int i;
	ris=NULL;
	i=0;
	while(l){
		if(i%2==1){
			ris=ins_in_coda(ris,l->val);
		}
		l=l->next;
		i++;
	}
	return ris;
}

/* stampa easy */
void stampa_lista(Ptr_nodo l) {
	while(l) {
		printf("%d ", l->val);
		l = l->next;
	}
	printf("\n");
}

Ptr_nodo distruggi_lista(Ptr_nodo l){
	Ptr_nodo temp;
	
	while(l){
		temp=l;
		l=l->next;
		free(temp);
	}
	
	return NULL;
}

int main(){
	Ptr_nodo l, l1;
	l=NULL;
	l = ins_in_coda(l, 13);
	l = ins_in_coda(l, 9);
	l = ins_in_coda(l, -1);
	l = ins_in_coda(l, 21);
	l = ins_in_coda(l, 33);
	l = ins_in_coda(l, 75);
	l = ins_in_coda(l, 91);
	l = ins_in_coda(l, 33);
	l = ins_in_coda(l, 44);l = ins_in_coda(l, 31);
	
	stampa_lista(l);
	l1 = sottolistad(l);
	stampa_lista(l1);
	
	l = distruggi_lista(l);
	l1 = distruggi_lista(l1);
	return 0;
}
