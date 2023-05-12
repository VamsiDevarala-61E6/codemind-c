#include<stdio.h>
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
       
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
       
    }
    
    int al=0,bo=0;
    for(int i=0;i<3;i++)
    {
       if(a[i]>b[i])
       {
           al=al+1;
       }
       else if(a[i]<b[i])
       {
           bo=bo+1;
       }
    }
    printf("%d %d",al,bo);
    
}