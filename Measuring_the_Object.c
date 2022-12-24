#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    if(a+b+c==n || a+b==n || b+c==n || c+a==n || a==n || b==n || c==n)
    printf("YES");
    else
    printf("NO");
}