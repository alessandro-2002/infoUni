/* Laboratorio 3 */
/* 18/11/2021 */
/* es 3.4 */

#include <stdio.h>
#include <math.h>

#define MAX 3

typedef struct {
	float re;
	float im;
} complesso_t;

int main() {
	complesso_t valori[MAX];
	int i, maxMod, minF;
	float f, m, t;
	
	for(i = 0; i < MAX; i++) {
		printf("Inserire un numero complesso\n");
		scanf("%f %f", &valori[i].re, &valori[i].im);
	}
	
	maxMod = 0;
	minF = 0;
	
	for(i = 1; i < MAX; i++) {
		/* trovo minima fase */
		f = atan(valori[i].im / valori[i].re);
		t = atan(valori[minF].im / valori[minF].re);
		 
		if(f < t) {
		 	minF = i;
		}
		
		/* trovo max modulo */
		m = valori[i].im * valori[i].im + valori[i].re * valori[i].re;
		t = valori[maxMod].im * valori[maxMod].im + valori[maxMod].re * valori[maxMod].re;
		
		if(m > t) {
			maxMod = i;
		}
	}
	
	printf("Numero di massimo modulo: (Re)%f (Im)%f\n", valori[maxMod].re, valori[maxMod].im);
	printf("Numero di minima fase: (Re)%f (Im)%f\n", valori[minF].re, valori[minF].im);
	
	return 0;
}
