#include <stdio.h>

int main()
{
    int a = 248, i, b, sum = 0, j, val, temp;
    b = a;
    for (i = 0; b != 0; b = b / 10)
    {
        temp = b % 10;
        for (j = i, val = 1; j > 0; j = j - 1)
        {

            val = val * 10;
        }
        if (temp <= 5)
        {
            temp = temp + 2;
        }
        sum = sum + temp * val;
        i = i + 1;
    }
    printf("%d", sum);
}