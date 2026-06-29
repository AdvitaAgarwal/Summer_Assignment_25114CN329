#include <stdio.h>

int main(void)
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    int matrix[100][100];
    int colSum[100] = {0};

    printf("Enter matrix elements row by row:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
            colSum[j] += matrix[i][j];
        }
    }

    printf("Column-wise sums:\n");
    for (int j = 0; j < cols; ++j) {
        printf("%d", colSum[j]);
        if (j < cols - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
