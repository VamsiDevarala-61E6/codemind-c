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
    int v;
    scanf("%d",&v);
    int temp;
    temp=v;
    int x,fs=0;
    while(v!=0)
    {
        x=v%10;
        fs=fs+(fact(x));
        v=v/10;
    }
    if(temp==fs)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}