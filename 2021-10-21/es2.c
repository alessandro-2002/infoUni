#include <stdio.h>

#define PI 3.14

float circonferenza(float);

int main() {
	float r, c;
	
	printf("Inserisci il raggio\n");
	scanf("%f", &r);
	
	c = circonferenza(r);
	
	printf("\nIl raggio è %f, la circonferenza è %f\n", r, c);

	return 0;
}

float circonferenza(float raggio) {
	float circ;
	
	circ = raggio * 2 * PI;
		
	return circ;
}
