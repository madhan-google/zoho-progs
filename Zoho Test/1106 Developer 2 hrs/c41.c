#include <stdio.h>

int main()
{
    int N = 9;
    int i = 1, j = 1, k = 1, l = 1;
    for (; i <= N; i = i + 1)
    {
        j = l;
        l = k;
        k = j + l;
    }
    printf("%d ", k);
}
