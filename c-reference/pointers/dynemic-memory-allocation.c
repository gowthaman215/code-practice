#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 4, i, *p=NULL, s = 0;

	p = (int*) calloc(n, sizeof(int));

	if(p == NULL) {
		printf("\nError! memory not allocated.");
		exit(0);
	}

	printf("\nEnter elements of array : ");

	for(i = 0; i < n; ++i) {
		scanf("%d", p + i);
		s += *(p + i);
	}

	printf("\nSum : %d", s);
        
        n=6;
	p = (int*) realloc(p, n);

	printf("\nEnter two more elements of array : ");

	for(; i < n; ++i) {
		scanf("%d", p + i);
		s += *(p + i);
	}

	printf("\nSum : %d", s);
	free(p);
	p=NULL;

	return 0;
}
