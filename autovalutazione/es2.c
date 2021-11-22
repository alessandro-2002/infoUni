#include <stdio.h>

#define DIMMAX 10

int main() {
	//dichiarazione variabili
	int nr, nc;	//mat1
	int dimr, dimc;	//mat2
	
	int i, j, k, h, t;
	
	int r, c; //coordinate in cui è trovata la matrice
	int trovata; //variabile temporanea per ricerca corrispondenza
	int corrispondenza = 0; //diventa 1 quando la matrice è stata trovata almeno 1 volta
	
	//dichiarazione matrici
	int mat1[DIMMAX][DIMMAX];
	int mat2[DIMMAX][DIMMAX];
	
	//richiesta dimensioni mat1
	do {
		printf("Inserisci il numero di righe della matrice1 -->\t");
		scanf("%d", &nr);
	}while(nr >= DIMMAX || nr < 1);
	
	do {
		printf("Inserisci il numero di colonne della matrice1 -->\t");
		scanf("%d", &nc);
	}while(nc >= DIMMAX || nc < 1);
	
	//riempio la matrice1 in input
	for(i = 0; i < nr; i++) {
		for(j = 0; j< nc; j++){
			printf("Inserisci il valore (%d,%d) -->\t", i, j);
			scanf("%d", &t);
			
			mat1[i][j] = t;
		}
	}
	
	//richiesta dimensioni mat2
	do {
		printf("Inserisci il numero di righe della matrice2 -->\t");
		scanf("%d", &dimr);
	}while(dimr >= nr || dimr < 1);
	
	do {
		printf("Inserisci il numero di colonne della matrice2 -->\t");
		scanf("%d", &dimc);
	}while(dimc >= nc || dimc < 1);
	
	//riempio la matrice2 in input
	for(i = 0; i < dimr; i++) {
		for(j = 0; j< dimc; j++){
			printf("Inserisci il valore (%d,%d) -->\t", i, j);
			scanf("%d", &t);
			
			mat2[i][j] = t;
		}
	}
	
	//controllo se trovo la mat2 in mat1
	//scorro la matrice 1 e controllo ogni elemento col primo di mat2
	for (i = 0; i <= nr - dimr; i++) {
		for (j = 0; j <= nc - dimc; j++){
			//controllo
			if(mat1[i][j] == mat2[0][0]){
				//salvo le coordinate in cui è stata trovata in mat1
				r = i;
				c = j;
				
				//contrassegno temporaneamente la corrispondenza
				trovata = 1;
				
				//proseguo il controllo sugli altri elementi scorrendo mat2
				for (k = 0; k < dimr; k++){
					for(h = 0; h < dimc; h++) {
						if(mat2[k][h] != mat1[r+k][c+h]){
							trovata = 0;
						}
					}
				}
				
				//controllo se trovata stampo messaggio
				printf("Trovata alle coordinate (%d, %d)\n", r, c);
				corrispondenza = 1;
			}
		}
	}
	
	//se non è stata trovata corrispondenza
	if (!corrispondenza)
		printf("La seconda matrice non e' contenuta nella prima.\n");

	return 0;
}
