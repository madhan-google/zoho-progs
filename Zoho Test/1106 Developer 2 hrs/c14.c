#include <stdio.h>

int function(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int count = 0, a[5] = {21, 52, 33, 29, 47}, i;
    for (i = 0; i < 5; i = i + 1)
    {
        if (function(2))
            count = count + 2;
        if (a[i] % 2 == 0)
            count = count + 3;
        if (i%2 == 0)
            count = count - 1;
    }
    printf("%d", count);
    return 0;
}
