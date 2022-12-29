#include<stdio.h>
#include<math.h>
int adam(int n)
{
    int x=0;
    int t=n;
    while(n!=0)
    {
    x=(x*10)+(n%10);
    n=n/10;
    }
  return x;
}
int main()
{
    int n;
    scanf("%d",&n);
   	int revn=adam(n);
   	int sqn=n*n;
   	int revsq=revn*revn;
    
    if(adam(revsq)==sqn)
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
    
    
}