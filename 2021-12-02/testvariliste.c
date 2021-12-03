/* test vari liste */

#include <stdio.h>
#include <stdlib.h>
#include "../liste.h"

int main() {
	Ptr_nodo head;
	int temp;
	
	head = NULL;
	
	printf("Inserisci elementi nella lista, quando hai terminato digita 0\n");
	
	scanf("%d", &temp);
	while(temp != 0) {
		scanf("%d", &temp);
		head = inserisci_in_testa(head, temp);
	}
	
	printf("La lista ha %d elementi\n", lunghezza(head));
	
	head = distruggi_lista(head);
	
	return 0;
}
