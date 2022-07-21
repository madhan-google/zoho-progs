#include<stdio.h>
void main(){
    int a = 0;
    a = 5 || 2 | 1;
    a <<= 3;
    a ^= 0xF;
    printf("%d", a);
}