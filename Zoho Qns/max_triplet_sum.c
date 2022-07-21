/*
Input : 1 2 3 0 -1 8 10
    Output:  21
    Explanation: 10 + 8 + 3 = 21
Input : 9 8 20 3 4 -1 0
    Output:  37
    Explanation: 20 + 9 + 8 = 37
*/

/* 
 int max1 max2 max3 = INT_MIN 
 loop(i<n){
     if(arr[i]>max1)
     {
         max3 = max2;
         max2 = max1;
         max1 = arr[i];
     }else if(arr[i]>max2)
     {
         max3 = max2;
         max2 = arr[i];
     }else if(arr[i]>max3)
     {
         max3 = arr[i];
     }
 }
 max1+max2+max3;
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int findMaxSum(int *arr, int n)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for(int i =0;i<=n;i++)
    {
        if(arr[i]>max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i]>max2)
        {
            max3 = max2;
            max2 = arr[i];
        }else if(arr[i]>max3)
        {
            max3 = arr[i];
        }
    }
    return max1+max2+max3;
}
int main(int argc, char const *argv[])
{
    int *arr = NULL;
    int n= 0 ;
    char ch;
    int max_sum;
    arr = (int*)malloc(sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed");
        return 0;
    }
    printf("Enter the elements:");
    while (scanf("%d%c",&arr[n],&ch)>0 && ch!='\n')
    {
        /* code */
        n++;
        arr= (int*) realloc(arr,n+1);
    }
    max_sum = findMaxSum(arr,n);
    if(arr)
    {
        free(arr);
        arr= NULL;
    }
    printf("The max triplet sum is %d",max_sum);
    return 0;
}