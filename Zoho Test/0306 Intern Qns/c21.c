#include <stdio.h>
int main()
{
    int x = 64, y = 302, i = 0;
    do
    {
        if (x % 2 == 0)
        {
            y = y / 2;
        }
        if (y % 2 < 1)
        {
            x = x / 2;
        }
        i++;
    } while (x > 1);
    printf("%d ", i);
}
