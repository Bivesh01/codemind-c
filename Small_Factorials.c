#include<stdio.h>
int main()
{
    int t,n[50],i,fact=1,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=1;j<=n[i];j++)
        {
        fact=j*fact;
        }
        printf("%d
",fact);
        fact=1;
    }
}
