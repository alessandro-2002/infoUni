/* esercitazione Chiari */
/* Poligono */
/* Si scriva un programma che richieda l’inserimento di una sequenza di punti cartesiani (massimo 10) e li memorizzi in un array. 
 * Si realizzi una funzione che dati due punti cartesiani ne calcoli la distanza euclidea. 
 * Si realizzi una funzione che dato un array di punti rappresentanti i vertici di un poligono (già nell’ordine giusto), ne calcoli il perimetro. */
 
#include <stdio.h>
#include <math.h>

#define DIM 10

typedef struct {
	int x;
	int y;
} punto_t;

float distanza(punto_t, punto_t);
float perimetro(punto_t *, int);

int main() {
	punto_t vet[DIM];
	int i, n;
	float p;
	
	do{
		printf("Quanti punti vuoi inserire?\n");
		scanf("%d", &n);
	} while(n <= 0);
	
	/* input */
	for(i = 0; i < n; i++) {
		printf("Inserisci x y del punto %d\n", i+1);
		scanf("%d%d", &vet[i].x, &vet[i].y);
	}
	
	p = perimetro(vet, n);
	
	printf("%f\n", p);
	return 0;
}

float distanza(punto_t p1, punto_t p2) {
	float res;
	
	res = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	
	return res;
}

float perimetro(punto_t punti[DIM], int nPunti) {
	float res;
	int i;
	
	res = 0;
	
	for(i = 0; i < nPunti; i++) {
		if(i != nPunti-1) {
			res += distanza(punti[i], punti[i+1]);
		} else {
			res += distanza(punti[i], punti[0]);
		}
	}
	
	return res;
}
