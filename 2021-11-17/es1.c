/* esercitazione Crovari */
/* MCD ricorsivo */

#include <stdio.h>

int mcd(int a, int b);
int mcd_ric(int a, int b, int ris);
int mcd2(int a, int b);

int main(){
	int a, b;
	printf("Inserire due numeri\n");
	scanf("%d%d", &a, &b);
	
	printf("MCD di %d e %d è %d\n", a,b, mcd2(a, b));
	
	return 0;
}

int mcd(int a, int b){
	if(a > b) {
		return mcd_ric(a, b, b);
	} else {
		return mcd_ric(a, b, a);
	}
	
}

int mcd_ric(int a, int b, int ris){
	if(a % ris == 0 && b % ris == 0) {
		return ris;
	} else {
		return mcd_ric(a, b, ris-1);
	}
	
}

/* algoritmo di Euclide */
int mcd2(int a, int b) {
	if(b == 0) {
		return a;
	} else {
		return mcd2(b, a%b);
	}
}
