#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int p=pow(x,y);
    int ma=p%m;
    printf("%d",ma);
}