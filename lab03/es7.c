/* Laboratorio 3 */
/* 18/11/2021 */
/* es 3.7 */

#include <stdio.h>

#define DIM 10

int checkArray(int arr1[], int arr2[]);

int main() {
	int arr1[DIM] /*= {5, 4, 9, 8, 3, 0, 1, 9, 3, 4}*/;
	int arr2[DIM] /*= {9, 3, 4, 5, 4, 9, 8, 3, 0, 1}*/;
	int i, npos;
	
	printf("Riempimento primo array\n");
	for(i = 0; i < DIM; i++) {
		printf("Inserisci un numero -->\t");
		scanf("%d", &arr1[i]);
	}
	
	printf("Riempimento secondo array\n");
	for(i = 0; i < DIM; i++) {
		printf("Inserisci un numero -->\t");
		scanf("%d", &arr2[i]);
	}
	
	npos = checkArray(arr1, arr2);
	
	if(npos == -1) {
		printf("I due array sono diversi\n");
	} else {
		printf("Serve uno scorrimento di %d posizioni a destra\n", npos);
	}
	
	return 0;
}

int checkArray(int arr1[], int arr2[]) {
	int npos, i, j, primo, uguali;
	
	primo = -1;
	/* controllo dove sta il primo */
	for(i = 0; i < DIM && primo == -1; i++) {
		if(arr1[0] == arr2[i]) {
			primo = i;
			npos = DIM - i;
		}
	}
	
	/* se non trova */
	if(primo == -1) {
		return -1;
	}
	
	/* se lo trova controllo gli altri */
	uguali = 1;
	
	/* scorro entrambi gli array */
	for(i = 1; i < DIM && uguali; i++) {
		/* trovo la pos corrispondente nel secondo array */
		if(i + primo >= DIM) { 
			/* se si va fuori range adatto */
			j = i + primo - DIM; 
		} else {
			j = i + primo;
		}
		
		/* confronto il primo array con la posizione aspettata nel secondo */
		if(arr1[i] != arr2[j]) {
			uguali = 0;
		}
	}
	
	if(uguali) {
		return npos;
	} else {
		return -1;
	}
}




