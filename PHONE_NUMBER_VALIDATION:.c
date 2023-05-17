#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    scanf("%s",&s);
    int l;
    l=strlen(s);
    if(s[0]!=0 && l==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
    
}