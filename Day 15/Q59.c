// C program that rotates an array to the right by k positions
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, k;
	if (scanf("%d %d", &n, &k) != 2) return 0;
	if (n <= 0) return 0;
	int *a = malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	k = ((k % n) + n) % n; // handle negative or large k
	if (k != 0) {
		int *b = malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i) b[(i + k) % n] = a[i];
		for (int i = 0; i < n; ++i) a[i] = b[i];
		free(b);
	}
	for (int i = 0; i < n; ++i) {
		if (i) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
	free(a);
	return 0;
}

