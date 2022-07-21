#include <stdio.h>
int main()
{
    char a[] = {'q', 'w', 'e', 'r', 't', 'i'};
    for (int i = 1; i <= 6; i++)
    {
        a[i - 1] = a[i - 1] + i;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c", a[i]);
    }
}
