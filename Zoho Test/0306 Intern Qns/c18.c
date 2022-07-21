#include <stdio.h>
int func1(int a, int b)
{
    while (b < a + a)
    {
        b = b * b;
        b = b - 2;
        break;
    }
    return b;
}
int func2(int a, int b)
{
    if (b > a)
    {
        return func2(a, --b);
    }
    return func1(b, a);
}
int main()
{
    int x = 3, y = 7;
    int z = func2(y, x);
    printf("%d", 2);
    return 0;
}
