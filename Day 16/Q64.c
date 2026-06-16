#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int unique[n];
    int unique_count = 0;

    for (int i = 0; i < n; i++) {
        int value = arr[i];
        int found = 0;
        for (int j = 0; j < unique_count; j++) {
            if (unique[j] == value) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[unique_count++] = value;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
