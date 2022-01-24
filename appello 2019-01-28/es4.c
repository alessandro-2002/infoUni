#include <stdio.h>

int cifraMaggiore(FILE *f) {
	int num, ris, counter[10], i;

	for(i=0; i<10; i++) {
		counter[i]=0;
	}

	/* lettura numero */

	fscanf(f, "%d", &num);

	/* analisi cifre numero */
	if(num == EOF) {
		ris=-1;
	} else {
		printf("%d\n",num);
		if(num<0) {
			num *= -1;
		}

		do {
			counter[num%10]++;
			num /=10;
		} while(num>0);

		/* trovo valore massimo */
		ris=0;

		for(i=1; i<10; i++) {
			if(counter[i] >= counter[ris]){
				ris=i;
			}
		}
	}

	return ris;
}

int main() {
	FILE *f1;
	int n;

	f1 = fopen("es4.txt", "r");
	n=cifraMaggiore(f1);
	printf("%d\n", n);
	fclose(f1);
	return 0;
}
