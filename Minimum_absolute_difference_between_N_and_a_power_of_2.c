#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=1;
    while(2*max<=n)
    {
        max=2*max;
    }
  int l=max*2;
  if(n-max>l-n)
  {
      printf("%d",l-n);
  }
  else
  {
      printf("%d",n-max);
  }
  
}