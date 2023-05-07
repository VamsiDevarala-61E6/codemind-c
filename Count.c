#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ec,oc;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        ec++;
        else
        oc++;
    }
    printf("%d %d",ec,oc);
}