#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int x=1;x<=n;x++)
    {
        
    int t,s=0;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t-1;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    int k;
    k=t*(t+1)/2;
    printf("%d
",k-s);
    
    }
}