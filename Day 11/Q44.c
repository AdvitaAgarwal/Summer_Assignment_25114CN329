#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n < 0)
        return 0;

    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;

    return result;
}

int main(void)
{
    int number;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    unsigned long long fact = factorial(number);
    printf("Factorial of %d is %llu\n", number, fact);
    return 0;
}
