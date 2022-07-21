#include <stdio.h>

int t = 8;
f(int a)
{
    a += -5;
    t -= 4;
    return (a + t);
}
g(int a)
{
    a = 1;
    t = a;
    return (a + t);
}
int main()
{
    int i, j, m = 11;
    m *= 3;
    j = f(m);
    i = g(m);
    printf("%d %d", j, i);
    return 0;
}
