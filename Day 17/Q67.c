#include <stdio.h>

int main(void) {
    int n, m;
    printf("Enter the size of first array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int a[n];
    printf("Enter %d elements of first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    if (scanf("%d", &m) != 1 || m <= 0) return 0;

    int b[m];
    printf("Enter %d elements of second array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    printf("Intersection of arrays:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                int already_printed = 0;
                for (int k = 0; k < i; k++) {
                    if (a[k] == a[i]) {
                        already_printed = 1;
                        break;
                    }
                }
                if (!already_printed) {
                    printf("%d ", a[i]);
                    found = 1;
                }
                break;
            }
        }
    }

    if (!found) {
        printf("No common elements");
    }
    printf("\n");
    return 0;
}
