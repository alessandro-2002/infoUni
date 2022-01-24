#include <stdio.h>

int string_to_int(char str[]) {
	int i, ris;
	ris = 0;
	
	i = 0;
	
	while(str[i] != '\0') {
		if(str[i] >= '0' && str[i] <= '9') {
			ris *= 10;
			ris += str[i] - '0';
			
			i++;
		} else {
			return -1;
		}
	}

	return ris;	
}

int main() {
	printf("%d\n", string_to_int("1292")+1);
	
	return 0;
}
