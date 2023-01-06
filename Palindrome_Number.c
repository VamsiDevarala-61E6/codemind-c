#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int temp=n;
        int x=0;
        while(n!=0)
        {
            x=(x*10)+(n%10);
            n=n/10;
        }
        if(temp==x)
        printf("True
");
        else
        printf("False
");
    }
}