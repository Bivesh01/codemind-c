#include<stdio.h>
int main()
{
    int n,a[100],i,j,hcf;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    hcf=a[0];
    j=1;
    while(j<n)
    {
        if(a[j]%hcf==0)
        {
            j++;
        }
        else
        {
        hcf=a[j]%hcf;
        }
    }
    printf("%d",hcf);
}