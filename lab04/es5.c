/* Laboratorio 5 Conti */
/* Liste */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

Ptr_nodo listaMedie(Ptr_nodo l1);
void salvaSuFile(Ptr_nodo l, char nomeF[]);
Ptr_nodo leggiFile(char nomeF[]);

int main() {
	Ptr_nodo head, head2, head3;
	int temp;
	
	head = NULL;
	
	printf("Inserisci elementi nella lista, quando hai terminato digita 0\n");
	
	scanf("%d", &temp);
	while(temp != 0) {
		head = inserisci_in_coda(head, temp);
		scanf("%d", &temp);
	}
	
	head2 = listaMedie(head);
	
	salvaSuFile(head2, "file.dat");
	head3 = leggiFile("file.dat");
	
	stampaLista(head3);
	
	head = distruggi_lista(head);
	head2 = distruggi_lista(head2);
	head3 = distruggi_lista(head3);
	
	return 0;
}

Ptr_nodo listaMedie(Ptr_nodo l1) {
	Ptr_nodo l2, succ;
	int media;
	
	l2 = NULL;
	
	while(l1) {
		if(l1->next == NULL) {
			succ = l1;
		} else {
			succ = l1->next;
		}
		
		media = (l1->val + succ->val) /2;
		
		l2 = inserisci_in_coda(l2, media);
		
		l1 = l1->next;
	}
	
	return l2;
}

void salvaSuFile(Ptr_nodo l, char nomeF[]) {
	FILE *f;
	
	f = fopen(nomeF, "wb+");
	
	if(f) {
		while(l) {
			fwrite(l->val, sizeof(int), 1, f);
			l = l->next;
		}
		
		fclose(f);
	} else {
		printf("Errore apertura file\n");
	}
}

Ptr_nodo leggiFile(char nomeF[]) {
	FILE *f;
	int n;
	Ptr_nodo l;
	
	l = NULL;;
	
	f = fopen(nomeF, "rb");
	
	if(f) {
		fread(n, sizeof(int), 1, f);
		while(!feof(f)) {
			l = inserisci_in_coda(l, n);
			
			fread(n, sizeof(int), 1, f);
		}
		
		fclose(f);
	} else {
		printf("Errore apertura file\n");
	}
	
	return l;
}

