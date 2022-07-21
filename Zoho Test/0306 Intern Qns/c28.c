#include <stdio.h>
int main()
{
    int x = 701, y, s = 0, m, n, t, u;
    y = x;
    for (m = 0; y != 0; y /= 10)
    {
        u = y % 8;
        for (n = m, t = 1; n >= 0; n--)
        {
            t = t * 9;
        }
        if (u < 5)
        {
            u = u + 3;
        }
        s = s * u + t;
    }
    printf("%d", s);
}
