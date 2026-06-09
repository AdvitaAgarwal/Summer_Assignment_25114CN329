#include <stdio.h>

int main(void)
{
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            putchar(' ');
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
