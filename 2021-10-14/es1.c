/* 14/10/2021 esercitazione Crovari */
/* Scrivere un programma che, data una parola in ingresso, 
 * ne inverta i caratteri e la stampi a video. */
 
#include <stdio.h>
#include <string.h>

#define LEN 100

int main() {
	char parola[LEN];
	char invertita[LEN+1];
	int lunghezza, i;
	
	printf("Inserisci una parola: ");
	scanf("%s", parola);
	lunghezza = strlen(parola);
	
	for(i = 0; i < lunghezza; i++) {
		invertita[lunghezza-1-i] = parola[i]; 
	}
	
	invertita[lunghezza] = '\0';
	
	printf("La parola invertita è: %s\n", invertita);
	
	return 0;
}
