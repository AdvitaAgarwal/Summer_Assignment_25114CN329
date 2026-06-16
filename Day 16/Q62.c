#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int maxFreq = 0;
    int maxElem = a[0];

    for (int i = 0; i < n; i++) {
        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i])
                freq++;
        }
        if (freq > maxFreq || (freq == maxFreq && a[i] < maxElem)) {
            maxFreq = freq;
            maxElem = a[i];
        }
    }

    printf("%d", maxElem);
    return 0;
}
