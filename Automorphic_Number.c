#include<stdio.h>
#include<math.h>
int dig(int n)
{
    n=n*n;
    return (int)log10(n)+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=dig(n);
    int d=pow(10,p/2);
    if(n==(n*n)%d)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}