#include <stdio.h>

int main()
{
    int a[] = {8, 9, 10, 12, 11, 143, 16, 100}, i, j, t, n = 8;
    for (i = 1; i < n - 1; i++)
    {
        if (a[i] % 2 == 0)
        {
            t = a[i + 1];
            a[i + 1] = a[i - 1];
            a[i - 1] = t;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
