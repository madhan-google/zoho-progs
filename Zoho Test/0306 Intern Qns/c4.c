#include<stdio.h>

int main()
{
    int a=10,b=15,c=0;
    while(b>0)
    {
        a=c+a-b;
        b= a+1;
        c=b-1;
    }
    printf("%d",a);
}