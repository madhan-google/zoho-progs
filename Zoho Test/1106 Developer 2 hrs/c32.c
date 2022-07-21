#include <stdio.h>

int main()
{
    int i = 0;
    int a[3] = {8, 4, 6};
    int b[3] = {7, 9, 7};
    for (i = 0; i < 3; i = i + 1)
    {
        if(i % 2 == 0 && (i + 1 < 3))
        {
            b[i + 1] = a[i];
            b[i] = a[i + 1];
        }
    }
    printf("%d ", b[1]);
}
