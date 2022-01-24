/* TEST CODICE SU CARTA appello 2019-06-17 */

#include <stdio.h>

#define MAXLEN 15

int main() {
	FILE *f;
	char p[MAXLEN+1];
	int i, isNumero;
	
	f = fopen("testo.txt", "r");
	
	if(f) {
		fscanf(f, "%s", p);
		
		while(!feof(f)) {
			i = 0; isNumero = 1;
			while(p[i] != '\0' && isNumero) {
				if(p[i] < '0' || p[i] > '9') {
					isNumero = 0;
				} i++;
			}
			
			if(isNumero)
				printf("%s ", p);
			
			fscanf(f, "%s", p);
		}
	}
	return 0;
}
