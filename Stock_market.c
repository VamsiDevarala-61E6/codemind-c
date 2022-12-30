#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)
        printf("LOSS
");
        else if(a<b)
        printf("PROFIT
");
        else if(a=b)
        printf("NEUTRAL
");
    }
}