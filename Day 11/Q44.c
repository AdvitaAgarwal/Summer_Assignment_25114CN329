#include <stdio.h>

long long factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }

    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    long long fact = factorial(n);
    if (fact < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of %d is %lld\n", n, fact);
    }

    return 0;
}
