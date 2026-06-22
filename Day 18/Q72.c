#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int arr[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
