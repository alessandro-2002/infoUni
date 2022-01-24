/* Alessandro Toninelli */
/* Esercizio da appello 2020-07-28*/
/* es2 - stringa a b */

#include <stdio.h>
#include <stdlib.h>

char *genera_r(char s[]) {
	char *r;
	int lenR, i, j;

	/* conto i caratteri necessari per r */
	lenR = 0;
	i = 0;
	
	while(s[i] != '\0') {
		if(s[i] == 'a') {
			lenR += 1;
		} else {
			lenR += 2;
		}
		
		i++;
	}
	
	/* allocazione di r */
	
	r = malloc((lenR +1) * sizeof(char));
	
	if(r != NULL) {
	
		/* riempimento */
		i = 0;
		j = 0;
		
		while(s[i] != '\0') {
			if(s[i] == 'a') {
				r[j] = 'b';
				j++;
			} else {
				r[j] = 'a';
				r[j+1] = 'b';
				j += 2;
			}
			i++;
		}
		
		r[j] = '\0';
		
	} else {
		printf("Errore nell'allocazione della memoria.");
	}
	
	return r;
}
