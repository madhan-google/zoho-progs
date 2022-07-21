#include <stdio.h>

int main()
{
    int n = 241, flag = 7, result = 0, t = 1;
    while (n != 0)
    {
        result = result + ((n % 7) * t);
        n = n - (n % flag);
        t = t * 10;
        n = n / flag;
    }
    printf("%d", result);
}
