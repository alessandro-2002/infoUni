/* Laboratorio 3 */
/* 18/11/2021 */
/* es 3.3 */

#include <stdio.h>
#include <math.h>

typedef struct {
	float re;
	float im;
} complesso_t;

int main() {
	complesso_t n1, n2, somma;
	double f1, f2;
	
	printf("Inserire il primo numero complesso\n");
	scanf("%f %f", &n1.re, &n1.im);
	
	printf("Inserire il secondo numero complesso\n");
	scanf("%f %f", &n2.re, &n2.im);
	
	/* calcolo la somma */
	somma.re = n1.re + n2.re;
	somma.im = n1.im + n2.im;
	
	printf("La somma dei due numeri è: (Re)%f (Im)%f\n", somma.re, somma.im);
	
	f1 = atan(n1.im / n1.re);
	f2 = atan(n2.im / n2.re);
	
	if(f1 == f2) {
		printf("Hanno la stessa fase\n");
	} else {
		printf("Non hanno la stessa fase\n");
	}
	
	return 0;
}
