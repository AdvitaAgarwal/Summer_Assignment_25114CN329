#include <stdio.h>

int main(void)
{
    int n = 5;
    for (int row = 1; row <= n; row++) {
        for (int ch = 0; ch < row; ch++)
            putchar('A' + ch);
        for (int ch = row - 2; ch >= 0; ch--)
            putchar('A' + ch);
        if (row < n)
            putchar('\n');
    }
    return 0;
}
