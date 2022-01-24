#include <stdio.h>
#include <stdlib.h>

typedef struct N{
	int val;
	struct N *next;
}nodo_t;
typedef nodo_t *Ptr_nodo;
Ptr_nodo insCoda(Ptr_nodo l, int n) {
	Ptr_nodo temp,l2;
	temp=malloc(sizeof(nodo_t));
	if(temp){
		temp->val=n;
		temp->next=NULL;
		if(l==NULL){
			l=temp;
		}else{
			for(l2=l;l2->next!=NULL;l2=l2->next);
			l2->next=temp;
		}
	}else{
		printf("Errore allocazione");
	}
	return l;
}

Ptr_nodo controllaSoglia(int seq[],int soglia, int nEl){
	int i;
	Ptr_nodo l;
	l=NULL;
	for(i=0;i<nEl;i++){
		if(seq[i]>(soglia*soglia)){
			l=insCoda(l,i);
		}
	}
	return l;
}

void visualizza_lista(Ptr_nodo l) {
	while(l){
		printf("%d ",l->val);
		l=l->next;
	}
}

int main(){
	Ptr_nodo l2;
	int vet[]={2,4,8,16};
	
	
	l2 = controllaSoglia(vet,2,4);
	visualizza_lista(l2);
	return 0;
}
