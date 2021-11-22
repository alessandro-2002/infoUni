/* trovare la lunghezza della stringa più lunga data una frase */

#include <stdio.h>

#define N 100

int main() {
	char str[N + 1];
	int i, max, pos;
	
	max = 0;
	pos = -1;
	
	printf("Inserisci una frase:\n");
	scanf("%[^\n]", str);
	
	for(i = 0; str[i-1] != '\0'; i++) {
		if(str[i] == ' ' || str[i] == '\0') {
			if(i - 1 - pos > max) {
				max = i - 1 - pos;
			}
			pos = i;
		}
	}
	
	printf("La lunghezza massima e': %d\n", max);
	
	return 0;
}
