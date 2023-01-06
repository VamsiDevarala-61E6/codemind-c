#include<stdio.h>
int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
    int i, number, flag=0;
    scanf("%d", &number);

    if(number == 1 || number == 0)
	{
        printf("True", number);
        flag=1;
    }

    for(i = 2; i <= number/2; i++)
    {
        if(number == i*i)
        {
            printf("True
", number);
            flag=1;
            break;
        }
    }
    if(flag == 0)
        printf("False
", number);
   }
}