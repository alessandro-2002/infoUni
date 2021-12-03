/* Laboratorio 4 Conti */
/* spedizioni */

#include <stdio.h>

#define N_OGGETTI 100
#define N_SCATOLE 2
#define MAX_STR 100
#define PESO_CONTAINER 100

typedef struct{
	char descrizione[MAX_STR+1];
	float peso_per_unita;
	int quanti;
	int codice;
} t_oggetto;

typedef struct{
	t_oggetto oggetti[N_OGGETTI];
	int n_oggetti;
	char descrizione[MAX_STR+1];
	int codice;
} t_scatola;

int trovaCapienza(t_scatola scatole[], int, float);

int main() {
	int i, j;
	t_scatola scatole[N_SCATOLE];
	
	for(i = 0; i < N_SCATOLE; i++) {
		printf("\nScatola %d\n\n", i);
		printf("Inserisci il codice della scatola\n");
		scanf("%d", &scatole[i].codice);
		
		printf("Inserisci la descrizione della scatola\n");
		scanf(" %[^\n]", scatole[i].descrizione);
		
		printf("Inserisci il numero degli oggetti\n");
		scanf("%d", &scatole[i].n_oggetti);
		
		for(j = 0; j < scatole[i].n_oggetti; j++) {
			printf("\nOggetto %d\n", j);
			printf("Inserisci la descrizione dell'oggetto\n");
			scanf(" %[^\n]", scatole[i].oggetti[j].descrizione);
			
			printf("Inserisci il peso unitario dell'oggetto\n");
			scanf("%f", &scatole[i].oggetti[j].peso_per_unita);
			
			printf("Inserisci la quantità\n");
			scanf("%d", &scatole[i].oggetti[j].quanti);
			
			printf("Inserisci il codice dell'oggetto\n");
			scanf("%d", &scatole[i].oggetti[j].codice);
		}
	}
	
	printf("\nNel cpntainer di capienza 100 ci stanno %d\n", trovaCapienza(scatole, N_SCATOLE, 100));
	
	return 0;
}

int trovaCapienza(t_scatola scatole[], int dim, float peso) {
	int i, j, trovato;
	float pScatola, pTot;
	
	pTot = 0;
	trovato = 0;
	i = 0;
	
	for(i = 0; i < dim && !trovato; i++) {
		pScatola = 0;
		for(j = 0; j < scatole[i].n_oggetti; j++) {
			pScatola += (scatole[i].oggetti[j].peso_per_unita * scatole[i].oggetti[j].quanti);
		}
		
		if(pTot + pScatola > peso) {
			trovato = 1;
		} else {
			pTot += pScatola;
		}
	}
	
	return i-1;	
}
