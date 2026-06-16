#include <stdio.h>
int main() {
    int n, i, smallest, largest;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    largest = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
    
    return 0;
}
