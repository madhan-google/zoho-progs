#include <stdio.h>
int mark(int x)
{
    if (x <= 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int x = 1001, t, a = 0;
    while (x > 0)
    {
        t = x % 10;
        a = a + mark(t);
        x = x / 10;
    }
    printf("%d", a);
}
