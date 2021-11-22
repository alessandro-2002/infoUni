/* Laboratorio 3 */
/* 18/11/2021 */
/* es 3.6 */

#include <stdio.h>

#define LEN 10

int asciiToInt(char str[]);

int main() {
	char str[LEN+1];
	int num;
	
	printf("Inserisci una stringa\n");
	scanf("%s", str);
	
	num = asciiToInt(str);
	
	if(num == -1) {
		printf("La stringa non è numerica\n");
	} else {
		printf("Numero convertito: %d\n", num);
	}
	
	return 0;
}

int asciiToInt(char str[]) {
	int i, res;
	
	res = 0;
	
	for(i = 0; str[i] != '\0'; i++) {
		/* controllo sia numero in ascii */
		if(str[i] < '0' || str[i] > '9') {
			return -1;
		}
		
		/* incremento di una cifra */
		res *= 10;
		res += str[i] - '0';
	}
	
	return res;
}
