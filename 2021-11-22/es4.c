/* esercitazione Crovari */
/* ROT-13 */

#include <stdio.h>

#define NFILEI "input.txt"
#define NFILEO "output.txt"

char getRot(char c);

int main() {
	FILE *f1, *f2;
	char c;
	
	f1 = fopen(NFILEI, "r");
	
	if(f1 != NULL) {
		f2 = fopen(NFILEO, "w+");
		
		fscanf(f1, "%c", &c);
		while(!feof(f1)) {
			if(c >= 'a' && c <= 'z')
				fprintf(f2, "%c", getRot(c));
			fscanf(f1, "%c", &c);
		}
		
		fclose(f1);
		fclose(f2);
	} else {
		printf("Errore nell'apertura del file\n");
	}

	return 0;
}

char getRot(char c) {
	char res;
	
	if(c == ' '){
		res = ' ';
	} else {
		res = c + 13;
		
		if(res > 'z') {
			res = 'a' + (res - 'z' -1);
		}
	}
	
	return res;	
}
