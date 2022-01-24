#include <stdio.h>
typedef struct{
	int x;
	int y;
}Punto_t;

int regolare(Punto_t mat[][N]){
	int i,j,regolare;
	float diag,lriga,lcol;
	regolare=1;
	diag=0;
	for(i=0;i<N-1;i++){
		diag+=dist(mat[i][i],mat[i+1][i+1]);
	}
	for(i=0;i<N&&regolare;i++){
		lriga=0;
		lcol=0;
		for(j=0;j<N-1;j++){
			lriga+=dist(mat[i][j], mat[i][j+1]);
			lcol+=dist(mat[j][i], mat[j+1][i]);
		}
		if(lriga>diag || lcol>diag){
			regolare=0;
		}
	}
	return regolare;
}
