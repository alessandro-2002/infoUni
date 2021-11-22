#include <stdio.h>

#define DIM 20

int main() {
	int a[DIM];
	int b[DIM];
	
	int i;
	
	for(i = 0; i < DIM; i++) {
		scanf("%d", &a[i]);
	}
	
	/* NON posso assegnare array ad un altro array tipo b = a */
	
	/* copio nel nuovo array */
	
	for(i = 0; i < DIM; i++) {
		b[i] = a[i];
	}
	
	return 0;
}
