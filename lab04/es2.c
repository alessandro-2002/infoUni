/* Laboratorio 4 Conti */
/* lettura file */

#include <stdio.h>

#define NFILE "TEST.txt"

int main() {
	FILE *f;
	int max, c, t;
	
	f = fopen(NFILE, "r");
	
	if(f) {
		t = max;
		c = 0;
		
		fscanf(f, "%d", &max);
		while(!feof(f)) {
			if(t > max) {
				max = t;
				c = 1;
			} else if(t == max){
				c++;
			}
			
			fscanf(f, "%d", &t);
		}
		
		if(c == 0) {
			printf("Sequenza vuota\n");
		} else
			printf("Numero massimo %d trovato %d volte\n", max, c); 
			
		fclose(f);
	} else {
		printf("Errore apertura file\n");
	}
	
	return 0;
}
