#include <stdio.h>

int reverseNumber(int num) {
    static int reversed = 0;
    static int divisor = 1;
    
    if (num == 0) {
        int temp = reversed;
        reversed = 0;
        divisor = 1;
        return temp;
    }
    
    int remainder = num % 10;
    reversed = reversed * 10 + remainder;
    return reverseNumber(num / 10);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = reverseNumber(num);
    printf("Reversed number: %d\n", result);
    
    return 0;
}
