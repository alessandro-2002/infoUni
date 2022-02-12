#include <stdio.h>

#define LENNC 20
#define LENMAT 10
#define NSTUD 5
#define NFILE "orali.txt"
typedef struct {
	char matricola[LENMAT+1];
	char nome[LENNC+1];
	char cognome[LENNC+1];
	int puntiA;
	int puntiB;
} esame_t;

int main() {
	esame_t corso[NSTUD];
	FILE *f;
	int min,max,somma,i,voto;
	float media;

	f = fopen(NFILE, "w");

	if(f) {
		min=30;
		max = 0;
		somma=0;
		for(i=0; i<NSTUD; i++) {
			printf("Inserisci matricola\n");
			scanf("%s", corso[i].matricola);
			printf("Inserisci nome\n");
			scanf(" %[^\n]", corso[i].nome);
			printf("Inserisci cognome\n");
			scanf(" %[^\n]", corso[i].cognome);
			do {
				printf("Inserisci voto parte A\n");
				scanf("%d", &corso[i].puntiA);
			} while(corso[i].puntiA > 15);
			do {
				printf("Inserisci voto parte B\n");
				scanf("%d", &corso[i].puntiB);
			} while(corso[i].puntiA > 15);
			voto= corso[i].puntiA + corso[i].puntiB;
			somma+=voto;
			if(voto<min)
				min=voto;
			if(voto>max)
				max=voto;
			if(voto>=18) {
				if(corso[i].puntiA<=8)
					fprintf(f, "%s %s A\n", corso[i].nome, corso[i].cognome);
				if(corso[i].puntiB<=8)
					fprintf(f, "%s %s B\n", corso[i].nome, corso[i].cognome);
			}
		}
		media = (float)somma/NSTUD;
		printf("minimo: %d\n", min);
		printf("massimo: %d\n", max);
		printf("media: %f\n", media);
		fclose(f);
	}else{
		printf("Errore apertura file");
	}
	return 0;

}
