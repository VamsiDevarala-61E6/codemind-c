#include<stdio.h>
int main()
{
	int n,i,temp,j,k;
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
	int c=a[0];
	for(k=0;k<n;k++)
	{
		if(c!=a[k])
		{
			printf("%d",a[k]);
			break;
		}
	}

}