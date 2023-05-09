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
    if(c==2)
     return 1;
     else
       return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int x=1;x<=t;x++)
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
        int m,z;
        m=fd-n;
        z=n-bd;
        if(m>z)
        {
            printf("%d
",bd);
        }
        else if(z>m)
        {
            printf("%d
",fd);
        }
        else if(m==z)
        {
            printf("%d
",bd);
        }
    }
}
