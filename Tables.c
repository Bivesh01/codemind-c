#include<stdio.h>
int main()
{
    int i,n,k,mul;
    scanf("%d",&k);
    scanf("%d",&n);
    {
    for(i=1;i<=n;i++)
    {
        mul=k*i;
        printf("%d x %d = %d
",k,i,mul);
        i=i+1;
        
        continue;
    }
    return 0;
    }
}