#include <stdio.h>
int main()
{
    int i = 0, n, count = 21;
    while (1)
    {
        n = i;
        do
        {

            count++;

            n--;
        } while (n >= 0);
        if (i++ == 15)

        {
            break;
        }
    }
    printf("%d", count);
}
