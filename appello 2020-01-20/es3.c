#include <stdio.h>
#include <stdlib.h>

char *nuovaStringa(char str[], int k, int lenStr) {
	int i;
	char *newStr;
	
	newStr = malloc((k+1) * sizeof(char));
	if(newStr) {
		for(i =0;i<k;i++){
			if(i>lenStr) {
				newStr[i] =str[lenStr-1];
			}else{
				newStr[i] =str[i];
			}
		}
		newStr[k]='\0';
		return newStr;
	}else{
		printf("Errore allocazione\n");
		return NULL;
	}	
}

int main() {
	char str[] = "0123456789ABCDEF";
	printf("%s\n", nuovaStringa(str, 20, 16));
	
	return 0;
}
