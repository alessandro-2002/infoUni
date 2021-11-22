/* esercitazione Chiari */
/* Torri di Hanoi */

#include <stdio.h>

void hanoi(int src, int dst, int tmp, int n);

int main() {
	int n;
	
	do {
		printf("Inserisci il numero di dischi:\n");
		scanf("%d", &n);
	} while(n <= 0);
	
	hanoi(1, 3, 2, n);
	
	return 0;	
}

void hanoi(int src, int dst, int tmp, int n) {
	if(n == 1) {
		/* sposto un solo disco */
		printf("Sposta il disco dal perno %d al perno %d\n", src, dst);
	} else {
		/* se ne abbiamo di più */
		hanoi(src, tmp, dst, n-1);
		printf("Sposta disco dal perno %d al perno %d\n", src, dst);
		hanoi(tmp, dst, src, n-1);
	}
}
