#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    while(n!=0)
    {

        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(rev==temp)
    printf("True");
    else
    printf("False");
}