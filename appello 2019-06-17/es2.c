/* TEST CODICE SU CARTA appello 2019-06-17 */

#include <stdio.h>
#include <stdlib.h>

int vicino(float a[], int dimA) {
	int i, minIndice;
	float media, minDiff;
	
	media = 0;
	
	for(i = 0; i < dimA; i++) {
		media += a[i];
	}
	
	media /= dimA;
	
	minDiff = abs(media-a[0]);
	minIndice =0;
	
	for(i=0; i< dimA; i++) {
		if(abs(media-a[i]) < minDiff) {
			minDiff = abs(media-a[i]);
			minIndice = i;
		}
	}
	
	return minIndice;
}

int main() {
	float a[4] = {3.0,2.0,4.0,12.0};
	
	printf("%d\n", vicino(a, 4));
	
	return 0;
}
