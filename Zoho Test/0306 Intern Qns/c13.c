#include <stdio.h>
int main()
{
    int a = 19, b = 35, sum = 0, temp;
    for (; a >= 15;)
    {
        temp = a + b;
        if (temp % 5 == 0)
        {
            sum = sum + temp;
        }
        a--;
        b++;
    }
    printf("%d", sum);
}
