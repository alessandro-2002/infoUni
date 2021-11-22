/* data una matrice quadrata e una define N chiedere dati input per riempire la matrice e poi guardare se è una matrice identità 
 * stampare 1 se vero 0 se falso
*/

#include <stdio.h>

#define N 3

int main() {
	int mat[N][N];
	int i, j, identita;
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("Inserisci l'elemento (%d, %d) -->\t", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	identita = 1;
	
	for(i = 0; i < N && identita; i++) {
		for(j = 0; j < N && identita; j++) {
			if((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
					
					identita = 0;
				
			}
		}
	}
	
	if(identita) {
		printf("\nLa matrice e' una matrice identita'.\n");
	} else {
		printf("\nLa matrice non e' una matrice identita'.\n");
	}
	
	return 0;
}
