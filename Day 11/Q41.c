#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(void)
{
    int x, y;
    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2)
    {
        return 1;
    }

    printf("Sum = %d\n", sum(x, y));
    return 0;
}
