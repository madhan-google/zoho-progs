#include<stdio.h>
int main()
{
int a[] = {6, 9, 15, 10, 8};
int sum = 0;
for (int i=0; i<=3; i++)
{
if (a[i] % (i+1) == 0)
{
sum = sum + a[i];
}
}
printf("%d",sum);
}
