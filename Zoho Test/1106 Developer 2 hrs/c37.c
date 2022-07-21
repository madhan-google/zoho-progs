#include <stdio.h>

int main()
{
    int N = 5;
    // int a[5] = {1,5,32,4,9};
    int a[5] = {10, 9, 13, 17, 21};
    int i = 0, k, temp = 1;
    for (i = 0; i < N; i = i + 1)
    {
        temp = temp | a[i];
    }
    printf("%d", temp);
}
