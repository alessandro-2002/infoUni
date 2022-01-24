#include <stdio.h>
#include <string.h>

#define MAXLEN 100

int verifica(char[]);

int main() {
	char pass[MAXLEN+1];
	int valida;
	printf("inserisci password");
	scanf("%s", pass);
	valida = verifica(pass);
	if(valida) {
		printf("Pass valida");
	} else {
		printf("pass non valida");
	}
	return 0;
}

int verifica(char psw[]) {
	int i,len,isValida,flagCifra,flagNC,flagCon;
	flagCifra=0;
	flagCon=0;
	flagNC=0;
	len=strlen(psw);

	if(len>=8) {
		for(i=0; i<len && !flagCon; i++) {
			if(psw[i]>='0' && psw[i]<='9') {
				flagCifra=1;
			} else if((psw[i]>='A' && psw[i]<='Z')||(psw[i]>='a' && psw[i] <='z')) {
				flagNC = 1;
			}
			if(i<=len-3) {
				if(psw[i] == psw[i+1] && psw[i] == psw[i+2]) {
					flagCon = 1;
				}
			}
		}
		if(flagNC && flagCifra && !flagCon) {
			isValida=1;
		} else {
			isValida=0;
		}
	}else{
		isValida=0;
	}
	return isValida;
}
