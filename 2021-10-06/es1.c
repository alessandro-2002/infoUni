/* data una serie di lettere minuscole ottenere la lettera successiva, termina se c'è altro carattere */ 
/* es. se a --> b, z-->a */

#include <stdio.h>

int main() {
	char l;
	
	do {
		scanf(" %c", &l);
		
		/* scanf("%s", &l); */
		
		/*
			scanf("%c", &l);
			scanf("%*c"); //butta quello nell'input
		*/
		
		if(l >= 'a' && l < 'z'){
			l += 1;
		}else if(l == 'z') {
			l = 'a';
		}
		
		printf("Output: %c\n", l);
		
	} while(l >= 'a' && l <= 'z');
	
	return 0;
}
