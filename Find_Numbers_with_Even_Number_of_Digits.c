#include<stdio.h>
int count(int n)
{
    int k=0,x;
    while(n!=0)
    {
        x=n%10;
        k=k+1;
        n=n/10;
    }
    return k;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(count(a[i])%2==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}