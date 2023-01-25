#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    if(n==1||n==0)
    {
    printf("True");
    k=1;
    }
    
    for(i=2;i<=n/2;i++)
    {
        if(n==i*i)
        {
        printf("True");
        k=1;
        break;
        }
    }
    if(k==0)
    printf("False");
}