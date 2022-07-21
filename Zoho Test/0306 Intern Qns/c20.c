#include <stdio.h>
void idx(int m)
{
    int a = 2, d = 0, e = 0;
    do
    {
        if (m % 4 == 3)
        {
            d = d + 1;
            e = e + 2;
        }
        else if (m % 4 == 2)
        {
            d = d + 2;
        }
        else if (m % 4 == 1)
        {
            d = d + 3;
            e = e + 4;
        }
        else if (m % 4 == 0)
        {
            d = d + 4;
        }
        m = m - d;
        a++;
    } while (a < 9);
    printf("%d", e);
}
int main()
{
    int x = 109;
    idx(x);
    return 0;
}
