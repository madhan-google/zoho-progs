#include <stdio.h>
void main()
{
    int n = 5, result = 0;
    for (int i = 0; i < 15; i = i + 2)
    {
        if (i < n / 2)
        {
            result = result - i;
        }
        else
        {
            result = result + i;
        }
    }
    printf("%d", result);
}
