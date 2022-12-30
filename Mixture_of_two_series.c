#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=1,b=1,c=0,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
            c++;
            a=pow(2,c);
        }
        else
        {
            printf("%d ",b);
            d++;
            b=pow(3,d);
        }
    }
}