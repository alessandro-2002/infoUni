#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "input.txt"

int isPrimo(int n) {
	int i;
	int res;
	res = 1;
	
	for(i = n-1; i > 1; i--){
		if(n % i == 0) {
			res = 0;
		} 
	}
	
	return res;
}

int main() {
	FILE *f1;
	
	int c, max;
	c = 0;
	max = 0;
	
	//apertura file
	f1 = fopen(FILE_NAME, "r");
	if(f1 == NULL) {
		printf("Impossibile aprire il file");
		exit(1);
	}
	
	char t[500];

	while(!feof(f1)){
		fscanf(f1, "%s", t);
		if(isPrimo(atoi(t))){
			printf("t %s\n", t);
			c++;
			
			//controllo max
			if(c > max) {
				max = c;
			} else {
				c = 0;
			}
		}
	}
	
	printf("Massimo numeri primi consecutivi: %d\n", max);
	
	fclose(f1);
	return 0;
}
