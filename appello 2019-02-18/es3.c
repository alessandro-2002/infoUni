#include <stdio.h>

/*char* vocaboloPiuLungo(char frase[]) {
	int i,maxL,counter;
	char *ris;
	maxL=0;
	counter=0;
	for(i=0;frase[i]!='\0';i++) {
		if(frase[i]==' ') {
			if(counter>maxL) {
				maxL=counter;
				ris=&frase[i-counter];
			}
			counter=0;
			
		}else{
			counter++;
		}
		
	}
	return ris;
}*/

char* analizza(char str[]) {
	int maxlen,i,n,ptr;
	
	i=0;n=0;maxlen=0;ptr=0;
	
	while(str[i]!='\0') {
		if(str[i]!= ' ') {
			n++;
		}else{
			if(n>maxlen){
				maxlen=n;
				ptr=i-n;
			}
			n=0;
		}
		i++;
	}
	return str+ptr;
}

int main(){
	char *a;
	
	a = analizza("Frase creata per verificare il sottoprogramma da sviluppare");
	printf("\n%c\n", *a);
	return 0;
	
}
