#include <stdio.h>

void cambia(const cambia[5]);

int main() {
	int vet[5] = {1,2,3,4,5};
	int i;
	
	cambia(vet);
	
	
	
	return 0;	
}

void cambia(const vettore[]) {
	/* vettore[2] = 22; */
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d\n", vettore[i]);
	}
}
