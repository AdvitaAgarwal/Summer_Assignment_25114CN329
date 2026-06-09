#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n % 2 == 0)
        return n == 2;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)
        return 1;

    if (is_prime(n))
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}
