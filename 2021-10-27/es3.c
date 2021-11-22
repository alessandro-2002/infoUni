/* esercitazione Crovari */

#include <stdio.h>

int sommaDispari(int, int);

int main() {
	int somma;
	
	somma = sommaDispari(1, 5);
	
	printf("%d\n", somma);
	
	return 0;
}

int sommaDispari(int a, int b) {
	int res;
	int max, min, i;
	
	res = 0;
	
	if(a > b) {
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}
	
	for(i = min; i <= max; i++) {
		if (i % 2 == 1) {
			res += i;
		}
	}
	
	return res;
}
