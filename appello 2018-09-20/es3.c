#include <stdio.h>

void maxmin7(int v[],int dimV, int *max, int *min){
	int i,j,somma;
	for(i=0;i<=dimV-7;i++){
		somma=0;
		for(j=0;j<7;j++){
			somma+=v[i+j];
		}
		if(i==0){
			*max=somma;
			*min=somma;
		}else{
			if(somma>*max)
				*max=somma;
			if(somma<*min)
				*min=somma;
		}
	}
}

int main() {
	int vet[] = {1, 2, -4, 1, 3, -5, 2, 10, -1, 50};
	int max, min;
	
	maxmin7(vet, 10, &max, &min);
	printf("%d %d\n",max,min);
	
	return 0;
}
