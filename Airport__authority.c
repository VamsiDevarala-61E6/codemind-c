#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int o;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            o=o+1;
        }
        else
        {
            o=o+2;
        }
    }
    printf("%d",o);
    
}