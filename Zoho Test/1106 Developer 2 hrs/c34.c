#include <stdio.h>

void main()
{
    // int a[5] = {0, 2, 3, 4, 5}, i = 0, n = 5, k = 10;
    int a[5] = {10, 2, 13, 4, 11}, i = 0, n = 5, k = 10;
    while (i < n)
    {
        printf("%d ", a[i]);
        i = i + 2;
        if (i % k == 0)
        {
            i = (i / 2) - 2;
        }
    }
}
