#include <stdio.h>

int main(void)
{
    double x;
    int n;
    double result = 1.0;
    int i;

    printf("Enter base and exponent: ");
    if (scanf("%lf %d", &x, &n) != 2)
        return 1;

    if (n >= 0) {
        for (i = 0; i < n; i++)
            result *= x;
    } else {
        for (i = 0; i < -n; i++)
            result *= x;
        if (x == 0.0) {
            printf("Undefined (division by zero)\n");
            return 1;
        }
        result = 1.0 / result;
    }

    printf("%g\n", result);
    return 0;
}
