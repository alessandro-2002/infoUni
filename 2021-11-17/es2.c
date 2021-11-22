/* esercitazione Crovari */
/* Abaco ricorsivo */

#include <stdio.h>

void print_unario(int n);
void abaco_ric(int n);

int main() {
	int n;
	
	do{
		printf("Inserire un numero, 0 per terminare\n");
		scanf("%d", &n);
		
		if(n!=0) {
			abaco_ric(n);
		}

	}while(n != 0);
	
	return 0;
}

void abaco_ric(int n) {
	if(n <= 0) {
		return;
	} else {
		abaco_ric(n/10);
		print_unario(n%10);
		return;
	}
}

void print_unario(int n) {
	if(n<=0) {
		printf("\n");
	} else {
		printf("o");
		print_unario(n-1);
		return;
	}
}

