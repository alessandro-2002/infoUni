#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIMSTR 15
#define DIMCONTROLLO 26
#define NFILE "testo.txt"

int main() {
	FILE *f1;
	int i,j,*counter;
	char parola[DIMSTR+1],controllo[DIMCONTROLLO+1];
	
	f1=fopen(NFILE,"r");
	if(!f1) {
		printf("Errore apertura file\n");
	}else{
		printf("Inserisci stringa di controllo ");
		scanf("%s", controllo);
		
		counter=malloc(strlen(controllo)*sizeof(int));
		
		for(i=0;i<strlen(controllo);i++){
			counter[i]=0;
		}
		fscanf(f1,"%s",parola);
		while(!feof(f1)) {
			for(i=0;i<strlen(controllo);i++){
				for(j=0;j<strlen(parola);j++) {
					if(controllo[i]==parola[j]){
						counter[i]++;
					}
				}
			}		
			fscanf(f1,"%s", parola);
		}
		for(i=0;i<strlen(controllo);i++){
			printf("%c:%d\n",controllo[i],counter[i]);
		}
		free(counter);
	}
	return 0;
}
