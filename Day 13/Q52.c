#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0, num;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);
    
    return 0;
}
