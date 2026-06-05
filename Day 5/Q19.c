#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        printf("Every integer is a factor of 0.\n");
        return 0;
    }

    printf("Factors of %d are:\n", n);
    for (i = 1; i <= (n > 0 ? n : -n); i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
