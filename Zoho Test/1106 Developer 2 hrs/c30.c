#include <stdio.h>
int main()
{
    int N = 5;
    int i = 1, j = 1, k = 1, l = 1, si = 1, sum = 0;
    while (i <= N)
    {
        j = l;
        l = k;
        k = j + l;

        sum = sum + si * k;
        si = -si;
        i = i + 1;
    }
    printf("%d", sum);
}
