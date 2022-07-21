#include <stdio.h>

void main()
{
    int number = 9345;
    int sum;
    for (sum = 0; number > 0; number /= 10)
    {
        sum = sum + (number % 10);
    }
    printf("%d", sum);
}
