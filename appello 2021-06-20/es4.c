#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 15

char *Copia(char[], int*, int*);
int isVocale(char);

int main() {
	int numV, numC;
	char *n_str, nFile[MAXLEN+1], parola[MAXLEN+1];
	FILE *f;
	
	printf("Inserisci nome del file\n");
	scanf("%s", nFile);
	f = fopen(nFile, "r");
	if(f) {
		fscanf(f, "%s", parola);
		while(!feof(f)) {
			n_str = Copia(parola, &numV, &numC);
			if(n_str) {
				printf("%s %s %d %d\n", parola, n_str, numV, numC);
				free(n_str);
			}
			fscanf(f, "%s", parola);
		}
		fclose(f);
	} else {
		printf("Errore apertura file");
	}
	
	return 0;
}

char *Copia(char str[], int *nV, int *nC) {
	int i, lenStr, k;
	char *n_str;

	*nC = 0;
	*nV = 0;
	lenStr= strlen(str);
	n_str = malloc(sizeof(char) * (lenStr+1));
	if(n_str) {
		k = 0;
		for(i=0; i<lenStr; i++) {
			if(isVocale(str[i])) {
				n_str[k] = str[i];
				*nV = *nV +1;
				k++;
			}
		}
		for(i=0;i<lenStr;i++) {
			if(!isVocale(str[i])) {
				n_str[k] = str[i];
				k++;
				*nC = *nC +1;
			}
		}
		n_str[k] = '\0';
	}else{
		printf("Errore allocazione\n");
		n_str = NULL;
	}
	return n_str;
}

int isVocale(char ch) {
	int ris;
	switch(ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			ris = 1;
			break;
		default:
			ris = 0;
	}
	return ris;
}
