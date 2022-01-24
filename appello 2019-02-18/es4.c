#include <stdio.h>

#define DIM 10

void calcola(int vet[],int,int,int*,float*);

int main(){
	int vett[DIM],lVet,i, ris,t;
	
	float media;
	
	printf("Quanti num?\n");
	scanf("%d",&lVet);
	printf("Ins t\n");
	scanf("%d",&t);
	
	for(i=0;i<lVet;i++){
		scanf("%d",&vett[i]);
	}
	calcola(vett, t,lVet,&ris,&media);
	
	printf("Media: %f\nNmin:%d\n",media,ris);
	
	return 0;
}

void calcola(int vet[],int t,int nEl, int *nMin, float *media){
	int i,somma,prod,j;;
	somma=0;
	for(i=0;i<nEl;i++){
		somma+=vet[i];
	}
	
	*media=(float)somma/nEl;
	*nMin=0;
	for(i=0;i<=nEl-t;i++){
		prod=vet[i];
		for(j=i+1;j<i+t;j++){
			prod*=vet[j];
		}
		if(prod< *media){
			*nMin=*nMin+1;
		}
	}
}
