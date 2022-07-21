#include <stdio.h>

void main()
{
    int a[4] = {21, 9, 11, 20}, n = 4, result = 0, i ;
    for (i = 0; i < n; i = i + 1)
    {
        while (a[i] >= n)
        {
            a[i] = a[i] - n;
            result = result + 1;
        }
        if (a[i] > 0)
        {
            result = result - 1;
        }
    }
    printf("%d", result);
}
