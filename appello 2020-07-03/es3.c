#include <stdio.h>

int isPrimo(int);
int main(){
	FILE *f;
	int num,max,counter;
	max=0;
	counter=0;
	f=fopen("input.txt","r");
	
	if(f){
		fscanf(f,"%d",&num);
		while(!feof(f)){
			if(isPrimo(num)){
				counter++;
			}else{
				if(counter>max)
					max = counter;
				counter=0;
			}
			fscanf(f,"%d",&num);
		}
		if(counter>max){
			max=counter;
		}
		printf("%d\n",max);
		fclose(f);
	}else{
		printf("Errore apertura file");
	}
	return 0;
}

int isPrimo(int n){
	int i, primo;
	primo=1;
	for(i=n/2;i>1&&primo;i--){
		if(n%i==0){
			primo=0;
		}
	}
	return primo;
}
