/* Libreria con definite le strutture e le funzioni base per gestire le liste come visto a lezione */
/* Alessandro Toninelli */

/* definizione tipo */
typedef struct N {
	int val;
	struct N *next;
} nodo_t;

typedef nodo_t* Ptr_nodo;

/* ******************* 
	Inserimenti 
   ******************* */

/* inserimento nuovo elemento in testa alla lista (se esistente, altrimenti la crea) */
Ptr_nodo inserisci_in_testa(Ptr_nodo l, int num) {
	Ptr_nodo temp;
	
	temp = malloc(sizeof(nodo_t));
	
	if(temp) {
		temp->val = num;
		temp->next = l;
		
		l = temp;
	} else {
		printf("Errore memoria\n");
	}
	return l;
}

/* inserimento nuovo elemento in coda alla lista (se esistente, altrimenti la crea) */
Ptr_nodo inserisci_in_coda(Ptr_nodo l, int num) {
	Ptr_nodo temp, prec;
	
	temp = malloc(sizeof(nodo_t));
	
	if(temp) {
		temp->val = num;
		temp->next = NULL;
		
		if(l == NULL) {
			l = temp;
		} else {
			for(prec = l; prec->next != NULL; prec = prec->next);
			prec->next = temp;
		}
	} else {
		printf("Errore memoria\n");
	}
	return l;
}

/* ******************* 
	Cancellazioni 
   ******************* */

/* distruzione lista */
Ptr_nodo distruggi_lista(Ptr_nodo l) {
	Ptr_nodo next;
	while(l) {
		next = l->next;
		free(l);
		l = next;
	}
	
	return NULL;
}

/* ******************* 
	Ricerca 
   ******************* */
   
/* calcola lunghezza lista */
int lunghezza(Ptr_nodo l) {
	int i;
	i = 0;
	
	for(i = 0; l != NULL; i++, l = l->next);
	
	return i;
}   

/* stampa easy */
void stampaLista(Ptr_nodo l) {
	while(l) {
		printf("%d ", l->val);
		l = l->next;
	}
	printf("\n");
}
   
   
   
   
   
   
   
