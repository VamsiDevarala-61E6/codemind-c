#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    fgets(st,1000,stdin);
    char k;
    scanf("%c",&k);
    int c=0,w=0;
    for(int i=0;st[i]!=NULL;i++)
    {
        if(st[i]==k)
        {
        c++;
        w=1;
        }
    }
    if(w==1)
    printf("%d",c);
    else
    printf("-1");
    
}