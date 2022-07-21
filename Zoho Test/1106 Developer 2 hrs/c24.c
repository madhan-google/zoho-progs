#include <stdio.h>

int main()
{
    static int var[20];
    int count = 5;
    var[++count] = ++count;
    for (count = 0; count < 20; count++)

        if (var[count] != 0)
            ;
    printf("%d ", var[count]);

    return 0;
}
