/* Laboratorio 3 */
/* 18/11/2021 */
/* es 3.2 */

#include <stdio.h>
#define LEN 10

int main() {
	char str[LEN+1];
	int c, i;
	
	c = 0;
	
	printf("Inserisci una stringa\n");
	scanf(" %[^\n]", str);
	
	i = 0;
	while(str[i] != '\0' || i > LEN){
		switch(str[i]) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				c++;
				break;
		}
		
		i++;
	}
	
	printf("Sono presenti %d vocali\n", c);
	
	return 0;
}
