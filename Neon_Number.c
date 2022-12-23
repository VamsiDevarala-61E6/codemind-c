#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int t=n;
    n=n*n;
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    if(sum==t)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}