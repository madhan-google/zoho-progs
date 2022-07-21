#include <stdio.h>
int execute(int a4, int a5)
{
    if (a4 == 0)
    {
        return 1;
    }
    if (a4 % 2 == 0)
    {
        execute(a4 / 2, a5 / 2);
    }
    return execute(a4 - 1, a5 + 1);
}
int main()
{
    int a1 = 15, a2 = 7, a3 = 10;
    a3 = execute(a1 + a2, a1 + a3 - a2);
    printf("%d", a3);
    return 0;
}
