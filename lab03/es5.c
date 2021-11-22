/* Laboratorio 3 */
/* 18/11/2021 */
/* es 3.5 */

#include <stdio.h>
#include <string.h>

#define MAXS 3
#define MAXE 3
#define LEN 10

typedef struct{
	char nome[LEN+1];
	int voto;
} Exam;

typedef struct {
	char codPersona[LEN+1];
	Exam esami[MAXE];
} Student;

void inputStudenti(Student arr[]);
void stampaStudente(Student s);
void stampaStudenteDaCodPersona(Student arr[], char codPers[]);
float calcolaMedia(Exam arr[]);
void stampaStudenteConMaxMedia(Student arr[]);

int main() {
	Student studenti[MAXS];
	char codPers[LEN+1];
	
	inputStudenti(studenti);
	
	printf("Inserisci il codice persona dello studente da visualizzare\n");
	scanf("%s", codPers);
	
	stampaStudenteDaCodPersona(studenti, codPers);
	
	stampaStudenteConMaxMedia(studenti);
	
	return 0;
}

void inputStudenti(Student arr[]) {
	int i, j;
	
	for(i = 0; i < MAXS; i++) {
		printf("Inserire il codice persona dello studente\n");
		scanf("%s", arr[i].codPersona);
		
		for(j = 0; j < MAXE; j++) {
			printf("Inserire il nome e il voto dell'esame\n");
			scanf("%s %d", arr[i].esami[j].nome, &arr[i].esami[j].voto);
		}
		
		printf("\n");
	}
}

void stampaStudente(Student s) {
	int i;
	
	printf("Codice persona: %s\n", s.codPersona);
	
	for(i = 0; i < MAXE; i++) {
		printf("Esame di %s voto %d\n", s.esami[i].nome, s.esami[i].voto);
	}
}

void stampaStudenteDaCodPersona(Student arr[], char codPers[]) {
	int i, trovato;
	
	/* cerco studente */
	trovato = 0;
	for(i = 0; i < MAXS && !trovato; i++) {
		if(strcmp(arr[i].codPersona, codPers) == 0) {
			trovato = 1;
			stampaStudente(arr[i]);
		}
	}
	
	/* se non trovato */
	if(!trovato) {
		printf("Nessuno studente trovato con questo codice persona.");
	}
	
	printf("\n\n");
}

float calcolaMedia(Exam arr[]) {
	float somma;
	int i;
	
	somma = 0;
	
	for(i = 0; i < MAXE; i++) {
		somma += arr[i].voto;
	}	
	
	return somma / MAXE;
}

void stampaStudenteConMaxMedia(Student arr[]) {
	int i, max;
	float maxMedia, temp;
	
	max = 0;
	maxMedia = calcolaMedia(arr[0].esami);
	
	for(i = 1; i < MAXS; i++) {
		temp = calcolaMedia(arr[i].esami);
		
		if(temp > maxMedia) {
			maxMedia = temp;
			max = i;
		}
	}
	
	printf("Studente con la media maggiore:\n");
	stampaStudente(arr[max]);
}



