#include<stdio.h>
int main()
{
    int a,b,ans=1;
    scanf("%d%d",&a,&b);
    int i=2,c;
    if(a>b)
    {
        c=a;
    }else{
        c=b;
    }
    while(i<c)
    {
        if(a%i==0&&b%i==0)
        {
            ans=ans*i;
            a=a/i;
            b=b/i;
        }else{
            i++;
        }
    }
    int d=ans*a*b;
    printf("%d",d);
}