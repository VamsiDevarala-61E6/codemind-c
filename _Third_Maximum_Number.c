#include<stdio.h>
int main()
{
	int n,i,temp,j,k=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	    	}
		}
	}
	if(n>=3)
	{
		for(i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		k++;
		if(k==3)
		{
		    printf("%d",a[i]);
		}
	}
	}
	else
	printf("%d",a[0]);
}