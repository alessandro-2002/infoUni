#include <string.h>
#include <stdio.h>

#define MAXLEN 15

int main(){
	FILE *f;
	char parola[MAXLEN+1], prec[MAXLEN+1];
	
	f=fopen("testo.txt", "r");
	if(f){
		prec[0]='\0';
		fscanf(f, "%s", parola);
		while(!feof(f)){
			if(strlen(parola)>4) {
				if(strcmp(prec,parola) ==0){
					printf("%s ", parola);
				}
			}
			strcpy(prec,parola);
			fscanf(f, "%s", parola);
		}
		fclose(f);
	}else{
		printf("Errore aprttura file");
	}
	return 0;
}
