#include<stdio.h>
int main()
{
    int n,a=3,b=-2,d=4,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
              a=(a*3)-4;
  
        }
        else
        {
            printf("%d ",b);
            b=b+d;
            d=d*5;
        }
    }
}