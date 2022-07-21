#include <stdio.h>
void main()
{
    int i = 10, j = 12, k = 20, l = 10;
    for (int m = 0; m <= 10; m++)
    {
        l = ++i + ++j - k--;
    }
    printf("%d %d %d %d", l, k, j, i);
}
