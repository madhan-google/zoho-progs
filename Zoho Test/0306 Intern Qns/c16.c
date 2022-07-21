#include <stdio.h>
int main()
{
    int x = 10, i = 0, tot = 10;
    for (; i <= x;)
    {
        if (x - i < 6)
        {
            tot = x + i;
        }
        else
        {
            tot = i * i;
        }
        i++;
    }
    printf("%d", tot);
}
