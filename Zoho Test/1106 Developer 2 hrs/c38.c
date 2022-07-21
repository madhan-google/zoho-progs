#include <stdio.h>

int main()
{
    int i = 0, temp = 0;
    int a[3] = {11, 7, 15};
    for (i = 1; 1 < 3; i = i + 1)
    {
        if (a[i] > a[i - 1] || a[i] - 1 == 0)
        {
            temp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = temp;
        }
    }
    printf("%d ", a[1]);
}