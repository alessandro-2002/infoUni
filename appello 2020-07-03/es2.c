#include<stdio.h>
#include <math.h>

void narcisistico_4(int a[],int b[], int nEl){
	int somma,num,i,cifra;
	for(i=0;i<nEl;i++) {
		num=a[i];
		somma=0;
		while(num!=0){
			cifra=num%10;
			num/=10;
			somma+=pow(cifra,4);
		}
		if(somma==a[i]){
			b[i]=1;
		}else{
			b[i]=0;
		}
	}
}

int main(){
	int a[5]={0, 25, 1634, 55, 33};
	int b[5];
	int i;
	narcisistico_4(a,b,5);
	
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	return 0;
}
