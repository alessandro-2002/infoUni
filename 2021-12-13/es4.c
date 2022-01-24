#include <stdio.h>

void conta(char nFile[], int *nCar, int *nPar, int *nRig) {
	FILE *f;
	char c,prec;
	*nCar=0;
	*nPar=0;
	*nRig=0;
	
	f = fopen(nFile, "r");
	
	if(f) {
		fscanf(f,"%c", &c);
		
		while(!feof(f)) {
			if(c==' '){
				*nPar = *nPar+1;
			}else if(c == '\n') {
				if(prec != '\n' && prec != ' ') {
					*nPar = *nPar+1;
				}
				*nRig=*nRig+1;
			}
			*nCar = *nCar+1;
			prec=c;
			fscanf(f,"%c", &c); 
		}
		fclose(f);
	}
}

int main() {
	int nC,nP,nR;
	
	conta("test.txt", &nC, &nP,&nR);
	
	printf("%d %d %d\n", nC, nP, nR);
	
	return 0;
}
