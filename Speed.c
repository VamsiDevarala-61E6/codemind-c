#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
	int n,i,temp,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int c=1;
	for(i=1;i<n;i++)
	{
	    if(a[i-1]>a[i])
	    c++;
	}
	printf("%d
",c);
}
}