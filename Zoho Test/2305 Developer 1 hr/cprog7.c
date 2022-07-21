#include<stdio.h>
#define BAR(x, y) ((x)>(y)) ? (x * y):(y - x);
int main() {
int p=14, q=2, r=4;
r += BAR(++p, q++);
printf("%d,%d%d\n", p, q, r);
return -11;
}
