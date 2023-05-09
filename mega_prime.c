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
    int n;
    scanf("%d",&n);
    int x,f=0;
    if(prime(n)==0)
    {
        printf("Not Mega Prime");
    }
    else
    {
        while(n!=0)
        {
            x=n%10;
            if(prime(x)==0)
            {
                printf("Not Mega Prime");
                 f=f+1;
                 break;
            }
            n=n/10;
        }
        if(f==0)
        printf("Mega Prime");
    }
   
}