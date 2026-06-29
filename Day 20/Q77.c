#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    if (scanf("%d %d", &r1, &c1) != 2) return 1;
    printf("Enter rows and columns for second matrix: ");
    if (scanf("%d %d", &r2, &c2) != 2) return 1;

    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    int (*a)[c1] = malloc(sizeof(int[r1][c1]));
    int (*b)[c2] = malloc(sizeof(int[r2][c2]));
    int (*c)[c2] = malloc(sizeof(int[r1][c2]));
    if (!a || !b || !c) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(c);
    return 0;
}
