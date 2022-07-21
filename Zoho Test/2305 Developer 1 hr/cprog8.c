#include <stdio.h>

#define THIS 0x04
#define THAT 0x03

int main() {
unsigned char va=0x00;
va |= THIS;
va |= THAT;
if(va == THIS & THAT)
printf ("%d", THAT) ;
if(va & THAT << 2)

printf ("%d", THIS);

return 0;

}
