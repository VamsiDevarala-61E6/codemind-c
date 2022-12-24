#include<stdio.h>
int main()
{
    int tot,ex,pd;
    scanf("%d%d%d",&tot,&ex,&pd);
    if(ex*pd>=tot)
    printf("YES");
    else
    printf("NO");
}