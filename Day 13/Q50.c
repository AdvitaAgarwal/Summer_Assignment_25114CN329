#include <stdio.h>

int main(void) {
    int n;
    if (printf("Enter number of elements: ") && scanf("%d", &n) != 1) return 0;
    if (n <= 0) {
        printf("No elements to process.\n");
        return 0;
    }
    double sum = 0.0;
    double val;
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        if (scanf("%lf", &val) != 1) {
            printf("Invalid input.\n");
            return 0;
        }
        sum += val;
    }
    double avg = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
