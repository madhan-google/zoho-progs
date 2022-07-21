#include <stdio.h>
int main()
{
    int fact = 1, i = 7;
    do
    {
        fact = fact * i;
        --i;
    } while (i > 0);
    printf("%d", fact);
}
