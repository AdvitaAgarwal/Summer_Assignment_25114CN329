#include <stdio.h>

int findMaximum(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int x, y, z;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    int maximum = findMaximum(x, y, z);
    printf("Maximum value is: %d\n", maximum);
    return 0;
}
