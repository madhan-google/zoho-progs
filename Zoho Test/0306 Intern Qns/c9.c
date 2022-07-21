#include <stdio.h>
int compute(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        return a + compute(a, --b);
    }
}
int main()
{
    int a = 25, b = 35, result = 0;
    result = compute(a, b);
    printf("%d", result);
}
