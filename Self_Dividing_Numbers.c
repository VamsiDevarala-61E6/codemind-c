#include<stdio.h>
void self(int n)
{
    int c=0,v=0,t=n,x;
    while(n!=0)
    {
        x=n%10;
        v++;
        if(x!=0)
        {
        if(t%x==0)
        {
            c++;
        }
        }
        n=n/10;
    }
    if(v==c)
      printf("%d ",t);
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){
        self(i);
    }
}