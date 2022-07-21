#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    char i, j;
    char n = 5, **arr = NULL, num = 1;
    arr = (int **)malloc(n * sizeof(int *));
    if (arr)
    {
        for (i = 0; i < n; i++)
        {
            *(arr + i) = (int *)malloc(n * sizeof(int));
        }
    }
    for (j = 0; j < n; j++)
    {
        if (j & 1)
        {
            for (i = 0; i < n; i++)
            {
                arr[i][j] = num++;
            }
        }
        else
        {
            for (i = n - 1; i >= 0; i--)
            {
                arr[i][j] = num++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}