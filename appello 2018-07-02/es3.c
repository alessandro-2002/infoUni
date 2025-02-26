#include <stdio.h>
#include <stdlib.h>
int conta_occorrenze(int *arr, int pos, int dimArr) {
	int i, c;
	c=0;

	for(i=0; i<dimArr; i++) {
		if(arr[i] == arr[pos]) {
			c++;
		}
	}
	return c;
}

void scrivi_contatori() {
	FILE *fin, *fout;

	int len, num, i, j, isScritto, c, *arr;

	fin=fopen("input", "r");
	if(f
	in) {

		/* conto numeri totali */
		len=0;
		fscanf(fin, "%d", &num);
		while(!feof(fin)) {
			len++;
			fscanf(fin, "%d", &num);
		}

		/* alloco array per contenere tutti i numeri */
		arr = malloc(sizeof(int) * len);

		if(arr) {

			/* rileggo file da capo e salvo nell'array */
			rewind(fin);
			for(i=0; i < len; i++) {
				fscanf(fin, "%d", &arr[i]);
			}

			fclose(fin);

			/* apro il file di output */
			fout=fopen("output", "w");

			if(fout) {
				for(i=0; i<len; i++) {
					/* controllo se � gi� stato scritto */
					isScritto = 0;
					for(j=i-1; j>=0 && !isScritto; j--) {
						if(arr[i] == arr[j])
							isScritto = 1;
					}

					if(!isScritto) {
						c = conta_occorrenze(arr, i, len);
						fprintf(fout, "%d %d\n", arr[i], c);
					}

				}
				fclose(fout);
			} else {
				printf("Errore apertura file di output");
			}
			free(arr);
		} else {
			printf("Errore allocazione memoria");
		}
	} else {
		printf("errore apertura file di input");
	}
}

int main() {
	scrivi_contatori();
	return 0;
}
