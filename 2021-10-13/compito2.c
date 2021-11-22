#include <stdio.h>
#include <string.h>

#define N 30

int main() {
	char s1[N + 1];
	
	int i, len, max;
	
	i = 0;
	max = 0;
	
	printf("Inserisci una frase:\n");
	scanf("%[^\n]", s1);
	
	while(s1[i] != '\0') {
		len = 0;
		
		while(s1[i] >= 'a' && s1[i] <= 'z') {
			len++;
			i++;
		}
		
		if(len > max) {
			max = len;
		}
		
		if(s1[i] != '\0') {
			i++;
		}
	}
	
	printf("Il massimo e': %d\n", max);
	
	return 0;
}

