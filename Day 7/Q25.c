#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) return 1ULL;
    return n * factorial(n - 1);
}

int main(void) {
    unsigned int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%u", &n) != 1) return 1;
    unsigned long long result = factorial(n);
    printf("Factorial of %u = %llu\n", n, result);
    return 0;
}
