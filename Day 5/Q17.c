#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)
        return 0;

    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0)
            sum += i;
    }

    if (n > 0 && sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}
