#include <stdio.h>

int isPrimo(int n){
	int i, primo;
	primo=1;
	for(i=n/2;i>1 && primo;i--) {
		if(n%i==0)
			primo = 0;
	}
	return primo;
}
int elimina(int a[], int nEl) {
	int i,j,nFinale;
	nFinale = nEl;
	
	for(i=0;i<nFinale;i++) {
		if(!isPrimo(a[i])) {
			for(j=i+1; j<nFinale;j++){
				a[j-1]=a[j];
			}
			nFinale--;
			i--;
		}
	}
	for(i=0;i<nFinale;i++)
		printf("%d ", a[i]);
		
	return nFinale;
}

int main() {
	int vet[] = {10,2,3,10,15,7,21,3,4,100};
	printf("tot %d\n", elimina(vet, 10));
	return 0;
	
}
