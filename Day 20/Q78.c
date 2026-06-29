#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
        return 0;

    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("Symmetric matrix");
    else
        printf("Not symmetric matrix");

    return 0;
}
