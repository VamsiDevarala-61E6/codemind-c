#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        int x=0;
        while(n!=0)
        {
            x=x*10+(n%10);
            n=n/10;
        }
        printf("%d",x);
    }
    else
    {
        int x=0;
        n=abs(n);
        while(n!=0)
        {
            x=x*10+(n%10);
            n=n/10;
        }
        printf("-%d",x);
    }
}