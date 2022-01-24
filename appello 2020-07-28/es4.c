/* Alessandro Toninelli */
/* Esercizio da appello 2020-07-28*/
/* es5 - doppioni da file */

#include <stdio.h>

#define MAXLEN 100
#define DIM 256

int distinti(char nFile[], int n) {
	FILE *f;
	int c, i;
	int counter[DIM];
	char temp;
	
	/* apertura file */	
	f = fopen(nFile, "r");
	
	if(f) {
		
		/* azzero array contatore di occorrenze dei caratteri */
		c = 0;
		for(i = 0; i< DIM; i++) {
			counter[i] = 0;
		}
	
		/* leggo ogni carattere */
		fscanf(f, "%c", &temp);
		while(!feof(f) && c < n) {
			
			/* se non è già stato letto incremento il counter e lo stampo */  
			if(counter[(int)temp] == 0 && temp != '\n') {
				counter[(int)temp] += 1;
				c++;
				printf("%c", temp);
			} 
			fscanf(f, "%c", &temp);
		}
		
		return c;
	} else {
		printf("Errore apertura file\n");
		return 0;
	}
}
