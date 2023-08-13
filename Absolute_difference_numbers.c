#include<stdio.h>
#include<stdlib.h>
int rev(int n){
    int r=0;
    while(n!=0){
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int v,p=0,j=0,i=0;
    v=rev(n);
    while(k!=i)
    {
        p=p*10+n%10;
        j=j*10+v%10;
        n=n/10;
        v=v/10;
        i+=1;
    }
    printf("%d",abs(rev(p)-j));
}