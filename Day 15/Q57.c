#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
