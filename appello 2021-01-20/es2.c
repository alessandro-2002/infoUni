#include <stdio.h>
#define LEN 20

void aree(char[], int*, float*);

int main(){
	char nFile[LEN+1];
	int nRiga;
	float maxArea;
	printf("Ins nome file\n");
	scanf("%s",nFile);
	
	aree(nFile,&nRiga,&maxArea);
	printf("%d %f\n", nRiga,maxArea);
	return 0;
}

void aree(char nFile[],int *rigaM, float *areaM){
	float n1,n2,n3, area;
	int i;
	FILE *f;
	f=fopen(nFile,"r");
	if(f){
		i=0;
		*rigaM=0;
		*areaM=0;
		fscanf(f,"%f%f", &n1, &n2);
		while(!feof(f)){
			i++;
			if(i%2==0){
				area=((n1+n2)*n2)/2;
				fscanf(f,"%f%f",&n1,&n2);
			}else{
				area=(n1*n2)/2;
				fscanf(f,"%f%f%f", &n1,&n2,&n3);
			}
			
			if(area>*areaM){
				*areaM = area;
				*rigaM=i;
			}
		}
		fclose(f);
	}else{
		*rigaM=-1;
		*areaM=-1;
	}
}
