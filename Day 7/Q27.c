#include <stdio.h>
// Recursive function to compute sum of digits of n
int sumDigits(int n) {
    if (n < 0) n = -n;
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main(void) {
    long n;
    if (printf("Enter an integer: "), fflush(stdout), scanf("%ld", &n) != 1) return 1;
    printf("Sum of digits = %d\n", sumDigits((int)n));
    return 0;
}
