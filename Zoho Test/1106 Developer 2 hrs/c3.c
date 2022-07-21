#include <stdio.h>

void function(int a)
{
    if (a > 2)
    {
        function(--a);
        function(a--);
        function(a++);
        printf("%d", a);
    }
}
int main()
{
    function(5);
}
