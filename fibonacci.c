#include<stdio.h>
int main()
{
    int i,n,f=0,f1=0,f2=1;
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++){
    printf("%d ",f);
     f1=f2;
     f2=f;
     f=f1+f2;
     }
    
}