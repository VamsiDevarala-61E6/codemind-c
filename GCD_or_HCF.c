#include<stdio.h>
int main()
{
    int n,m,min,i,h;
    scanf("%d%d",&n,&m);
    min=n<m?n:m;
    for(i=1;i<=min;i++)
    {
        if(n%i==0 && m%i==0)
        h=i;
    }
    printf("%d",h);
}