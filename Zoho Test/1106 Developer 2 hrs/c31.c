#include <stdio.h>
int main()
{
    int c, n = 4, result = 1;
    for (c = 1; c < n; c = c + 1)
    {
        if (c % 2 == 0 || c == 7)
        {
            result = result * c;
            
        }
    }
    printf("%d", result);
}
