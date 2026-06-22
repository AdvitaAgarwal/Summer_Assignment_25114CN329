#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int arr[n];
    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int target;
    printf("Enter target value: ");
    if (scanf("%d", &target) != 1)
        return 0;

    int result = binary_search(arr, n, target);
    if (result >= 0)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
