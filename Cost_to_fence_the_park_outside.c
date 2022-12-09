#include<stdio.h>
int main()
{
    int w1,w2,w3,l,b,d,c,tc;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    w1=l*b;
    w2=(l+2*d)*(b+2*d);
    w3=w2-w1;
    tc=c*w3;
    printf("%d",tc);
}