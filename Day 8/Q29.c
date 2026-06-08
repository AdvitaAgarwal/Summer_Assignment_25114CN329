#include <stdio.h>

int main(void)
{
    int rows, i, j;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows < 1)
        return 0;

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
