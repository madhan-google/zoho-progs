#include<stdio.h>
void fun1(int x, int y, int z) {
        printf("%d#%d#%d#", x, y, z);
    }

    void fun2(int *p){
        printf("%d#%d#", ++(*p), (*p)++);
    }

int main() {
    
    int a = 3;
    int *p = &a;
    fun1(a, a++, ++a);
    fun2(p);
    printf("%d", ++a);
    return 0;
}
