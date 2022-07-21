#include <stdio.h>
int k = 2021;
int cmpute(int a, int b)
{
    k = k + (a * b);
}
int main()
{
    int a = 12, b = 14, c = 24;
    a = cmpute(c, b);
    c = cmpute(b, a);
    b = cmpute(a, c);
    printf("%d", c);
}
