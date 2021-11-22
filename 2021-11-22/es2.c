/* esercitazione Crovari */
/* Ingredienti */

#include <stdio.h>

#define LEN 10

int main() {
	FILE *f1, *f2;
	char nFile1[LEN+1], nFile2[LEN+1];
	int x, y;
	
	do {
		printf("Inserisci il nome del file da leggere\n");
		scanf("%s", nFile1);
		f1 = fopen(nFile1, "r");
	} while(f1 == NULL);
	
	printf("Inserisci il nome del file da scrivere\n");
	scanf("%s", nFile2);
	f2 = fopen(nFile2, "w+");
	
	if(f2 != NULL) {
	
		fscanf(f1, "%d %d", &x, &y);
		
		while(!feof(f1)) {
			fprintf(f2, "%d\n", x-y);
			fscanf(f1, "%d %d", &x, &y)
		}
		
		fclose(f2);
	} else {
		printf("Errore nell'apertura del file di output\n");
	}
	
	fclose(f1);
	return 0;
}
