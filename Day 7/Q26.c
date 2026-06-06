#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n;

    printf("Enter the term number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}
