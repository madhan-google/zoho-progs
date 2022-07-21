#include <stdio.h>

void function(int a)
{
    if (a < 0)
    {
        function(++a);
        printf("%d ", a);
        function(a++);
    }
}
int main()
{
    int a = -2;
    function(a);
    return 0;
}
