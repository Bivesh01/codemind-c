#include<stdio.h>
int main()
{
    int m,n,i,hcf,lcm;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m && i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
            hcf=i;
        }
    }
    lcm=(m*n)/hcf;
    
    printf("%d",lcm);
}