#include <stdio.h>
int main()
{
    int x = 30, y = 25, z = 0;
    while (x < 490)
    {
        z = z + x - y;
        x = x +  y;
        y = z - 9;
    }
    printf("%d", y + z);
}
