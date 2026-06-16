#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements are: ");
    int found = 0;
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }
    
    if (!found) {
        printf("No duplicates found");
    }
    
    printf("\n");
    return 0;
}