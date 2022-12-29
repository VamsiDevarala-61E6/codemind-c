#include<stdio.h>
int pali(int n)
{
	int rev=0;
	int t=n;
	while(n!=0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	if(rev==t)
	return 1;
	else
	return 0;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(!pali(a[i]))
		{
			printf("0");
			return 0;
		}
	}
	printf("1");
	
}