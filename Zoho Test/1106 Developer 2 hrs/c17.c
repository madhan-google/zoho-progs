#include <stdio.h>
int a[10] = {16, 18, 12, 17, 25, 7, 26, 12, 11, 9};
swap(int i, int j)
{
    int temp = 0;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int fun1(int m)
{
    int count = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i != j || i < j)
            {
                count = count + 1;
                swap(i, j);
            }
        }
    }
    return count % 10;
}
int fun2(int m)
{
    int count = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i != j && i > j)
            {
                count = count + 1;
                swap(i, j);
            }
        }
    }
    return count % 10;
}
void main()
{
    int m = 10, n = 8, i;
    m = fun1(m);
    m = fun2(m);
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
}
