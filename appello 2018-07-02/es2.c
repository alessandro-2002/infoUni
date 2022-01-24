#include <stdio.h>
#include <stdlib.h>

char *replace(char str[], char sost[], char ch, int lenStr, int lenSost) {
	int i,j,k,nCh,lenRis;
	char *ris;
	nCh=0;
	for(i=0;i<lenStr;i++) {
		if(str[i]==ch)
			nCh++;
	}
	lenRis=lenStr-nCh+nCh*lenSost;
	ris=malloc(sizeof(char)*(lenRis+1));
	
	if(ris) {
		j=0;
		for(i=0;i<lenStr;i++) {
			if(str[i] == ch) {
				for(k=0; k<lenSost; k++) {
					ris[j] = sost[k];
					j++;
				}
			}else{
				ris[j]=str[i];
				j++;
			}
		}
	}else{
		printf("Errore allocazione");
	}
	return ris;
}

int main(){
	char *s1, *s2;
	s1 = replace("CULLA", "ARTE", 'U', 5, 4);
	s2 = replace("PIPE", "CAR", 'P', 4, 3);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return 0;
}
