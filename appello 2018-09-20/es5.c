#include <stdio.h>
#define NFILE "risultati.txt"

int main() {
	int num,m,ris,resto;
	FILE *f;
	
	f=fopen(NFILE,"w");
	if(f) {
		printf("Inserisci m\n");
		scanf("%d",&m);
		
		printf("Inserisci numeri, termina con un negativo\n");
		scanf("%d",&num);
		while(num>0){
			ris=num/m;
			resto=num%m;
			fprintf(f,"%d %d %d\n",num,ris,resto);
			scanf("%d",&num);
		}
		fclose(f);
	}else{
		printf("Errore apertura file");
	}
	return 0;
}
