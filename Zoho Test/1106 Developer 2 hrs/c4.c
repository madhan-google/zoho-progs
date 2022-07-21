#include <stdio.h>

void main()
{
    int arr[5] = {1, 3, 5, 7, 9}, i;
    for (i = 0; i < 5; i = i + 1)
    {
        if (arr[i] / 9 == 0)
        {
            arr[i] = arr[i + 1] + 1;
        }
        else if (arr[i] * 2 > 16)
        {
            arr[i - 1] = arr[i] + arr[i - 1];
            break;
        }
        else
        {
            arr[i] = arr[i] - 1;
        }
    }
    for (i = 0; i < 5; i = +1)
    {
        printf("%d ", arr[i]);
    }
}
