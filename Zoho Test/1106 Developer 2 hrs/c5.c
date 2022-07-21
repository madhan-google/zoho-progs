#include <stdio.h>

void main()
{
    int a, b, x = 6, y = 4, t, one;
    a = x;
    b = y;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    one = a;
    printf("%d", one);
}
