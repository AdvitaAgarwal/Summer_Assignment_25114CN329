#include <stdio.h>

int main(void)
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            putchar('*');
        }
        if (i > 1)
            putchar('\n');
    }
    return 0;
}
