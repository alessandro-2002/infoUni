#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo new(Ptr_nodo l, int k, int val);

int main(int argc, char const *argv[]){
Ptr_nodo head, head2;
	int n,k,v;
	head=NULL;
	
	do{
		scanf("%d",&n);
		if(n!=0)
			head=inserisci_in_coda(head,n);
		
	}while(n!=0);
	scanf("%d",&k);
	scanf("%d",&v);
	
	head2=new(head,k,v);
	stampa_lista(head);
	stampa_lista(head2);
	distruggi_lista(head);
return 0;	
}

Ptr_nodo new(Ptr_nodo l,int k,int val){
	Ptr_nodo l1;
	int i;
	l1=NULL;
	while(l){
		l1=inserisci_in_coda(l1,l->val);
		for(i=0;i<k;i++)
			l1=inserisci_in_coda(l1,val);
		
		l=l->next;
	}
	return l1;
}
