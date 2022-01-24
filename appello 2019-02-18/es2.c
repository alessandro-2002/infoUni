#include <stdio.h>

#define LEN 30

int main() {
	FILE *fin, *fout;
	char nFile[LEN+1];
	int i, num, counter, j, isPrimo;
	
	printf("Inserisci nome file\n");
	scanf("%s", nFile);
	
	fin = fopen(nFile, "r");
	fout = fopen("risultati.txt", "w+");
	if(fin && fout) {
		
		fscanf(fin, "%d", &num);
		while(!feof(fin)) {
			counter = 0;
			for(i = 2; i <= num; i++) {
				isPrimo = 1;
				for(j = i/2; j > 1 && isPrimo; j--){
					if(i%j == 0) {
						isPrimo = 0;
					}
				}
				
				if(isPrimo) {
					counter++;
				} 
			}
			fprintf(fout, "%d %d\n", num, counter);
			
			fscanf(fin, "%d", &num);
		}
		
		fclose(fin);
		fclose(fout);
	} else{
		printf("Errore apertura file");
	}
	
	return 0;
}
