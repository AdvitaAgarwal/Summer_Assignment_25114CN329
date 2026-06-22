#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1, n2;
    if (printf("Enter size of first array: "), scanf("%d", &n1)!=1) return 0;
    if (n1 < 0) n1 = 0;
    int *a = malloc(n1 * sizeof(int));
    for (int i = 0; i < n1; ++i) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    if (printf("Enter size of second array: "), scanf("%d", &n2)!=1) { free(a); return 0; }
    if (n2 < 0) n2 = 0;
    int *b = malloc(n2 * sizeof(int));
    for (int i = 0; i < n2; ++i) {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    int n3 = n1 + n2;
    int *c = malloc(n3 * sizeof(int));
    for (int i = 0; i < n1; ++i) c[i] = a[i];
    for (int i = 0; i < n2; ++i) c[n1 + i] = b[i];

    printf("Merged array (%d elements):", n3);
    for (int i = 0; i < n3; ++i) printf(" %d", c[i]);
    printf("\n");

    free(a); free(b); free(c);
    return 0;
}
