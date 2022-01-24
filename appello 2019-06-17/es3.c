/* TEST CODICE SU CARTA appello 2019-06-17 */

#include <stdio.h>
#include <stdlib.h>

char* nuovaStringa(char s[], char ch) {
	int lenRis, i, iCh, flag, uscita;
	char *ris;
	
	i = 0;
	flag = 0;
	uscita = 0;
	lenRis =0;
	while(s[i]!='\0' && !uscita) {
		if(s[i] == ch) {
			if(flag) {
				uscita = 1;
			} else {
				flag = 1;
				iCh = i;
			}
		} else if(flag) {
			lenRis++;
		}
		i++;
	}
	
	ris = malloc((lenRis+1)*sizeof(char));
	
	if(ris) {
		for(i = 0; i < lenRis; i++) {
			ris[i] = s[i+iCh+1];
		}
		ris[lenRis] = '\0';
	} else {
		printf("Errore allocazione");
	}
	
	return ris;
}

int main() {
	char s[] = "abracadabroa";
	char c = 'a';
	
	char *ris = nuovaStringa(s, c);
	
	printf("\n%s\n", ris);
	
	free(ris);
	
	return 0;
	
}
