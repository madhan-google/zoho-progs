#include<stdio.h>

int main()
{
    int i, j, n = 5, m;
    m = (n+1)/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j){
                if(i>m) printf("%d", (n-i+1));
                else printf("%d", j);
            } else if (i+j == n+1) {
                if(i>m) printf("%d", i);
                else printf("%d", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}