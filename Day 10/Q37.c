#include <stdio.h>

int main(void) {
    int rows = 5;
    for (int i = 1; i <= rows; ++i) {
        for (int j=1; j<= rows -i; ++j) putchar(' ');
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; ++j) putchar('*');
        if (i < rows) putchar('\n');
    }
    return 0;
}
