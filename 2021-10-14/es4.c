/* esercizio di compito */
/* Si scriva un programma in linguaggio C che 
 * riceva in ingresso due parole inserite da tastiera (max 30 caratteri ognuna). 
 * Il programma deve verificare se la seconda parola inserita è contenuta almeno 
 * una volta all'interno della prima parola (ossia se la seconda parola è una
 * sottostringa della prima parola). */
 
#include <stdio.h>
#include <string.h>

#define LEN 30

int main() {
	char str1[LEN+1];
	char str2[LEN+1];
	int i, j, contenuta;
	
	contenuta = 0;
	
	printf("Inserisci una parola:\n");
	scanf("%s", str1);
	
	printf("Inserisci una seconda parola:\n");
	scanf("%s", str2);
	
	if(strlen(str2) <= strlen(str1)) {
		for(i = 0; i < strlen(str1) - strlen(str2) +1 && !contenuta; i++) {
			if(str1[i] == str2[0]) {
				contenuta = 1;
				
				for(j = 0; j < strlen(str2) && contenuta; j++) {
					if (str2[j] != str1[i+j]) {
						contenuta = 0;
					}
				}
			}
		}
		
	}
	
	if(contenuta) {
		printf("\nLa seconda parola è contenuta.\n");
	} else {
		printf("\nLa seconda parola non è contenuta\n");
	}

	return 0;
}
