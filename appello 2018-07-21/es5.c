#include <stdio.h>

#define NPIZZE 2
#define LENNOMP 30
#define LENNOMI 50
#define MAXING 10

typedef struct {
	int cod;
	char nome[LENNOMI+1];
} ingrediente_t;

typedef struct {
	int cod;
	char nome[LENNOMP+1];
	ingrediente_t ingredienti[MAXING];
	int nIng;
	float costo;
} pizza_t;

void stampaMenoDin(pizza_t[], int, int);

int main() {
	pizza_t pizze[NPIZZE];
	int n, i, j;

	for(i=0; i<NPIZZE; i++) {
		scanf("%d", &pizze[i].cod);
		scanf("%s", pizze[i].nome);
		scanf("%f", &pizze[i].costo);

		scanf("%d", &pizze[i].nIng);
		for(j=0; j<pizze[i].nIng; j++) {
			scanf("%d %s", &pizze[i].ingredienti[j].cod, pizze[i].ingredienti[j].nome);
		}
	}
	
	n =3;

	stampaMenoDin(pizze,NPIZZE, n);
	return 0;
}

void stampaMenoDin(pizza_t p[], int dimP, int n) {
	int i;

	for(i=0; i<dimP; i++) {
		if(p[i].nIng < n) {
			printf("%s ", p[i].nome);
		}
	}
}
