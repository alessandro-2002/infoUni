#include <stdio.h>

typedef struct {
	float min;
	float max;
} intervallo;

float calcola_ampiezza(intervallo in) {
	float ris;
	ris = in.max - in.min;
	return ris;
}

int isContenuto(intervallo in, float n) {
	if(n>=in.min && n <=in.max) {
		return 1;
	} else {
		return 0;
	}
}

int intervallo_min(intervallo s[], float x, int dimInt) {
	int indiceMin, i;
	float ampMin, ampiezza;
	indiceMin=-1;
	ampMin=-1;

	for(i=0; i<dimInt; i++) {
		if(isContenuto(s[i], x)) {
			ampiezza=calcola_ampiezza(s[i]);
			if(ampMin==-1 || ampMin>ampiezza) {
				ampMin=ampiezza;
				indiceMin=i;
			}
		}
	}
	return indiceMin;
}

int main() {
	intervallo s[7] = { {0, 1},
		{2, 4},
		{2, 5},
		{3, 10},
		{0, 4},
		{4, 8},
		{5, 8}
	};
	
	printf("0 %d\n", intervallo_min(s, 0, 7));
	printf("12 %d\n", intervallo_min(s, 12, 7));
	printf("4 %d\n", intervallo_min(s, 4, 7));
	
	return 0;
}
