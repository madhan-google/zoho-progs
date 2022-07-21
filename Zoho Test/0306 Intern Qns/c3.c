#include <stdio.h>

int main()
{
    char a[5] = {'m', 'n', 'o', 'p', 'q'};
    int i;
    for (i = 0; i < 5; i++)
    {
        switch (i % 2)
        {
        case 0:
            a[i] = a[i] + 2;
            break;
        case 1:
            a[i] = a[i] + 3;
            break;
        default:
            a[i] = a[i] + 3;
            break;
        }
    }
    for (i = 0; i < 5; i + 1)
    {
        printf("%c", a[i]);
    }
}
