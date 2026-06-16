#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10];
    int n, target;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    int result = linearSearch(arr, n, target);
    
    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }
    
    return 0;
}
