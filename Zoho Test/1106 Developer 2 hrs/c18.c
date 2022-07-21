#include <stdio.h>

int main()
{
    int a[2] = {0, 1};
    for (int i = 0; i < 2; i = i + 1)
    {
        do
        {
            printf("%d#,", a[i]);
        } while (i > 2);
        switch (a[i])
        {
        case 3:
            printf("%d#,", a[i] * a[i]);
        case 7:
            printf("%d#,", a[i] + 50);
        default:
            printf("%d#", a[i] - 100);
        }
    }
    return 0;
}
