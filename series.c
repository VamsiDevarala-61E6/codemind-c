#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a=1,b=1,c=0,d=0;
    scanf("%d",&n);
    printf("0 ");
    for(i=0;i<n-1;i++)
    {
        if(i%2!=0)
        {
        printf("%d ",a);
       
        c++;
         a=pow(2,c);
        }
         else
         {
          printf("%d ",b);
          
          d++;
          b=pow(3,d);
         }
    }
}