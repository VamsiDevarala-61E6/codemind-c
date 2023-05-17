#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int x,f=0,v=0;
    while(n!=0)
    {
        x=n%10;
        f=f+1;
        if(prime(x)==2)
        {
           v=v+1; 
        }
        n=n/10;
    }
   // printf("%d %d",f,v);
    if(prime(t)==2 && f==v)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}