#include <stdio.h>

int main()
{
    int z = 1, k = 1;
    for (;;)
    {
        if (z == 6)
            break;
        else
            k += z;
        z += k;
    }
    printf("\nk : %d", k);
    return 0;
}
