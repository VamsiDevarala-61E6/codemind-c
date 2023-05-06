#include<stdio.h>
int fact(int n)
{
    int p=1,i;
    for(i=n;i>=1;i--)
    {
        p=p*i;
    }
    return p;
}
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int k;
        scanf("%d",&k);
        int f=fact(k);
        printf("%d
",f);
    }
}