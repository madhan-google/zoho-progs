#include <stdio.h>
int main()
{
    int s = 0, n = 8, temp;
    for (;;)
    {
        temp = n;
        while (temp)
        {
            s = s + n;
            temp--;
        }
        n--;
        if (n == 0)
        {
            break;
        }
    }
    printf("%d", s);
}
