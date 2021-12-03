#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s[] = "abaab";
	char *r;
	int i, j;
	
	r = (char *) malloc(strlen(s)*2 * sizeof(char));
	j = 0;
	for(i = 0; s[i] != '\0'; i++) {
		if(s[i] == 'a') {
			r[j] = 'b';
			j++;
		} else{
			r[j] = 'a';
			r[j+1] = 'b';
			j += 2;
		}
	}
	
	r[j+1] = '\0';
	
	printf("%s\n", r);
	
	return 0;
}
