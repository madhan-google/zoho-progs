#include <stdio.h>
int main()
{
    char name[] = {'z', 'o', 'h', 'o', 'c', 'o', 'r', 'p', 'o', 'r', 'a', 't', 'i', 'o', 'n'};
    for (int i = 0, j = 14; i <= 14; i++, j--)
    {
        if (name[i] < name[j])
        {
            name[i] = name[j];
        }
        else
        {
            name[i] = name[i];
        }
    }
    for (int i = 0; i <= 14; i++)
    {
        printf("%c", name[i]);
    }
}