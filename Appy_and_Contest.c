#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,a,b,k,c=0,f=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(int j=1;j<=n;j++)
        {
            if(j%a==0 && j%b!=0)
            {
                c++;
            }
            else if(j%b==0 && j%a!=0)
            {
                c++;
            }
            if(c>=k)
            {
                printf("Win
");
                f=f+1;
                break;
            }
        }
        if(f==0)
        {
            printf("Lose
");
        }
    }
}