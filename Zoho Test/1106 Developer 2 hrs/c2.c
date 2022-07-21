#include <stdio.h>

int fun1(int count)
{
    return (count + 20);
}

int fun2(int m)
{
    int i = 0, count = m;
    for (i = 0; i <= m + 3; i++)
    {
        count = count + 3;
    }
    return count;
}

int fun3(int m)
{
    int i = 0, j = 0, count = m;
    for (i = 1; i <= 3; i++)
    {

        count = count / 2;
    }
    return count + m;
}

int main()
{
    int m = 9;
    m = fun1(m);
    m = fun2(m);
    m = fun3(m);
    printf("%d", m);
}
