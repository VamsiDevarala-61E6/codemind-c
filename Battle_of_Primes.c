#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
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
    int a,b;
    scanf("%d%d",&a,&b);
    int k=1;
    while(1)
    {
        if(prime((a+b+k))==1)
        {
            printf("%d",k);
            break;
        }
        k++;
    }
}