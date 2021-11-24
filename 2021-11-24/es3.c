/* esercitazione Chiari */
/* Vendite giornaliere */

#include <stdio.h>

#define NFILEI "vendite.txt"
#define NFILEO "guadagniGiornalieri.txt"

#define gA 10
#define gB 20
#define LENDATA 8

int main() {
	FILE *fin, *fout;
	char data[LENDATA+1];
	int a, b;
	int tota, totb;
	
	
	fin = fopen(NFILEI, "r");
	fout = fopen(NFILEO, "w+");
	
	if(fin && fout) {
		tota = 0;
		totb = 0;
		
		fscanf(fin, "%s %d %d", data, &a, &b);
		
		while(!feof(fin)) {
			tota += a;
			totb += b;
			
			fprintf(fout, "%s %d\n", data, (a*gA + b*gB));
			
			fscanf(fin, "%s %d %d", data, &a, &b);
		}
		
		printf("Totale quantità di A: %d\n", tota);
		printf("Totale quantità di B: %d\n", totb);
		
		fclose(fin);
		fclose(fout);
	
	} else {
		printf("Errore nell'apertura del file\n");
	}
	
	return 0;
}
