#include <stdio.h>

int main(void)
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            putchar(ch);
        }
        putchar('\n');
        ch++;
    }
    return 0;
}
