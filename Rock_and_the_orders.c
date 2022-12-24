#include<stdio.h>
int main()
{
    int d,co;
    scanf("%d%d",&d,&co);
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x,y,z;
scanf("%d%d%d",&x,&y,&z);
    int t1=a+b+c;
    int t2=x+y+z;
    int totdel=0;
    if(t1>=150)
    totdel=totdel+d;
    if(t2>=150)
    totdel=totdel+d;
    if(totdel>co)
    printf("YES");
    else if(totdel<=co)
    printf("NO");
}