#include <stdio.h>

int main()
{
    int i, j, count = 30;
    for (i = 1; i <= 10; i = i + 1)
    {
        for (j = i; j <= 10; j = j + 1)
        {
            if (j % 3 == 0)
                count = count + 1;
        }
    }
    printf("%d\n", count);
    return 0;
}
