#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/float(i);
    }
    printf("%.2f",sum);
}