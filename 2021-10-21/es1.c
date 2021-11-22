#include <stdio.h>

int primo(int);

int main() {
	
	int n, i;
	
	printf("inserisci un numero\n");
	scanf("%d", &n);
	
	while(n <= 2 || n%2 != 0) {
		printf("Inserisci un numero\n");
		scanf("%d", &n);
	}
	
	for(i = 2; i <= n/2; i++) {
		if(primo(i) && primo(n-i)) {
			printf("%d = %d + %d\n", n, i, n-1);
		}
	}
	
	return 0;
}

int primo(int num) {
	int i, ok;
	
	if(num >= 2) {
		ok = 1;
	
		for(i = 2; i*i <= num && ok; i++) {
			if(num % i == 0) {
				ok = 0;
			}
		}
	} else {
		ok = 0;
	}
	
	return ok;
}
