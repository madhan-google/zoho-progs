/*
Input : zohocorp
    Output : o 3
             c 1 
Input : cocacola
    Output : c 3
             l 1
*/
/*
str = bad => 98 - 97 = 1
int alpha[26] = {0}
loop(i<len)
{
    alpha[str[i]-'a']++
}
alpha[a(0)] = freq of a
alpha[b(1)] = freq of b
loop(i<26)
{
    if(alpha[i]>max)
    {
        max = i;
        max_char = i + 'a'
    }
    if(alpha[i]<min)
    {
        min = i;
        min_char = i + 'a';
    }
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void findMinMaxFreq(char *str,int n,int *max_freq,char *max_char,
                        int *min_freq, char *min_char)
{
    int alpha[26]={0};
    for(int i =0;i<=n;i++)
    {
        alpha[str[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(alpha[i]!=0)
        {
            if(alpha[i]>*max_freq)
            {
                *max_freq = alpha[i];
                *max_char = i + 'a';
            }
            if(alpha[i]<*min_freq)
            {
                *min_freq = alpha[i];
                *min_char = i + 'a';
            }
        }
    }
    
}
int main(int argc, char const *argv[])
{
    char *str = NULL;
    int n =0;
    int min_freq = INT_MAX;
    int max_freq = INT_MIN;
    char max_char, min_char;
    str = (char*)malloc(sizeof(char));
    if(str==NULL)
    {
        printf("memory allocation failed");
        return 0;
    }
    printf("Enter the string:");
    while (scanf("%c",&str[n])>0 && str[n]!='\n')
    {
        n++;
        str = (char*)realloc(str,n+1);
    }
    str[n]='\0';
    findMinMaxFreq(str,n,&max_freq,&max_char,
                        &min_freq, &min_char);
    printf("\n%c %d\n",max_char,max_freq);
    printf("%c %d\n",min_char,min_freq);
    if(str)
    {
        free(str);
        str= NULL;
    }
    return 0;
}