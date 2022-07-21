#include <stdio.h>

int value;
int func(int num)
{
    int a, b;
    a = num % 10;
    b = (num - a) / 10;
    value = value + a;
    if (b != 0)
        func(b);
    else
        return (value);
}
void main()
{
    int a;
    a = func(876);
    printf("\n%d", a);
}
