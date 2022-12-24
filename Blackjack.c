#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if((21-(a+b))<=10)
    printf("%d",(21-a-b));
    else
    printf("%d",-1);
}