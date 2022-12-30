#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int t1=2*x;
        int t2=5*y;
        if(t1>t2)
        printf("Chocolate
");
        else if(t1==t2)
        printf("Either
");
        else if(t1<t2)
        printf("Candy
");
    }
}