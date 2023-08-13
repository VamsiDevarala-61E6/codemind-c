#include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=n;i>=1;i--){
        f=f*i;
    }
    return f;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,x,s=0;
        scanf("%d",&n);
        int temp=n;
        while(n!=0){
            x=n%10;
            s=s+fact(x);
            n=n/10;
        }
        if(s==temp)
          printf("Strong
");
        else
           printf("Not Strong
");
    }
}