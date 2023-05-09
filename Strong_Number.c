#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    int t,fr=0;
    t=n;
    while(n!=0)
    {
        x=n%10;
        fr=fr+fact(x);
        n=n/10;
        
    }
    if(fr==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}