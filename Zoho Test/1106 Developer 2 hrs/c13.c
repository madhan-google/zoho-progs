#include <stdio.h>

int func1(int x)
{
    int y = x / 4;
    y += y;
    return y;
}
int func2(int x)
{
    int y = x / 2 + x / 2;
    y = y * y;
    return y;
}
void main()
{
    int a[3] = {11, 7, 15}, result, i;
    for (i = 0; i < 3; i = i + 1)
    {
        result = a[i] + a[i];
        result = func2(result);
        if (result >= 100)
            result = func1(result);
        result = result - i;
    }
    printf("%d\n", result);
}