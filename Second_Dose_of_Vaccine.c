#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int d,l,r;
        scanf("%d%d%d",&d,&l,&r);
        if(l<=d&&r>=d)
        printf("Take second dose now
");
        else if(l>d)
        printf("Too Early
");
        else if(r<d)
        printf("Too Late
");
    }
}