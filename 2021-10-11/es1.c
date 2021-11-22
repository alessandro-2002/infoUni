/* esercitazione Chiari 11/10/2021 */
/* piramide */

#include <stdio.h>

int main() {
	int ast = 1;
	
	int spazi;
	
	int i, j, n;
	
	printf("Inserire altezza piramide: ");
	scanf("%d", &n);
	
	spazi = n-1;
	
	for(j = 0; j < n; ++j) {
	
		for(i = 0; i < spazi; ++i) {
			printf(" ");
		}
		
		for(i = 0; i < ast; ++i) {
			printf("*");
		}
		
		printf("\n");
		ast += 2;
		spazi--;
	}
	
	return 0;
}
