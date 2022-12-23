#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,ec=0,od=0;
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        ec++;
        else
        od++;
        n=n/10;
    }
    if(ec>0 && od==0)
    printf("Even");
    else if(od>0 && ec==0)
    printf("Odd");
    else if(ec>0 && od>0)
    printf("Mixed");
}