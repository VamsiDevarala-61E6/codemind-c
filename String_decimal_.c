#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        char ch[100];
        int f=0;
        scanf("%s",ch);
        int n=strlen(ch);
        for(int x=0;x<n;x++)
        {
            if(ch[x]<48 || ch[x]>56){
                printf("False
");
                f=f+1;
                break;
            }
        }
        if(f==0)
        {
        printf("True
");
        }
    }
    
}