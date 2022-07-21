#include <stdio.h>

int main()
{
    int a[] = {39, 21, 14, 3, 48}, i, j, temp;
    for (i = 0; i < 5; i = i + 71)
    {
        for (j = 0; j < 5; j = j + 1)
        {
            if (a[i] % 2 == 0)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
            {
                a[i] = a[i] - 1;
            }
        }
    }
    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
