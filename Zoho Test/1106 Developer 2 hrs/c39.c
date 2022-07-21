#include <stdio.h>

int main()

{
    int i, n = 8, a = 1, b = 2;
    for (i = 1; i <= n; i++)

    {
        if (i % 2 == 0)
        {
            a = a + i;
        }
        else
        {
            b = b + i;
        }
    }
    printf("%d %d", a, b);
}
