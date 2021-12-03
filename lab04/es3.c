/* Laboratorio 4 Conti */
/* sottoprogrammi e file */

#include <stdio.h>

#define MAXLEN 15
#define NFIN "testo.txt"
#define NFOUT "risultato.txt"

int analizzastringa(char str[]);

int main() {
	FILE *fin, *fout;
	char temp[MAXLEN+1];
	
	fin = fopen(NFIN, "r");
	fout = fopen(NFOUT, "w+");
	
	if(fin && fout) {
		
		fscanf(fin, "%s", temp);
		
		while(!feof(fin)) {
			if(analizzastringa(temp)) {
				fprintf(fout, "%s ", temp);
			}
			fscanf(fin, "%s", temp);
		}
		
		fclose(fin);
		fclose(fout);
	} else {
		printf("Errore apertura file\n");
	}
	return 0;	
}

int analizzastringa(char str[]) {
	int len, cNumeri, nonCifra;
	int i;
	
	nonCifra = 0;
	cNumeri = 0;
	len = 0;
	
	for(i = 0; str[i] != '\0'; i++) {
		len++;
		
		if(str[i] >= '0' && str[i] <= '9') {
			cNumeri++;
		} else {
			nonCifra = 1;
		}
	}
	
	return (len > 5 && cNumeri >= 2 && nonCifra);
}
