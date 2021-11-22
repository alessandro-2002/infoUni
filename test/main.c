#include <stdio.h>
#include <stdlib.h>

int main() {
	int *vet;
	int n, i;
	printf("hello world!\n");
	
	//provo array dinamico
	printf("Quanti n vuoi inserire?\n");
	scanf("%d", &n);
	
	vet = malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++){
		printf("dammi il numero %d -->\t", i);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < n; i++){
		printf(" %d ", vet[i]);
	}
	
	
	return 0;
}
