#include <stdio.h>
void main()
{
    int count = 0, i = 0, j = 0, k = 0;
    for (i = 1; i <= 15; i = i + 1)
    {
        for (j = 1; j <= 10; j = j + 1)
        {
            count = count + 1;
            if (j == 3)
                continue;
            if (j == 4)
                break;
            for (k = 1; k > j; k = k + 1)
                count = count - 1;
        }
    }
    printf("%d", count);
}
