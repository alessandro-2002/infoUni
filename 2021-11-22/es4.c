/* esercitazione Crovari */
/* ROT-13 */

#include <stdio.h>

#define NFILEI "input.txt"
#define NFILEO "output.txt"

char getRot(char c);

int main() {
	FILE *fp_input, *fp_output;
	char c;
	
	fp_input = fopen(NFILEI, "r");
	fp_output = fopen(NFILEO, "w");
	
	if(fp_input != NULL && fp_output != NULL) {
		
		fscanf(fp_input, "%c", &c);
		while(!feof(fp_input)) {
			if(c >= 'a' && c <= 'z')
				fprintf(fp_output, "%c", getRot(c));
			fscanf(fp_input, "%c", &c);
		}
		
		fclose(fp_input);
		fclose(fp_output);
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
