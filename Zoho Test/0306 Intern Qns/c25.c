#include <stdio.h>
int main()
{
    int a[8] = {24, 27, 36, 17, 9, 3, 10, 33};int i, sum = 0;
    for (i = 0; i < 5; i = i + 1)
    {
        switch (a[i] % 3)
        {
        case 2:
            sum = sum * sum;
            break;
        case 1:
            sum = sum + a[i];
            break;
        case 0:
            sum = sum - a[i];
            break;
        default:
            sum = sum * a[i];
        }
    }
    printf("%d", sum);
}
