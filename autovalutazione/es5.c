#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int elemento;
    struct nodo* successivo;
} nodo;


nodo* inserisciInTesta(nodo* testa, int n);
nodo* inserisciInCoda(nodo* testa, int n);
nodo* rimuovi(nodo* testa, int posizione);
void visualizza(nodo* testa);
int esiste(nodo* testa, int n);

nodo* inverti_segno(nodo *testaL){
 	nodo *res= NULL;
}

int main(){

	nodo *L = NULL;
	L = inserisciInTesta(L, 1);

	return 0;

}



nodo* inserisciInTesta(nodo* testa, int n){
	if(testa != NULL){
		nodo* nodoSuccessivo = testa;
		testa = (nodo*) malloc(sizeof(nodo));
		testa -> elemento = n;
		testa -> successivo = nodoSuccessivo;
	} else {
		testa = (nodo*) malloc(sizeof(nodo));
		testa -> elemento = n;
		testa -> successivo = NULL;
	}
	
	return testa;
}

nodo* inserisciInCoda(nodo* testa, int n){
	if(testa != NULL){
		nodo* nodoSuccessivo = testa;
		while(nodoSuccessivo -> successivo != NULL){
			nodoSuccessivo = nodoSuccessivo -> successivo;
		}
		nodoSuccessivo -> successivo = inserisciInTesta(NULL, n);
		
	}else{
		testa = inserisciInTesta(testa, n);
	}
	
	return testa;
}

nodo* rimuovi(nodo* testa, int posizione){
	
}


void visualizza(nodo * testa) {
	if(testa !=NULL){
		printf("Testa -> ");
		while(testa != NULL){
			printf("%d -->\t",testa->e lemento);
			testa = testa->successivo;
		}
	    	printf("Vuoto \n");
	} else{
		printf("Lista vuota \n");
	}
}

int esiste(nodo* testa, int n) {
	int pos;
	int esiste;
	int i;
	
	i = 0;
	pos = -1;
	esiste = 0;
	while(testa != NULL && !esiste){
		if(testa -> elemento == n){
			pos = i;
			esiste = 1;
		}
		
		i++;
		
		testa = testa ->successivo;
	}
	
	return pos;
}
