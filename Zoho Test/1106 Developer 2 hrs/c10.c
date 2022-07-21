#include <stdio.h>
int function1(int a, int b, int c, int count)
{
    if (b > c)
        count = count * b;
    return count;
}
int function2(int a, int b, int c, int count)
{
    if(b < c)
        count = count + c;
    return count;
}
int function3(int a, int b, int c, int count)
{
    if (b > a)
        count = count - a;
    return count;
}
int main()
{
    int a = 5, arr[5] = {10, 5, 0, 10, 20}, count = arr[4];
    // printf("%d ", arr[]);
    while (a >= 0)
    {
        if (a == 4)
            count = function3(arr[a - 1], arr[a], arr[a + 1], count);
        else if (a == 0)
            count = function1(arr[a - 1], arr[a], arr[a + 1], count);
        else
            count = function2(arr[a - 1], arr[a], arr[a + 1], count);
        a = a - 1;
    }
    printf("%d", count);
}
