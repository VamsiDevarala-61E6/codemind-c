#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=2,b=0,i,c=2,d=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
            a=pow(2,c);
            c++;
        }
        else
        {
            printf("%d ",b);
            b=pow(3,d);
            d++;
        }
    }
}