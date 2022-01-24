#include <stdio.h>

int isDivisore(int n, int div) {
	if(n%div == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	FILE *f1;
	
	int num, cifra, temp, counter;
	f1 = fopen("input.txt", "r");
	
	if(f1) {
		fscanf(f1, "%d", &num);
		while(!feof(f1)) {
			temp=num;
			counter=0;
			while(temp!=0) {
				cifra = temp%10;
				temp /=10;
				counter+=isDivisore(num,cifra);
			}
			printf("%d\n",counter);
			fscanf(f1, "%d", &num);
		}
		fclose(f1);
	}else{
		printf("err\n");
	}
	return 0;
}
