#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=1;
    while(2*max<=n)
    {
        max=max*2;
    }
    int f=max*2;
    int k,v;
    k=n-max;
    v=f-n;
    if(k>v)
    {
        printf("%d",v);
    }
    else if(v>k)
    {
        printf("%d",k);
    }
    
}