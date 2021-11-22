/* esercitazione Chiari */
/* Minimo ricorsivo */

#include <stdio.h>

int min_it(int A[], int n);
int min_ric(int A[], int n);

int main() {
	
	return 0;
}

int min_it(int A[], int n) {
	int min = A[n-1], i;
	
	for(i = n-1; i > 0; i--) {
		if(A[i-1] < min) {
			min = A[i-1];
		}
	}
	
	return min;	
}

int min_ric(int A[], int n) {
	int min_resto;
	
	if(n == 1) {
		return A[0];
	} else {
		min_resto = min_ric(A, n-1);
		if(A[n-1] < min_resto) {
			return A[n-1];
		} else {
			return min_resto;
		}
	}
}
