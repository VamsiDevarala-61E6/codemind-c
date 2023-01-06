#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f=0,t=0;
    for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
           if(a[i]%2==0)
           t++;
       }
       else
       {
           if(a[i]%2==0)
           f++;
       }
    }
    if(f==0)
    printf("True");
    else
    printf("False");
}