#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 17; i++)
    {
        printf("%d\n", i++);
        i = ++i;
    }
    return 0;
}
