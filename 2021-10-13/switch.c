/* switch */

#include <stdio.h>

int main() {
	int num;
	
	printf("Inserisci un nunmero -->\t");
	scanf("%d", &num);
	
	switch(num) {
		case 0:
			printf("zero\n");
			break;
			
		case 1:
			printf("uno\n");
			break;
		
		default:
			printf("errore\n");
	}	
	
	return 0;
}
