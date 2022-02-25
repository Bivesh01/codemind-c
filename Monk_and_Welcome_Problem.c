#include<stdio.h>
int main()
{
    int n,a1[100],a2[100],res[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n;i++)
    {
        res[i]=a1[i]+a2[i];
        printf("%d ",res[i]);
    }
}