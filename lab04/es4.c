/* Laboratorio 4 Conti */
/* Converti numero */

#include <stdio.h>

#define LEN 15
#define NF "testo.txt"

void convertinumero(char str[], int *num, int *valido);

int main() {
	FILE *f;
	int somma, numero, valido;
	char temp[LEN+1];
	
	f = fopen(NF, "r");
	
	if(f) {
		somma = 0;
		
		fscanf(f, "%s", temp);
		while(!feof(f)) {
			convertinumero(temp, &numero, &valido);
			
			if(valido) {
				somma += numero;
			}
			
			fscanf(f, "%s", temp);
		}
		
		printf("Somma: %d\n", somma);
		
		fclose(f);
	} else {
		printf("Erroere apertura file\n");
	}
	
	
	return 0;
}

void convertinumero(char str[], int *num, int *valido) {
	int i;
	int numero;
	
	numero = 0;
	*valido = 1;
	
	for(i = 0; str[i] != '\0' && *valido; i++) {
		if(str[i] >= '0' && str[i] <= '9') {
			numero *= 10;
			
			numero += (str[i] - '0');
			
		} else {
			*valido = 0;
		}
	}
	
	if (*valido) {
		*num = numero;
	}
}


