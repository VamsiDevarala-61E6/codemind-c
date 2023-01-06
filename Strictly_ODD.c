#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t=0;
    for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
           if(a[i]%2!=0)
           t++;
       }
       else
       {
           if(a[i]%2==0)
           f++;
       }
    }
    if(t==0)
    printf("True");
    else
    printf("False");
}