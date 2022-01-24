#include <stdio.h>

int tautogramma(char s[]) {
	int ris,i,controllo;
	char primo;
	
	controllo=1;
	ris=1;
	primo = 0;
	
	for(i=0; s[i] != '\0' && ris ==1; i++) {
		if(controllo) {
			if(s[i] >= 'a' && s[i] <= 'z') {
				if(primo == 0) {
					primo = s[i];
					controllo = 0;
				} else {
					if(s[i] == primo) {
						controllo = 0;
					} else {
						ris = 0;
					}
				}
			}
		} else if (s[i] < 'a' || s[i] > 'z') {
			controllo = 1;
		}
	}
	return ris;
}

int main() {
	printf("%d\n\n", tautogramma(".. 43243veni. )()vidi 00vici"));
	
	return 0;
}
