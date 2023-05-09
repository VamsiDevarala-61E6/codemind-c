#include<stdio.h>
#include<stdlib.h>
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
    if(c==2)
     return 1;
     else
       return 0;
}
int main()
{
        int n,fd,bd;
        scanf("%d",&n);
        for(int v=n;;v++)
        {
            if(prime(v)==1)
            {
                fd=v;
                break;
            }
        }
        for(int p=n;;p--)
        {
            if(prime(p)==1)
            {
                bd=p;
                break;
            }
        }
        int l,b;
        l=fd-n;
        b=n-bd;
        if(l>b)
        {
        printf("%d",b);
        }
        else
        {
        printf("%d",l);
        }
}
