#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(void) {
    int num1, num2;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    int result = sum(num1, num2);
    printf("Sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}
