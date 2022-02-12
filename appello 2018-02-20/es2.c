#include <stdio.h>
#include <string.h>

int compare(char str[],char ch) {
	int trovato, i;
	trovato = 0;
	for(i=0; i<strlen(str) && !trovato; i++) {
		if(str[i] == ch)
			trovato = 1;
	}
	return trovato;
}

int pangramma(char s[]) {
	int isPangramma, i;
	isPangramma = 1;
	for(i=0; i < 26 && isPangramma; i++){
		if(compare(s, 'a'+1) == 0){
			isPangramma = 0;
		}  
	}
	
	return isPangramma;
 }
 
 int main() {
 	printf("%d\n", pangramma("pack my box with five dozen liquor jugs."));
 	printf("%d\n", pangramma("\"the five boxing wizards jump quickly."));
 	printf("%d\n", pangramma("attenzione"));
 	return 0;
 }
