#include <stdio.h>
int s = 1;
void key(int w)
{
    s = s * w;
}
int main()
{
    int a = 1, b;
    for (b = 1; a < 3 && b < 6; b++)
    {
        if (b == 5)
        {
            b = 0;
            a++;
        }
        key(a);
    }
    printf("%d", a);
    return 0;
}
