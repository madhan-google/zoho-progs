#include <stdio.h>

void main()
{
    int i = 0;
    for (i = 0; 1 < 12; i += 2)
    {
        if (i % 2)
            i++;
        else
            i--;
        printf("Hello\n");
    }
}
