/* inizializzare array di DIM 20 in modo che 
	- dove indice pari contenuto è 2
	- dove indice dispari contenuto è 1 */
	
#include <stdio.h>

#define DIM 20

int main() {
	int arr[DIM];
	int i;
	
	for(i = 0; i < DIM; i++) {
		if(i%2 == 0) {
			arr[i] = 2;
		} else {
			arr[i] = 1;
		}
	}
	
	/* stampo array */
	for(i = 0; i < DIM; i++) {
		printf("%d\t", arr[i]);
	}
	
	return 0;
}
