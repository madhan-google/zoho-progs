#include<stdio.h>
int fun(int x) {
if (x < 5) {
fun(++x) ;
} else if (x < 4) {
fun(fun(++x));
}
printf("%d", x);
return x;
}
int main() {
fun(0.5);
 return 0;
}
