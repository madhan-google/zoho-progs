#include <stdio.h>

int main()
{
    int N = 13;
    // int a[13] = {1, 5, 6, 8, 12, 5, 4, 5, 6, 8, 9, 7, 4};
    int a[13] = {5, 9, 12, 7, 13, 9, 14, 1, 5, 10, 12, 15, 2};
    int i = 0, k, temp;
    for (i = 0; i < N; i = i + 1)
    {
        if (i % 2 == 0)
        {
            temp = temp + a[i] * a[i];
        }
        else
        {
            temp = temp - a[i] * 3;
            k = 1;
        }
    }
    printf("%d", temp);
}