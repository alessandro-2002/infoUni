#include <string.h>
#include<stdio.h>
#include<math.h>

int conversione(char str[]) {
	int i,ris,valido;
	
	i=0;
	ris=0;
	valido=1;
	
	while(str[i]!='\0' && valido) {	
		if(str[i]<'0' || str[i]>'7') {
			valido=0;
			ris=-1;
		}else{
			ris+=(str[i]-'0')*pow(8,strlen(str)-i-1);
			i++;
		}
	}
	
	return ris;
}

int main() {
	printf("%d", conversione("95"));
	return 0;
	
}
