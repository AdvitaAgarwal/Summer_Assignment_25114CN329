#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n;
    if (scanf("%lld", &n) != 1 || n <= 1) {
        printf("Enter an integer greater than 1\n");
        return 1;
    }

    long long largest = 0;
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 2) {
        largest = n;
    }

    printf("%lld\n", largest);
    return 0;
}
