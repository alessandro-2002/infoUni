/* esercitazione Chiari */
/* Tutti maggiori */

#include <stdio.h>

#define DIM 5

int tutti_maggiori_it(int A[], int n, int m);
int tutti_maggiori_it1(int A[], int n, int m);
int tutti_maggiori_it2(int *A, int *A_end, int m);
int tutti_maggiori_ric(int A[], int n, int i, int m);
int tutti_maggiori_ric1(int A[], int n, int m);
int tutti_maggiori_ric2(int *A, int *A_end, int m);

int main() {
	int arr[DIM], i, m;
	int res;
	
	i = 0;
	do {
		printf("Inserire numero %d:\t", i);
		scanf("%d", &arr[i]);
		i++;
	} while(i < DIM);
	
	printf("Inserire valore m:\t");
	scanf("%d", &m);
	
	/* res = tutti_maggiori_ric(arr, DIM, 0, m); */
	
	res = tutti_maggiori_it2(arr, arr+DIM, m);
	
	if(res) {
		printf("Sono tutti maggiori\n");
	} else {
		printf("Non sono tutti maggiori\n");
	}
	
	return 0;
}

/* esempio con iterazione */
int tutti_maggiori_it(int A[], int n, int m) {
	int i, maggiori;
	maggiori = 1;
	
	for(i = 0; i < n && maggiori; i++) {
		if(A[i] <= m) {
			maggiori = 0;
		}
	}
	
	return maggiori;
}

int tutti_maggiori_it1(int A[], int n, int m) {
	int maggiori;
	maggiori = 1;
	
	while(n > 0 && maggiori) {
		if(A[n-1] <= m) {
			maggiori = 0;
		}
		n--;
	}
	
	return maggiori;
}

int tutti_maggiori_it2(int *A, int *A_end, int m) {
	int maggiori;
	maggiori = 1;
	
	while(A != A_end && maggiori) {
		if(*A <= m) {
			maggiori = 0;
		} 
		A++;
	}
	
	return maggiori;
}

/* esempio con ricorsione */
int tutti_maggiori_ric(int A[], int n, int i, int m) {
	if(i == n) {
		/* se in fondo all'array */
		return 1;
	} else if(A[i] <= m) {
		/* se minore */
		return 0;
	} else {
		/* oppure controllo gli altri */
		return tutti_maggiori_ric(A, n, i+1, m);
	}

}

int tutti_maggiori_ric1(int A[], int n, int m) {
	if(n <= 0) {
		return 1;
	} else if(A[n-1] <= m) {
		return 0;
	} else {
		return tutti_maggiori_ric1(A, n-1, m);
	}

}

int tutti_maggiori_ric2(int *A, int *A_end, int m) {
	if(A == A_end) {
		return 1;
	} else if(*A <= m) {
		return 0;
	} else {
		return tutti_maggiori_ric2(A+1, A_end, m);
	}

}



