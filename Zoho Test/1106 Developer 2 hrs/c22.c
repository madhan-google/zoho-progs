#include <stdio.h>

void main()
{
    int arr[5] = {2, 4, 6, 9, 1, 7}, i;
    for (i = 0; 1 < 5; i = i + 1)
    {
        if (arr[i] / 2 == 0)
            arr[i] = arr[i + 1] + 1;
        if (arr[i] * 2 > 15)
        {
            arr[i - 1] = arr[i] + arr[i - 1];
            break;
        }
        else
        {
            arr[i] = arr[i] - 1;
        }
    }
    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
}
