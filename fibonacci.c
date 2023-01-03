#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t1=0,t2=1;
    int t=t1+t2;
    printf("%d %d ",t1,t2);
    for(int i=3;i<=n;i++)
    {
        printf("%d ",t);
        t1=t2;
        t2=t;
        t=t1+t2;
    }
}