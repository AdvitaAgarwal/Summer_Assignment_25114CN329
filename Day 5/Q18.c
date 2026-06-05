#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    int number, original, digit, sum = 0;

    if (scanf("%d", &number) != 1) {
        return 0;
    }

    original = number;
    while (number > 0) {
        digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    if (sum == original) {
        printf("%d is a strong number\n", original);
    } else {
        printf("%d is not a strong number\n", original);
    }

    return 0;
}
