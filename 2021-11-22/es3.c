/* esercitazione Crovari */
/* Persone file binari */

#include <stdio.h>

#define LEN 100
#define DIM 100

typedef struct {
	char cognome[LEN+1];
	char nome[LEN+1];
	char sesso;
	int anno;	
}persona_t;

void popola_file(char nomeFile[]);
void leggi_file(char nomeFile[]);

int main() {
	char nomeFile[LEN+1], mod;
	
	printf("Inserisci il nome del file\n");
	scanf("%s", nomeFile);
	
	do {
		printf("Inserisci w o r\n");
		scanf("%c", &mod);
		scanf("%c", &mod);
	} while(mod != 'w' && mod != 'r');
	
	if(mod == 'w') {
		popola_file(nomeFile);
	} else {
		leggi_file(nomeFile);
	}
	
	return 0;
}

void popola_file(char nomeFile[]) {
	FILE *f1;
	int n, i;
	persona_t arr[DIM];
	
	f1 = fopen(nomeFile, "wb");
	
	if(f1 != NULL) {
		do {
			printf("Quante persone vuoi inserire?\n");
			scanf("%d", &n);
		} while(n <= 0 || n >= DIM);
		
		for(i = 0; i < n; i++) {
			printf("Inserisci cognome nome sesso anno\n");
			scanf("%s %s %c %d", arr[i].cognome, arr[i].nome, &arr[i].sesso, &arr[i].anno);
		}
	
		fwrite(arr, sizeof(persona_t), n, f1);
	
		fclose(f1);
	} else {
		printf("Errore nell'apertura del file\n");
	}
	
}

void leggi_file(char nomeFile[]) {
	FILE *f1;
	persona_t arr[DIM];
	int n, i;
	
	f1 = fopen(nomeFile, "rb");
	
	if(f1 != NULL) {
		n = fread(arr, sizeof(persona_t), DIM, f1);
		
		for(i = 0; i < n; i++) {
			printf("%s %s %c %d\n", arr[i].cognome, arr[i].nome, arr[i].sesso, arr[i].anno);
		}
	
		fclose(f1);
	} else {
		printf("Errore nell'apertura del file\n");
	}
	
}
