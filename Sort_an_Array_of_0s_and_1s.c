#include<stdio.h>
void sort(int a[],int n)
{
	int p,i,max,temp,maxindex;
	for(p=0;p<n-1;p++) // n=8 0 1 2 3 4 5 6
	{
		max=a[0];
		maxindex=0;
		for(i=0;i<n-p;i++)// n=8 1 2 3 4 5 6 7
		{
			if(a[i]>max)
			{
				max=a[i];
				maxindex=i;
			}
		}
		temp=a[maxindex];
		a[maxindex]=a[i-1];
		a[i-1]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}