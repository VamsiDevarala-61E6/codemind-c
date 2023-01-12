#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int c=0;
    while(temp!=0)
    {
        temp=temp/10;
        c++;
    }
    temp=n;
    int x,sum=0;
    while(temp!=0)
    {
       x=temp%10;
       sum=sum+pow(x,c);
       temp=temp/10;
       c--;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
}