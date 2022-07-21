#include <stdio.h>
int main()
{
    int a = 6371, d = 1, temp, result = 1;
    temp = a;
    while (d)
    {
        d = temp % 10;
        temp = temp / 10;
        d %= 4;
        switch (d)
        {
        case 0:
            result += (a / 100) + (a % 100);
        case 1:
            result += (a / 100) * (a % 100);
        case 2:
            result += (a / 100) - (a % 100);
        case 3:
            result += (a / 100) / (a % 100);
        }
    }
    printf("%d", result);
}
